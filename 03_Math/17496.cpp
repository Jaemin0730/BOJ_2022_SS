#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <list>
#include <cmath>
#include <set>
using namespace std;
#define ll long long

void g(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(int argc, char **argv)
{
    g();
    int n, t, c, p;
    cin >> n >> t >> c >> p;
    int temp = n / t;
    if (n % t == 0) {
        temp -= 1;
    }
    cout << temp * c * p;
}