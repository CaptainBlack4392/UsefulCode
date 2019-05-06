//I suppose, you know all about simple things, there will be some useful tricks
#include <iostream>
#include <fstream>

using namespace std;

template <typename T>
void sort(T array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 2; j >= i; j--) {
            if (array[j] >= array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void outputMatrix(int** a) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    //I suppose you know, that c++ is so fast... Let's do it FASTER
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //You know that you can throw a simple array to the function or void, but the matrix?...
    int** a;
    a = new int* [5];
    for (int i = 0; i < 5; i++) {
        a[i] = new int[5];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = (i + j) % 2;
        }
    }

    //Now a is a square matrix 5x5
    outputMatrix(a);

    //Console is for fools
    ifstream Fin;
    ofstream Fout;
    Fin.open("inputFileName.txt");
    Fout.open("outputFileName.txt");
    /*Insert your govnocode here*/
    Fin.close();
    Fout.close();
    //And the last trick - templates
    int firstArray[10];
    for (int i = 0; i < 10; i++) {
        firstArray[i] = 10 - i;
    }
    sort(firstArray, 10);
    for (int i = 0; i < 10; i++) {
        cout << firstArray[i] << " ";
    }
    cout << endl;
    char secondArray[10];
    for (int i = 0; i < 10; i++) {
        secondArray[i] = 'o' - i;
    }
    sort(secondArray, 10);
    for (int i = 0; i < 10; i++) {
        cout << secondArray[i] << " ";
    }
    return 0;
}
