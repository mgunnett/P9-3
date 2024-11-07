#include <iostream>

using namespace std;

void displayRun(int values[], int size);

int main() {
	int values[20] = { 1, 2, 2, 3, 4, 4, 4, 5, 1, 
		1, 2, 3, 3, 3, 6, 6, 6, 6, 5, 5 };

	displayRun(values, 20);

	return 0;
}

void displayRun(int values[], int size) {
     for (int i = 0; i < size; i++) {
          if (i == 0 || values[i] != values[i - 1]) {
              if (i > 0 && values[i - 1] == values[i - 2]) {
                    cout << ")";
                }
              if (i < size - 1 && values[i] == values[i + 1]) {
                    cout << "(" << values[i];
                }
              else {
                    cout << values[i];
              }
          }
          else {
                cout << values[i];
          }
     }
     if (values[size - 1] == values[size - 2]) {
            cout << ")";
     }
     cout << endl;
}