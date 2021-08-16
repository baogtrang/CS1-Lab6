//Bao Trang
//Computer Science 1 - Professor Benjamin Shelton
//This program will demonstrate how the switch statement works
#include <iostream>
#include <iostream>
#include <fstream>
	using namespace std;
	int main()
	{
		ofstream outFile("output.txt");

		int count = 1;
		outFile << "Bao Trang" << endl;
		outFile << "Computer Science 1 - Professor Benjamin Shelton" << endl;
		outFile << "This program will demonstrate how the switch statement works." << endl;

		while (count <= 5)
		{
			//show user the menu
			int selection;
			cout << "Which formula do you want to see?\n\n";
			cout << "1. Area of a circle\n";
			cout << "2. Area of a rectangle\n";
			cout << "3. Volume of a cylinder\n";
			cout << "4. None of them!\n";
			cin >> selection;

			//switch section
			switch (selection)
			{
			case 1: outFile << "Pi times radius squared\n";
				break;

			case 2: outFile << "Length times width\n";
				break;

			case 3: outFile << "Pi times radius squared times height\n";
				break;

			case 4: outFile << "Well okay then...Goodbye!\n";
				break;

			default: outFile << "Not good with numbers, eh?\n"; //works like else as in if/else statement
			}
			
			count += 1;
		}
		outFile.close();
		return 0;
	}

	

