    #include <bits/stdc++.h>

    using namespace std;

    int main(void)
    {
        int a, d;
        while(true)
        {
            cin >> a >> d;
            if (a == 0)
                return 0;
            
            int a_bajo = 10000;
            for (auto i = 0; i < a; i++)
            {
                int input;
                cin >> input;

                if (input < a_bajo)
                {
                    a_bajo = input;
                }
            }

            vector<int> ds(d);
            for (auto i = 0; i < d; i++)
            {
                cin >> ds[i];
            }

            sort(ds.begin(), ds.end());
            
            if (a_bajo < ds[1])
                cout << "Y";
            else
                cout << "N";
            cout << endl;        
        }
        return 0;
    }