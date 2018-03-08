#include <iostream>
using namespace std;
 int findSingle(int ar[], int ar_size)
{
     int res = ar[0];
     for (int i=1; i < ar_size; i++)
        res = res ^ ar[i];
 return res;
}
 /* Diver function to test above function */
int main()
{
     int ar[] = {2, 3, 5, 4, 5, 3, 4};
     int n = sizeof(ar)/sizeof(ar[0]);
     cout << "Element occurring once is " << findSingle(ar, n);
     return 0;
}
