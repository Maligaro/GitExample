#include <stdio>

int Square(int x){
    //TODO
}

void Print(int x){
    cout << "num: " << x << endl;
}

int main(){
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int s = Square(i);
        Print(i);
    }
    return 0;
}