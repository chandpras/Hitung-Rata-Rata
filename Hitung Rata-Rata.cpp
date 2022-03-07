#include <iostream>
using namespace std;

void HitungRataRata()
{
	float nilai, n = 0, mean;
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> nilai;
        n = n + nilai;
    }
    
    mean = n/N;
    cout << mean;
}

int main()
{
	HitungRataRata();
}
