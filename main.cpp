#include <iostream>
#include<Node.h>
#include <LinkedList.h>

using namespace std;

int main()
{
    LinkedList LL;
    LL.Add(10);
    LL.Add(20);
    LL.Add(30);
    LL.Add(40);
    LL.Add(50);
    LL.display();
    LL.Delete(30);
    cout<<"-------------------------------------------------------------\n";
    LL.display();
    cout<<"-------------------------------------------------------------\n";
    LL.Delete(20);
    LL.display();
    cout<<"-------------------------------------------------------------\n";
    LL.Delete(20);
    cout<<"-------------------------------------------------------------\n";
    LL.Count();
    cout<<"-------------------------------------------------------------\n";
    LL.displayReversly();
    cout<<"-------------------------------------------------------------\n";
    cout<<"The value is: "<<LL.ValueFromindex(2)<<"\n";
    cout<<"-------------------------------------------------------------\n";
    LL.Delete(10);
    LL.Delete(40);
    LL.Delete(50);
    LL.display();
    cout<<"-------------------------------------------------------------\n";
    return 0;
}
