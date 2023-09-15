#include <iostream>
using namespace std;
int SigmaSum(int from, int to) {
	int sum = 0;
	for (size_t i = from; i <= to; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int M;
	int N;

	cout << "enter M" << endl;
	cin >> M;

	do
	{
		cout << "enter N" << endl;
		cin >> N;
		if (N == 0) {
			cout << "N cannot be 0" << endl;
		}
	} while (N==0);
	
	int i = N * -1;
	int j = 0;

	int firstSum = SigmaSum(i,M);
	int secondSum = SigmaSum(j,N);

	cout << firstSum * secondSum * (1/ pow(i+j,2));
}
