#include <iostream>
using namespace std;

class Marks{
private:
    int *arr;
    int id;
public:
    Marks(int size,int i){
        arr = new int[size];
        id = i;
        cout << "Created" << endl;
    }
    ~Marks(){
        delete[] arr;
        cout << " Destroyed" << id << endl;
    }
};
int main(){
    Marks m1(5,1);
    Marks m2(5,2);
{
    Marks m3(5,3);
}
cout << "End of main" << endl;
return 0;
}