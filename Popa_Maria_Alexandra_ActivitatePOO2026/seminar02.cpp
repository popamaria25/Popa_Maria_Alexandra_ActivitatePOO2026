//#include<iostream>
//using namespace std;
//struct Cladire
//{
//	char* culoare;
//	float inaltime;
//	int nrEtaje;
//	bool deschis;
//};
//Cladire citireCladire()
//{
//	Cladire c;
//	char x[100];
//	cout << "Culoare";
//	cin >> x;
//	c.culoare = new char[strlen(x) + 1];
//	strcpy_s(c.culoare, strlen(x) + 1, x);
//	cout << "Inaltime";
//	cin >> c.inaltime;
//	cout << "\nnrEtaje";
//	cin >> c.nrEtaje;
//	cout << "\nDeschis(0/1)";
//	cin >> c.deschis;
//	return c;
//}
//void afisareCladire(Cladire c)
//{
//	cout << "Culoare" << c.culoare;
//	cout << "\nInaltime" << c.inaltime;
//	cout << "\nnrEtaje" << c.nrEtaje;
//	cout << "\nDeschis" << c.deschis;
//}
//void modificanrEtaje(int noulnrEtaje, Cladire* c)
//{
//	(*c).nrEtaje = noulnrEtaje;
//}
//void modificanrEtajeprinreferinta(int noulnrEtaje, Cladire& c)
//{
//	c.nrEtaje = noulnrEtaje;
//}
//void main()
//{
//	Cladire c = citireCladire();
//	modificanrEtaje(20, &c);
//	modificanrEtajeprinreferinta(21, c);
//	afisareCladire(c);
//	//char* vectorC;
//	//vectorC = new char[strlen("POO") +1];
//	//strcpy_s(vectorC, strlen("POO")+1 ,"POO");
//	//Cladire c;
//	//int nrCladiri =5;
//	//Cladire* cladiri;
//	//cladiri= new Cladire[nr Cladiri];
//	//cladiri=(Cladire*)malloc(sizeof(Cladire)*nrCladiri);
//}