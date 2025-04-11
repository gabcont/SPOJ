#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(true)
    {
        float in;
        cin >> in;

        int c;
        c = in * 100000000;

        if(c == 0)
            return 0;

        long sum = 0;
        long n = 1;
        for(n = 1;true; n++)
        {
            int incremento = (100000000 / (n + 1));

            if(!incremento)
            {
                n += 1;
                break;
            }
            else
            {
                sum += incremento;
                if(sum > c)
                    break;
            }
        }

        cout << n << " card(s)" << endl;
    }
}