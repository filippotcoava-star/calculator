#include <iostream>

using namespace std;
int n;
float a,b,x;
char op;
bool ok;

int main()
{
    cin >> n;
    cin >> x;
    for (int i=0;i<n-1;i++) {
        cin >> op >> b;
        switch (op){
        case '+':
            x=x+b;
            break;
        case '-':
            x=x-b;
            break;
        case '*':
            x=x*b;
            break;
        case '/':
            x=x/b;
            break;
        case '%':
            x=(int)x%(int)b;
            break;
        default:
            cout <<"nu exista";
            ok=true;
        }
    }
    if (ok==false){
        cout << x;
    }
}
//1|+2|+3|+4|+5|
