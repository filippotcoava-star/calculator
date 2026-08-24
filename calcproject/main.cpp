#include <iostream>

using namespace std;

float a,b,x;
char op;
bool ok;

int main()
{
    cin >> a >> op >> b;
    switch (op){
        case '+':
            x=a+b;
            break;
        case '-':
            x=a-b;
            break;
        case '*':
            x=a*b;
            break;
        case '/':
            x=a*b;
            break;
        case '%':
            x=(int)a%(int)b;
            break;
        default:
            cout <<"nu exista";
            ok=true;
    }
    if (ok==false){
        cout << x;
    }
}
//    cin >> a >> op >> b;
//    //cout << a << " " << op << " " << b;
//    if (op=='+'){
//        x=a+b;
//    }
//    else if (op=='-'){
//        x=a-b;
//    }
//    else if (op=='*'){
//        x=a*b;
//    }
//    else if (op=='/'){
//        x=a/b;
//    }
//    else if (op=='%'){
//        x=(int)a%(int)b;
//    }
//    cout << x;
//    return 0;
