#include <iostream>
#include <string.h>
#include <cstdlib>
#include <limits>
#include <windows.h>
using namespace std;
WORD GetConsoleTextAttribute (HANDLE hCon)
{
  CONSOLE_SCREEN_BUFFER_INFO con_info;
  GetConsoleScreenBufferInfo(hCon, &con_info);
  return con_info.wAttributes;
}
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
const int saved_colors = GetConsoleTextAttribute(hConsole);
void menu();
void currency();
void process();
void physics();
void change();
int a=0;
int b=0;
int c=0;
int d=0;
float Mex=2.63801, Cad=37.71, Eur=54.0888, Usd=50.0367, Gbp=62.3535, Jpy=0.444837, Cny=7.26865, Krw=0.0447874, Sar=13.3826;
char choice;
char answer;
char choiceholder[9999]; //

void intocm()
{
float result1;
float value1;
cout << "Enter value in inches: ";
while(!(cin >> value1))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result1=(value1*2.54);
cout<<"The result is: "<< result1<<"cm\n";
system("pause");
}

void cmtoin()
{
float result2;
float value2;
cout << "Enter value in centimeters: ";
while(!(cin >> value2))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result2=(value2*0.393700787);
cout<<"The result is: "<< result2<<"in\n";
system("pause");
}

void fttom()
{
float result3;
float value3;
cout << "Enter value in feet: ";
while(!(cin >> value3))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result3=(value3*0.3048);
cout<<"The result is: "<< result3<<"m\n";
system("pause");
}

void mtoft()
{
float result4;
float value4;
cout << "Enter value in meters: ";
while(!(cin >> value4))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result4=(value4*3.2808399);
cout<<"The result is: "<< result4<<"ft\n";
system("pause");
}

void ydtom()
{
float result5;
float value5;
cout << "Enter value in yards: ";
while(!(cin >> value5))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result5=(value5*0.9144);
cout<<"The result is: "<< result5<<"m\n";
system("pause");
}

void mtoyd()
{
float result6;
float value6;
cout << "Enter value in meters: ";
while(!(cin >> value6))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result6=(value6*1.0936133);
cout<<"The result is: "<< result6<<"yd\n";
system("pause");
}

void miletokm()
{
float result7;
float value7;
cout << "Enter value in miles: ";
while(!(cin >> value7))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result7=(value7*1.609344);
cout<<"The result is: "<< result7<<"km\n";
system("pause");
}

void kmtomile()
{
float result8;
float value8;
cout << "Enter value in kilometers: ";
while(!(cin >> value8))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result8=(value8*0.621371192);
cout<<"The result is: "<< result8<<"mile/s\n";
system("pause");
}


void atmtoPa()
{
float result9;
float value9;
cout << "Enter value in atm: ";
while(!(cin >> value9))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result9=(value9*101325);
cout<<"The result is: "<< result9<<"Pa\n";
system("pause");
}

void Patoatm()
{
float result10;
float value10;
cout << "Enter value in Pascal: ";
while(!(cin >> value10))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result10=(value10*9.86923267e-6);
cout<<"The result is: "<< result10<<"atm\n";
system("pause");
}

void mmHgtoPa()
{
float result11;
float value11;
cout << "Enter value in mmHg: ";
while(!(cin >> value11))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result11=(value11*133.322368);
cout<<"The result is: "<< result11<<"Pa\n";
system("pause");
}

void PatommHg()
{
float result12;
float value12;
cout << "Enter value in Pascal: ";
while(!(cin >> value12))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result12=(value12*0.00750061683);
cout<<"The result is: "<< result12<<"mmHg\n";
system("pause");
}

void hptoKw()
{
float result13;
float value13;
cout << "Enter value in horsepower: ";
while(!(cin >> value13))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result13=(value13*0.745699872);
cout<<"The result is: "<< result13<<"kW\n";
system("pause");
}

void Kwtohp()
{
float result14;
float value14;
cout << "Enter value in kilowatts: ";
while(!(cin >> value14))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result14=(value14*1.34102209);
cout<<"The result is: "<< result14<<"hp\n";
system("pause");
}

void FtoC()
{
float result15;
float value15;
cout << "Enter value in degrees Fahrenheit: ";
while(!(cin >> value15))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result15=((value15-32)*(0.555555));
cout<<"The result is: "<< result15<<"degrees Celsius\n";
system("pause");
}

void CtoF()
{
float result16;
float value16;
cout << "Enter value in degrees Celsius: ";
while(!(cin >> value16))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
physics();
}
result16=((value16*1.8)+32);
cout<<"The result is: "<< result16<<"degrees Fahrenheit\n";
system("pause");
}


void Mexican()
{
float solve1;
float amount1;
cout <<"Enter the amount in Mexican Peso that you want to convert to Philippine Peso." <<endl;
cout <<"\nAmount in Mexican Peso: ";
while(!(cin >> amount1))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
process();
}
solve1=amount1*Mex;
cout <<"The result is: "<<solve1 <<" Php" <<endl;
}

void Dollar()
{
float solve2;
float amount2;
cout <<"Enter the amount in Canadian Dollar that you want to convert to Philippine Peso." <<endl;
cout <<"\nAmount in Canadian Dollar: ";
while(!(cin >> amount2))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
process();
}
solve2=amount2*Cad;
cout <<"The result is: "<<solve2 <<" Php" <<endl;
}

void Euro()
{
float solve3;
float amount3;
cout <<"Enter the amount in European Euro that you want to convert to Philippine Peso." <<endl;
cout <<"\nAmount in European Euro: ";
while(!(cin >> amount3))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
process();
}
solve3=amount3*Eur;
cout <<"The result is: "<<solve3 <<" Php" <<endl;
}

void Usdol()
{
float solve4;
float amount4;
cout <<"Enter the amount in US Dollar that you want to convert to Philippine Peso." <<endl;
cout <<"\nAmount in US Dollar: ";
while(!(cin >> amount4))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
process();
}
solve4=amount4*Usd;
cout <<"The result is: "<<solve4 <<" Php" <<endl;
}

void Btpd()
{
float solve5;
float amount5;
cout <<"Enter the amount in British Pound that you want to convert to Philippine Peso." <<endl;
cout <<"\nAmount in British Pound: ";
while(!(cin >> amount5))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
process();
}
solve5=amount5*Gbp;
cout <<"The result is: "<<solve5 <<" Php" <<endl;
}

void Jpny()
{
float solve6;
float amount6;
cout <<"Enter the amount in Japanese Yen that you want to convert to Philippine Peso." <<endl;
cout <<"\nAmount in Japanese Yen: ";
while(!(cin >> amount6))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
process();
}
solve6=amount6*Jpy;
cout <<"The result is: "<<solve6 <<" Php" <<endl;
}

void Chny()
{
float solve7;
float amount7;
cout <<"Enter the amount in Chinese Yuan that you want to convert to Philippine Peso." <<endl;
cout <<"\nAmount in Chinese Yuan: ";
while(!(cin >> amount7))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
process();
}
solve7=amount7*Cny;
cout <<"The result is: "<<solve7 <<" Php" <<endl;
}

void Korw()
{
float solve8;
float amount8;
cout <<"Enter the amount in South Korean Won that you want to convert to Philippine Peso." <<endl;
cout <<"\nAmount in South Korean Won: ";
while(!(cin >> amount8))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
process();
}
solve8=amount8*Krw;
cout <<"The result is: "<<solve8 <<" Php" <<endl;
}

void Sary()
{
float solve9;
float amount9;
cout <<"Enter the amount in Saudi Arabian Riyal that you want to convert to Philippine Peso." <<endl;
cout <<"\nAmount in Saudi Arabian Riyal: ";
while(!(cin >> amount9))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
process();
}
solve9=amount9*Sar;
cout <<"The result is: "<<solve9 <<" Php" <<endl;
}

void process()
{
system("cls");
char answer, choice, choicefilter[99];
int a=0;
while (a==0)
{
system("cls");
SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
cout <<"What currency are you converting to Philippine Peso?\nEnter the corresponding letter of the currency you're converting.\n" <<endl;
SetConsoleTextAttribute(hConsole, saved_colors);
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
cout <<" A) Mexican Peso\t\t\t";
cout <<" I) Saudi Arabian Riyal\n\n";
cout <<" B) Canadian Dollar\n\n"; 
cout <<" C) European Euro\n\n";
cout <<" D) US Dollar\n\n";
cout <<" E) British Pound\n\n";
cout <<" F) Japanese Yen\n\n";
cout <<" G) Chinese Yuan\n\n";
cout <<" H) South Korean Won\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
cout <<" Enter letter of choice: ";
cin.getline(choicefilter,99);
cout <<"\n";
if (strlen(choicefilter)==1)
{
choice=choicefilter[0];
if (choice=='a' || choice=='A')
{
Mexican();
system("pause");
break;
}
else if (choice=='b' || choice=='B')
{
Dollar();
system("pause");
break;
}
else if (choice=='c' || choice=='C')
{
Euro();
system("pause");
break;
}
else if (choice=='d' || choice=='D')
{
Usdol();
system("pause");
break;
}
else if (choice=='e' || choice=='E')
{
Btpd();
system("pause");
break;
}
else if (choice=='f' || choice=='F')
{
Jpny();
system("pause");
break;
}
else if (choice=='g' || choice=='G')
{
Chny();
system("pause");
break;
}
else if (choice=='h' || choice=='H')
{
Korw();
system("pause");
break;
}
else if (choice=='i' || choice=='I')
{
Sary();
system("pause");
break;
}
else
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid choice! Please choose one of the choices.\n\n\n"<<endl;
SetConsoleTextAttribute(hConsole, saved_colors);
cout <<"Do you want to go back to Philippine Peso Converter? (Y/N) ";
cin >> answer;
switch(answer)
{
case 'Y':
{
currency();
break;	
}
case 'y': 
{
currency();
break;
}
case 'N':
system("cls");
menu();
break;
case 'n':
system("cls");
menu();
break;
default:
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid choice!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system ("pause");
break;
}
}
else
{
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid choice!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system ("pause");
break;
}
}
}


void change()
{
char z, choiceover[99];
int b=0;
while(b==0)
{
system("cls");
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
cout<<"Which currency would you like to change?\n\n";
cout << "[1] Mexican Peso\t\t";
cout << "[9] Saudi Arabian Riyal\n\n";
cout << "[2] Canadian Dollar\n\n";
cout << "[3] European Euro\n\n";
cout << "[4] US Dollar\n\n";
cout << "[5] British Pound\n\n";
cout << "[6] Japanese Yen\n\n";
cout << "[7] Chinese Yuan\n\n";
cout << "[8] South Korean Won\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
cout <<"ENTER CHOICE: ";
cin.getline(choiceover,99);
if (strlen(choiceover)==1)
{
z=choiceover[0];
switch (z)
{
case '1':
cout<<"Current value = " << Mex << "\n";
cout<< "Enter new value: ";
while(!(cin >> Mex))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
change();
}
b=1;                 //
break;
case '2':
cout<<"Current value = " << Cad << "\n";
cout<<"Enter new value: ";
while(!(cin >> Cad))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
change();
}
b=1;                 //
break;
case '3':
cout<<"Current value = " << Eur << "\n";
cout<<"Enter new value: ";
while(!(cin >> Eur))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
change();
}
b=1;                 //
break;
case '4':
cout<<"Current value = " << Usd << "\n";
cout<<"Enter new value: ";
while(!(cin >> Usd))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
change();
}
b=1;                 //
break;
case '5':
cout<<"Current value = " << Gbp << "\n";
cout<<"Enter new value: ";
while(!(cin >> Gbp))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
change();
}
b=1;                 //
break;
case '6':
cout<<"Current value = " << Jpy << "\n";
cout<<"Enter new value: ";
while(!(cin >> Jpy))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
change();
}
b=1;                 //
break;
case '7':
cout<<"Current value = " << Cny << "\n";
cout<<"Enter new value: ";
while(!(cin >> Cny))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
change();
}
b=1;                 //
break;
case '8':
cout<<"Current value = " << Krw << "\n";
cout<<"Enter new value: ";
while(!(cin >> Krw))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
change();
}
b=1;                 //
break;
case '9':
cout<<"Current value = " << Sar << "\n";
cout<<"Enter new value: ";
while(!(cin >> Sar))
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid input!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
system("cls");
change();
}
b=1;                 //
break;
default:
SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
cout<<"\nInvalid choice!\n\n\n";
SetConsoleTextAttribute(hConsole, saved_colors);
system("pause");
b=0;                  //
break;
}
}
else    
{
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout<<"\nInvalid choice!\n\n\n";
	SetConsoleTextAttribute(hConsole, saved_colors);
	system("pause");
	b=0;                            //
}
}
}

void currency()
{
	char number, choicelocker[99];
	int a=0;
	while(a==0)
	{
	system("cls");
  	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout<<"************************************\n";
  	cout<<"Welcome to Philippine Peso Converter\n";
	cout<<"************************************\n";
	SetConsoleTextAttribute(hConsole, saved_colors);
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout<<"\n\nWhat do you like to do?\n";
	cout<<"\n[1]Convert a specific currency value to be converted to Philippine Peso.\n";
	cout<<"\n[2]Change corresponding currency value.\n";
	cout<<"\n[3]Go back to main menu.\n";
	cout<<"\nChoose your number of choice: ";
	SetConsoleTextAttribute(hConsole, saved_colors);
	cin.getline(choicelocker,99);
	if (strlen(choicelocker)==1)
	{
	number=choicelocker[0];
	switch(number)
	{
	case '1':
		{
			process();
			break;
		}
	case '2':
		{
			change();
			break;
		}
	case '3':
		{
			menu();
			break;
		}
	default:
		{
			
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout<<"\nInvalid choice!\n\n\n";
  			SetConsoleTextAttribute(hConsole, saved_colors);
			system("pause");
			break;
		}
	}
	}
	else if (strlen(choicelocker)>1)
	{
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout<<"\nInvalid choice!\n\n\n";
  			SetConsoleTextAttribute(hConsole, saved_colors);
			system("pause");
			currency();
	}
}
}

void physics()
{
	while (c==0)
	{
	char number;
	system("cls");
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout<<"******************************\n";
	cout<<"Welcome to our Unit Converter!\n";
	cout<<"******************************\n";
  	SetConsoleTextAttribute(hConsole, saved_colors);
  	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout<<"\n[A]in to cm\t\t";
	cout<<"[B]cm to in\t\t";
	cout<<"[Q]Go back to main menu.\t\t";
	cout<<"\n[C]ft to m\t\t";
	cout<<"[D]m to ft\n";
	cout<<"\n[E]yd to m\t\t";
	cout<<"[F]m to yd\n";
	cout<<"\n[G]mile to km\t\t";
	cout<<"[H]km to mile\n";
	cout<<"\n[I]atm to Pa\t\t";
	cout<<"[J]Pa to atm\n";
	cout<<"\n[K]mmHg to Pa\t\t";
	cout<<"[L]Pa to mmHg\n";
	cout<<"\n[M]hp to kW\t\t";
	cout<<"[N]kW to hp\n";
	cout<<"\n[O]°F to °C\t\t";
	cout<<"[P]°C to °F\n";
	SetConsoleTextAttribute(hConsole, saved_colors);
	cout<<"\nChoose your number of choice: ";
	cin.getline(choiceholder,99999); 
	if (strlen(choiceholder)==1)
	{                       //
	number=choiceholder[0];                               //
	switch(number)
	{
	case 'A':
	intocm();
	break;
	case 'a':
	intocm();
	break;
	case 'B':
	cmtoin();
	break;
	case 'b':
	cmtoin();
	break;
	case 'C':
	fttom();
	break;
	case 'c':
	fttom();
	break;
	case 'D':
	mtoft();
	break;
	case 'd':
	mtoft();
	break;
	case 'E':
	ydtom();
	break;
	case 'e':
	ydtom();
	break;
	case 'F':
	mtoyd();
	break;
	case 'f':
	mtoyd();
	break;
	case 'G':
	miletokm();
	break;
	case 'g':
	miletokm();
	break;
	case 'H':
	kmtomile();
	break;
	case 'h':
	kmtomile();
	break;
	case 'I':
	atmtoPa();
	break;
	case 'i':
	atmtoPa();
	break;
	case 'J':
	Patoatm();
	break;
	case 'j':
	Patoatm();
	break;
	case 'K':
	mmHgtoPa();
	break;
	case 'k':
	mmHgtoPa();
	break;
	case 'L':
	PatommHg();
	break;
	case 'l':
	PatommHg();
	break;
	case 'M':
	hptoKw();
	break;
	case 'm':
	hptoKw();
	break;
	case 'N':
	Kwtohp();
	break;
	case 'n':
	Kwtohp();
	break;
	case 'O':
	FtoC();
	break;
	case 'o':
	FtoC();
	break;
	case 'P':
	CtoF();
	break;
	case 'p':
	CtoF();
	break;
	case 'Q':
	system("cls");
	menu();
	break;
	case 'q':
	system("cls");
	menu();
	break;
	default:
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout<<"\nInvalid choice!\n\n\n";
  	SetConsoleTextAttribute(hConsole, saved_colors);
	system("pause");
	break;
	}
	}
}
}

void menu()
{
	system("cls");
	char x;
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout<<"******************************\n\n";
	cout<<"Developed by: \n\n";
	cout<<"Balayo II, Rafael John A.\n";
	cout<<"Casignia, Vina Lynn D.\n";
	cout<<"Remiendo, Christian C.\n";
	cout<<"Samson, Jerard Michael T.\n\n\n";
	cout<<"******************************\n";
	cout<<"WELCOME TO OUR 2in1 CONVERTER!\n";
	cout<<"******************************\n\n\n";
  	SetConsoleTextAttribute(hConsole, saved_colors);
  	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout<<"Pick your desired converter: \n\n";
	cout<<"[1] Unit Converter.\n\n";
	cout<<"[2] Philippine Peso Converter.\n\n";
	cout<<"[3] Exit program.\n\n";
	cout<<"Enter number of choice: ";
	SetConsoleTextAttribute(hConsole, saved_colors);
	cin.getline(choiceholder,99);
	if (strlen(choiceholder)==1)
	{
	x=choiceholder[0];
	switch(x)
	{
	case '1':
		{
		physics();
		break;
		}
	case '2':
		{
		currency();
		break;
		}
	case '3':
		{
		system("pause");
		exit(0);
		break;
		}
	default:
		{
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout<<"\nInvalid choice!\n\n\n";
  		SetConsoleTextAttribute(hConsole, saved_colors);
		system("pause");
		system("cls");
		menu();
		}
	}
	}	
	else
	{
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout<<"\nInvalid choice!\n\n\n";
  		SetConsoleTextAttribute(hConsole, saved_colors);
		system("pause");
		system("cls");
		menu();
	}
}

int main()
{
	menu();
	return 0;
	
}
