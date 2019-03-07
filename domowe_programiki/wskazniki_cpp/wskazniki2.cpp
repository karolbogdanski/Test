#include <iostream>
using namespace std;

struct point{
	
	int x;
	int y;
	int z;
	
}Punkt;

void wprowadz(point *wsk_punkt){
	
	cin >> wsk_punkt -> x;
	cin >> wsk_punkt -> y;
	cin >> wsk_punkt -> z;
}

void drukuj(point punkt){
	cout << punkt.x << " ";
	cout << punkt.y << " ";
	cout << punkt.z << " "<< endl;
}

int main(int argc, char **argv)
{
	point punkt1;
	point punkt2;
	
	point *wsk_p1 = &punkt1;
	point *wsk_p2 = &punkt2;
	
	cout << "Wprowadź współrzędne punkt1" << endl;
	wprowadz(wsk_p1);
	cout << "Wprowadź współrzędne punkt2" << endl;
	wprowadz(wsk_p2);
	
	drukuj(punkt1);
	drukuj(punkt2);
	
	/*cin >> punkt1.x;
	cin >> punkt1.y;
	cin >> punkt1.z;
	
	cout << punkt1.x << endl;
	cout << punkt1.y << endl;
	cout << punkt1.z << endl;
	*/
	
	return 0;
}

