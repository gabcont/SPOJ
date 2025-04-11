#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        long term = n;

        int num = 1, den = 1;
        int inc_num = -1;
        int inc_den = 1;
        int nmax = 1;
        int *a_revisar = &den;

        while(--n)
        {
            //cout << num << " " << den << endl;
            if(*a_revisar == nmax)
            {
                *a_revisar += 1;
                if(a_revisar == &num)
                    a_revisar = &den;
                else
                    a_revisar = &num;

                nmax += 1;
                inc_num *= -1;
                inc_den *= -1;
            }
            else
            {
                num += inc_num;
                den += inc_den;
            }
        }
        cout << "TERM " << term << " IS " << num << "/" << den << endl;
    }
    return 0;
}