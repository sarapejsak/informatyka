// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "ile liczb pierwszych chcesz wyświetlić: ";
	cin >> n;
	int lp = 0;
	int p = 2;
	bool jakos;

	while (lp < n) {
		jakos = true;
		for (int d = 2; d < p - 1; d++) {
			if (p % d == 0)
				jakos = false;
		}
		if (jakos == true) {
			cout << p << " ";
			lp += 1;
		}
		p += 1;
	}

}
