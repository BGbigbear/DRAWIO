#include <fstream>
#include "TopK.h"
using namespace std;

int b[20] = { 23,45,65,98,24,64,12,8,45,12,
		   21,34,54,31,64,86,23,4,52,93 };

int main() {
	ifstream fin("D:\\data.txt");
	assert(fin);
	int n;
	assert(fin >> n);
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		fin >> a[i];
	}
	MinHeap</*int,*/int> h(a, n);
	for (int j = 0; j < 20; j++) {
		h.Insert(b[j]);
	}
	cout << "最小的k个数为：";
	h.output();
	cout << "Press enter to exit!\n";
	cin.ignore(100, '\n');
	char ch;
	cin.get(ch);
	return 0;
}
