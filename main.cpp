#include <stdio>

int Square(int x){
    return x * x;
}

void Print(int x){
    //TODO
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