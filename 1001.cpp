#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int t = a + b;
    if (t < 0) {
        cout << "-";
        t = -t;
    }

    if (t == 0) {
        cout << "0";
        return 0;
    }

    //to string
    vector<int> s;
    int maxN = (int)log10(t);
    for (int i = maxN; i >= 0; i--) {
        int n = t % (int)(pow(10, i + 1)) / (int)(pow(10, i));
        s.push_back(n);
    }

   

    //output
    int N = s.size();
    for (int i = 0; i < N; i++)
    {
        cout << s[i];
        if ((N - 1 - i) % 3 == 0) {
            if (i != N - 1) {
                cout << ",";
            }
        }
	}


    return 0;
}

/*if (t > 1000000) {
    int n1 = t / 1000000;
    int n2 = (t / 1000) % 1000;
    int n3 = t % 1000;
    cout << n1 << "," << n2 << "," << n3;
}
else if (t > 1000) {
    cout << t / 1000 << "," << t % 1000;
}
else {
    cout << t;
}*/

/*int n3 = t % (int)(pow(10, 3)) / (int)(pow(10, 2));
   s.push_back(n3);
   int n2 = t % (int)(pow(10, 2)) / (int)(pow(10, 1));
   s.push_back(n2);
   int n1 = t % (int)(pow(10, 1)) / (int)(pow(10, 0));
   s.push_back(n1);*/