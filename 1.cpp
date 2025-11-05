 #include <iostream>
using namespace std;

// Function to print a Ssimple star pyramid
void starPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }
}

// Function to print a diamond pattern
void diamond(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }
}

// Function to print a hollow diamond pattern
void hollowDiamond(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++)
            if (k == 1 || k == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++)
            if (k == 1 || k == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        cout << endl;
    }
}

int main() {
    int choice, n;
    cout << "Enter the size of the pattern: ";
    cin >> n;
    
    cout << "Choose the pattern to print:\n";
    cout << "1. Star Pyramid\n2. Diamond\n3. Hollow Diamond\n";
    cin >> choice;
    
    switch (choice) {
        case 1:
            starPyramid(n);
            break;
        case 2:
            diamond(n);
            break;
        case 3:
            hollowDiamond(n);
            break;
        default:
            cout << "Invalid choice!";
    }
    return 0;
}

