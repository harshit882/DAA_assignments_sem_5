#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        int n, t, mx = -999;
        cin>>n;
        cin>>s;
        vector<int> cnt(26);
        for(int i = 0;i < s.length();i++)
        {
            cnt[s[i]-'a']++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if(mx<cnt[i]) mx = cnt[i];
        }
        for (int i = 0; i < cnt.size(); i++)
        {
            if (cnt[i] == mx && mx != 1)
            {
                char c = i+'a';
                cout << c <<"-"<<cnt[i]<<endl;
                break;
            }
            else if(mx == 1){
                cout<<"********Not Found*******"<<endl;
                break;
            }
        }
    }

    return 0;
}
