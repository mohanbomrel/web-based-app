#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

void getShapeDetails(string &shapeColor, bool &shapeFill);
void getCircleDetails(double &radius);
void getRectangleDetails(double &length, double &width);

int main(){
	
	string shapeColor;
	bool shapeFill;
	double radius, length, width;
	int shapeVal;
	char waitVal;
	
	cout << "Checking if the constructor with no arguments work:\n\t";
	Shape shp1;
	cout << shp1.toString();
	cout << "\nIt works!\n";
	
	getShapeDetails(shapeColor, shapeFill);
	
	cout << "Checking if the constructor with arguments work:\n\t";
	Shape shp2(shapeColor, shapeFill);
	cout << shp2.toString();
	cout << "\nIt worked too!\n";
	
	cout << "\n\nChoose a shape: \n\n1. Circle\n2. Rectangle\n3. Square\n\n Choose a shape (1/2/3): ";
	cin >> shapeVal;
	
	system("cls");
	
	if (shapeVal==1){
		
			cout << "With default constructor: \n";
			Circle circ1;
			cout << "\n\n" << circ1.toString() << " of area: " << circ1.getArea() << " and perimeter: " << circ1.getPerimeter();
			cout << "\n----------------------------------------\n";
			
			cout << "\n\nWith a single argument 'radius' : \n";
			getCircleDetails(radius);
			Circle circ2(radius);
			cout << "\n" << circ2.toString() << " of area: " << circ2.getArea() << " and perimeter: " << circ2.getPerimeter();
			cout << "\n----------------------------------------\n";
			
			cout << "\n\nWith three arguments 'radius', 'shapeColor' and 'shapeFill':\n";
			Circle circ3(radius, shapeColor, shapeFill);
			cout << circ3.toString() << " of area: " << circ3.getArea() << " and perimeter: " << circ3.getPerimeter();
			
	}
			
	else if (shapeVal==2){
			
			cout << "With default constructor: \n";
			Rectangle rec1;
			cout << "\n\n" << rec1.toString() << " of area: " << rec1.getArea() << " and perimeter: " << rec1.getPerimeter();
			cout << "\n----------------------------------------\n";
			
			cout << "\n\nWith arguments 'length' and 'breadth': \n";
			getRectangleDetails(length, width);
			Rectangle rec2(length, width);
			cout << "\n" << rec2.toString() << " of area: " << rec2.getArea() << " and perimeter: " << rec2.getPerimeter();
			cout << "\n----------------------------------------\n";
			
			cout << "\n\nWith four arguments 'length', 'breadth', 'shapeColor' and 'shapeFill':\n";
			Rectangle rec3(length, width, shapeColor, shapeFill);
			cout << rec3.toString() << " of area: " << rec3.getArea() << " and perimeter: " << rec3.getPerimeter();
		
	}
			
	
			
			
			
	}
	
	
void getShapeDetails(string &shapeColor, bool &shapeFill){
	cout << "\n\nEnter color of shape: ";
	cin >> shapeColor;
	
	cout << "Is the shape filled? (1 for true/0 for false) ";
	cin >> shapeFill;
}

void getCircleDetails(double &radius){
	cout << "Enter radius of circle: ";
	cin >> radius;
}

void getRectangleDetails(double &length, double &width){
	cout << "Enter length: ";
	cin >> length;
	
	cout << "Enter breadth: ";
	cin >> width;
}
