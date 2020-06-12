#include <cctype>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <string>
using namespace std;


char i = 's';
int currentX = 0;
int currentY = 0;

void gotoxy (int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void all() {
	char ch;
	int i;
	for(i=1; i<255; i++)
	{
		ch=i;	
		cout<<i<<" - "<<ch<<"\n\n";
	}
	getch();
}

void topleft() {
	currentX++;
	i = 218;
	cout << i; 
}

void bottomleft() {
	i = 192;
	cout << i; 
}

void topright() {
	i = 191;
	cout << i; 
}

void bottomright() {
	i = 217;
	cout << i; 
}

void horwall(int length) {
	i = 196;
	for(int x = 0; x < length; x++){
		cout << i;	
		currentX++;
	}
}

void vertwall(int length) {
	i = 179;
	for(int x = 0; x < length; x++){
		cout << i;
		currentY++;
		gotoxy(currentX, currentY);
	}
}

void makeBox(int height, int width) {
	topleft();
	horwall(width-2);
	topright();
	
	gotoxy(currentX,currentY+1);
	currentY++;
	
	vertwall(height-2);
	bottomright();
	
	gotoxy(0,1);
	currentX = 0;
	currentY = 1;
	vertwall(height-2);
	bottomleft();
	horwall(width-2);
}

void makeBlock() {
	char x = 219;
	cout << x << x;
}

void makeBlockBox(int height, int width) {
	for(int x = 0; x < height; x++) {
		int  originalX = currentX;
		for(int y = 0; y < width; y++) {
			makeBlock();
			currentX++;
		}
		currentX = originalX;
		currentY++;
		gotoxy(currentX, currentY);
	}
}

void setMargin() {
	currentX = 2;
	currentY = 4;
	gotoxy(currentX, currentY);
}

void makeSpace() {
	currentX = currentX + 8;
	gotoxy(currentX, currentY);
}

void makeA() {
	currentY = 9 + 1;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,5);
	
	currentY = 9 + 1;
	currentX = currentX + 8;
	gotoxy(currentX, currentY);
	makeBlockBox(7,2);
	
	currentY = currentY;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlock();
	
	currentY = currentY - 1;
	currentX = currentX - 10;
	gotoxy(currentX, currentY);
	makeBlockBox(2,4);
	
	currentY = currentY - 4;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentY = currentY - 4;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(1,4);
	
	currentX = currentX + 16;
}

void makeB() {
	currentY = 4;
	gotoxy(currentX, currentY);
	makeBlockBox(14,2);
	
	currentY = 4 + 6;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = 4 + 5;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = 4 + 6;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(7,2);
	
	currentY = currentY - 1;
	currentX = currentX - 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = currentY - 3;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentX = currentX + 14;
}

void makeC() {
	currentY = 9 + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(5,2);	
	
	currentY = 9 + 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,4);
	
	currentY = 9 + 1;
	currentX = currentX + 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = 9 + 6;
	currentX = currentX - 8;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);	
	
	currentY = 9 + 7;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,4);
	
	currentY = 9 + 6;
	currentX = currentX + 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentX = currentX + 8;
}

void makeD() {
	currentY = 9 + 1;
	gotoxy(currentX, currentY);
	makeBlockBox(7,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = 9 + 1;
	currentX = currentX + 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = 4;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(14,2);
	
	currentY = currentY - 3;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = currentY - 1;
	currentX = currentX - 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentX = currentX + 16;
}

void makeE() {
	currentY = 9 + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(5,2);
	
	currentY = 9 + 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,4);
	
	currentY = 9 + 1;
	currentX = currentX + 8;
	gotoxy(currentX, currentY);
	makeBlock();
	
	currentY = 9 + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentY = currentY - 1;
	currentX = currentX - 8;
	gotoxy(currentX, currentY);
	makeBlockBox(1,4);
	
	currentY = currentY + 1;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = currentY - 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,4);
	
	currentY = currentY - 3;
	currentX = currentX + 8;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = currentY - 2;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlock();
	
	currentX = currentX + 6;
}

void makeF() {
	currentY = 4 + 1;
	gotoxy(currentX,currentY);
	makeBlockBox(13,2);
	
	currentY = 4;
	currentX = currentX + 2;
	gotoxy(currentX,currentY);
	makeBlockBox(2,3);
	
	currentY = 4 + 4;
	currentX = currentX - 4;
	gotoxy(currentX,currentY);
	makeBlockBox(2,1);
	
	currentY = 4 + 4;
	currentX = currentX + 6;
	gotoxy(currentX,currentY);
	makeBlockBox(2,2);
	
	currentX = currentX + 8;
}

void makeG() {
	currentY = 9 + 1;
	gotoxy(currentX,currentY);
	makeBlockBox(6,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX,currentY);
	makeBlockBox(2,3);
	
	currentY = 9 + 1;
	currentX = currentX + 6;
	gotoxy(currentX,currentY);
	makeBlockBox(2,1);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX,currentY);
	makeBlockBox(10,2);
	
	currentY = currentY - 1;
	currentX = currentX - 2;
	gotoxy(currentX,currentY);
	makeBlockBox(2,2);
	
	currentY = currentY - 1;
	currentX = currentX - 6;
	gotoxy(currentX,currentY);
	makeBlockBox(2,4);
	
	currentY = currentY - 3;
	currentX = currentX - 2;
	gotoxy(currentX,currentY);
	makeBlockBox(2,2);
	
	currentY = currentY - 5;
	currentX = currentX + 2;
	gotoxy(currentX,currentY);
	makeBlockBox(2,3);
	
	currentY = currentY - 3;
	currentX = currentX + 6;
	gotoxy(currentX,currentY);
	makeBlockBox(2,1);
	
	currentX+=10;
}

void makeH() {
	currentY = 4;
	gotoxy(currentX, currentY);
	makeBlockBox(14,2);
	
	currentY = 4 + 5;
	currentX = currentX + 4;
	gotoxy(currentX,currentY);
	makeBlockBox(2,1);
	
	currentY = 4 + 4;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = 4 + 5;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(9,2);
	
	currentX = currentX + 8;
}

void makeI() {
	currentY = 4;
	gotoxy(currentX, currentY);
	
	//dot
	makeBlockBox(2,2);
	
	//big line
	currentY+=3;
	gotoxy(currentX, currentY);
	makeBlockBox(9,2);
	
	currentX = currentX + 8;
}

void makeJ() {
	currentY = 4;
	currentX = currentX + 3;
	gotoxy(currentX, currentY);	
	makeBlockBox(2,2);
	
	currentY+=3;
	gotoxy(currentX, currentY);
	makeBlockBox(11,2);
	
	makeBlock();
	
	currentX = currentX - 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentX = currentX + 12;
}

void makeK() {
	currentY = 4;
	gotoxy(currentX, currentY);
	makeBlockBox(14,2);
	
	currentY = 4 + 8;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(3,1);
	
	for(int x = 0; x < 3; x++) {
		currentY = currentY - 1;
		currentX = currentX + 2;
		gotoxy(currentX, currentY);
		makeBlockBox(2,1);
	}
	currentY = currentY - 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlock();
	
	currentY = 4 + 7;
	currentX = currentX - 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	for(int x = 0; x < 2; x++) {
		currentY = currentY - 3;
		currentX = currentX + 2;
		gotoxy(currentX, currentY);
		makeBlockBox(2,1);
	}
	currentY = currentY - 2;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlock();
	
	currentX+=6;
}

void makeL() {
	currentY = 4;
	gotoxy(currentX, currentY);
	makeBlockBox(14,2);
	currentX+=8;
}

void makeM() {
	currentY = 9;
	gotoxy(currentX, currentY);
	makeBlockBox(9,2);
	
	currentY = 9 + 1;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = 9 + 1;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(8,2);
	
	currentY = 9 + 1;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = 9 + 1;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(8,2);
	
	currentX+=8;
}

void makeN() {
	currentY = 9;
	gotoxy(currentX, currentY);
	makeBlockBox(9,2);
	
	currentY = 9 + 1;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = 9 + 1;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(8,2);
	
	currentX+=8;
}

void makeO() {
	currentY = 9 + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(5,2);
	
	currentY = 9 + 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,4);
	
	currentY = 9 + 1;
	currentX = currentX + 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = 9 + 2;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(5,2);	
	
	currentY = currentY - 1;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = currentY - 1;
	currentX = currentX - 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,4);	
	
	currentY = currentY - 3;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentX+=18;
}

void makeP() {
	currentY = 9;
	gotoxy(currentX, currentY);
	makeBlockBox(14,2);
	
	currentY = 9 + 1;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3); 
	
	currentY = 9 + 1;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(7,2);
	
	currentY = currentY - 1;
	currentX = currentX - 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = currentY - 3;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentX+=14;
}

void makeQ() {
	currentY = 9 + 1;
	gotoxy(currentX, currentY);
	makeBlockBox(7,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = 9 + 1;
	currentX = currentX + 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(14,2);
	
	currentY = 9 + 6;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = currentY - 1;
	currentX = currentX - 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = 9 + 1;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(7,2);
	
	currentX+=18;
}

void makeR() {
	currentY = 9;
	gotoxy(currentX, currentY);
	makeBlockBox(9,2);

	currentY = 9 + 1;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentX+=10;
}

void makeS() {
	currentY = 9 + 1;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,4);	
	
	currentY = 9 + 1;
	currentX = currentX + 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = 9 + 3;
	currentX = currentX - 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = currentY - 1;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = currentY - 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentY = currentY - 1;
	currentX = currentX - 6;
	gotoxy(currentX, currentY);
	makeBlockBox(2,4);
	
	currentY = currentY - 3;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentX+=16;
}

void makeT() {
	currentY = 4 + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(11,2);
	
	currentY = 4;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = 4 + 5;
	currentX = currentX - 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,5);
	
	currentY = 9 + 7;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentX+=10;
}

void makeU() {
	currentY = 9;
	gotoxy(currentX, currentY);
	makeBlockBox(8,2);
	
	currentY = currentY + 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,5);
	
	currentY = 9;
	currentX = currentX + 8;
	gotoxy(currentX, currentY);
	makeBlockBox(8,2);
	
	currentX+=8;
}

void makeV() {
	currentY = 9;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentY = currentY - 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentY = currentY;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = currentY - 2;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(4,2);
	
	currentY = currentY - 4;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,1);
	
	currentY = currentY - 5;
	currentX = currentX;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentX+=10;	
}

void makeW() {
	currentY = 9;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentY = currentY - 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(5,2);
	
	currentY = currentY - 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);	
	
	currentY = 9 + 2;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(5,1);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(4,2);

	currentY = 9 + 2;
	currentX = currentX + 4;
	gotoxy(currentX, currentY);
	makeBlockBox(5,1);
	
	currentY = currentY - 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentY = 9 + 2;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(5,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentX+=8;
}

void makeX() {
	currentY = 9;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = currentY - 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,3);

	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = currentY - 1;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = 9 + 1;
	currentX = currentX + 8;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = 9 + 6;
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = currentY - 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentX+=10;
}

void makeY() {
	currentY = 9;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(1,1);
	
	currentY = currentY - 1;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);	
	makeBlockBox(3,2); 
	
	currentX = currentX - 2;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	
	currentY = currentY - 1;
	currentX = currentX - 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,3);
	
	currentY = 9 + 3;
	currentX = currentX + 8;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentY = 9;
	currentX = currentX + 2;
	gotoxy(currentX, currentY);
	makeBlockBox(3,2);
	
	currentX+=8;
}

void makeZ() {
	currentY = 9;
	gotoxy(currentX, currentY);
	makeBlockBox(2,7);
	
	currentX = currentX + 12;
	gotoxy(currentX, currentY);
	makeBlock();
	
	currentX = currentX - 4;
	gotoxy(currentX, currentY);
	makeBlockBox(2,2);
	for(int x = 0; x < 4; x++) {
		currentY = currentY - 1;
		currentX = currentX - 2;
		gotoxy(currentX, currentY);
		makeBlockBox(2,2);
	}
	
	currentY = currentY - 1;
	gotoxy(currentX, currentY);
	makeBlockBox(2,7);
	
	currentX+=18;
}

int main() {
	system("color 0f");
	
	
	string text = "asdasdasdasdasd";
	cout << "Enter text: ";
	while(text.size() > 12) {
		getline(cin, text);
		if(text.size() > 12)
			cout << " More than 12 characters :< Enter text: ";	
	}
	setMargin();
	vector<char> letters;
	for(int x = 0; x < text.size(); x++) {
		letters.push_back(text[x]);
	}
	int size = letters.size();
	for(int x = 0; x < size; x++) {
		if(letters[x] == 'a')
			makeA();
		else if(letters[x] == 'b')
			makeB();
		else if(letters[x] == 'c')
			makeC();
		else if(letters[x] == 'd')
			makeD();
		else if(letters[x] == 'e')
			makeE();
		else if(letters[x] == 'f')
			makeF();
		else if(letters[x] == 'g')
			makeG();
		else if(letters[x] == 'h')
			makeH();
		else if(letters[x] == 'i')
			makeI();
		else if(letters[x] == 'j')
			makeJ();
		else if(letters[x] == 'k')
			makeK();
		else if(letters[x] == 'l')
			makeL();
		else if(letters[x] == 'm')
			makeM();
		else if(letters[x] == 'n')
			makeN();
		else if(letters[x] == 'o')
			makeO();
		else if(letters[x] == 'p')
			makeP();
		else if(letters[x] == 'q')
			makeQ();
		else if(letters[x] == 'r')
			makeR();
		else if(letters[x] == 's')
			makeS();
		else if(letters[x] == 't')
			makeT();
		else if(letters[x] == 'u')
			makeU();
		else if(letters[x] == 'v')
			makeV();
		else if(letters[x] == 'w')
			makeW();
		else if(letters[x] == 'x')
			makeX();
		else if(letters[x] == 'y')
			makeY();
		else if(letters[x] == 'z')
			makeZ();
		else if(letters[x] == ' ')
			makeSpace();
	}
	
}

