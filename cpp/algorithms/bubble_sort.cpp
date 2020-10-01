#include <bits/stdc++.h>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& a);

void printVector(vector<int> a);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> a;
    int n;
    int no_of_elements;
    cin >> no_of_elements;
    for (int i = 0; i < no_of_elements; i++) {
        cin >> n;
        a.push_back(n);
    }

    printVector(a);

    bubbleSort(a);

    printVector(a);

}

void bubbleSort(vector<int>& a)
{
    bool swapp = true;
    while (swapp) {
        swapp = false;
        for (size_t i = 0; i < a.size() - 1; i++) {
            if (a[i] > a[i + 1] ) {
                a[i] += a[i + 1];
                a[i + 1] = a[i] - a[i + 1];
                a[i] -= a[i + 1];
                swapp = true;
            }
        }
    }
}

void printVector(vector<int> a) {
    for (size_t i = 0;  i < a.size();  i++) {
        cout << a[i] << " ";

    }
    cout << endl;
}
