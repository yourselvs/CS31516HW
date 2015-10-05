#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
   for(int i = 40; i <= 47; i++) {
      for(int j = 31; j <= 107; j++) {
         if(j >= 31 && j <= 37 || j >= 41 && j <= 47 ||
            j >= 90 && j <= 97 || j >= 100 && j <= 107 ) {
            	cout << "\033[" << i <<";" << j << "m";
            	cout << "()......." << endl;
	    	cout << ".()......"<< endl;
		cout << "...()...." << endl;
		cout << ".....().." << endl;
		cout << "......()." << endl;
		cout << ".......()" << endl;
		cout << ".......()" << endl;
		cout << "......()." << endl;
		cout << ".....().." << endl;
		cout << "...()...." << endl;
		cout << ".()......" << endl;
		cout << "().......";	
            cout << "\033[0m" << endl;
         }
      }
   }
   return 0;
}
