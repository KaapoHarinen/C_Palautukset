#include <iostream>
#include <cstring>
using namespace std;

const int MAX_HEIGHT = 120;
const int MAX_WIDTH = 60;

char aakkoset[] = { 'a', 'b', 'c', 'd', 'e', 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'x' , 'y' , 'z' };

void Lista(char kirjain)
{
	int r{};
	for (int i = 0; i < sizeof(aakkoset); i++)
	{
		if (aakkoset[i] == kirjain)
		{
			r = i + 1;
			break;
		}
	}
	cout << "Kirjain " << kirjain << " on " << r << "." << " kirjain aakkosissa" << "\n";
}

int main()
{
	char kirjain;
	cout << "Kirjoita kirjain ja saat sen numeron aakkosissa: ";
	cin >> kirjain;

	Lista(kirjain);

	return 0;
}