#include <iostream>
#define n 9
using namespace std;
void sumArray(int arr[n], int& sum) {
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	cout << sum;
}
void findMissing(int arr[n], int sum) {
	int expectedSum = 45;
	int missing = expectedSum - sum;
	cout << missing;
}
int main() {
	int arr[n] = { 1, 9, 2, 8, 0, 7, 6, 4, 5 };
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int sum;
	sumArray(arr, sum);
	cout << endl;
	findMissing(arr, sum);
	return 0;
}
