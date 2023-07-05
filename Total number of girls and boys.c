/*Consider there are two class rooms and each containing X number of boys and Y number of girls in it. 
Write a C++ program to display the total sum of boys and girls in both the classes keeping in view the following guidelines:
a) The name fo the class should be ClassRoom with data maembers NoOfBoys, NoOfGirls in it.
b)Parameterized constructor should be used for initializing the objects.
c) A method namely add(ClassRoom,ClassRoom) with objects as arguments should be used for performing the addition. 
d)Total three objects of ClassRoom type should be created in the main method.
e) The first two objects should be used as arguments to add method and the third object is to store the result returned from 
add method and then display the total number of boys and girls in the resulting object.*/

#include <iostream>
using namespace std;

class ClassRoom
{
    int NoOfBoys;
    int NoOfGirls;
    
    public:
    int total_girls;
    int total_boys;
    
    ClassRoom(int y,int x)
    {
        NoOfBoys=x;
        NoOfGirls=y;
    }
    
    static ClassRoom add(ClassRoom c1,ClassRoom c2) //Use class name to pass the objects to a function
    {
        ClassRoom sample(0,0);
        sample.NoOfBoys=c1.NoOfGirls+c2.NoOfGirls;
        sample.NoOfGirls=c1.NoOfBoys+c2.NoOfBoys;
        return sample;
    }
    
    void display(ClassRoom c3)
    {
        cout<<"Total girls: "<<c3.NoOfGirls<<endl;
        cout<<"Total boys: "<<c3.NoOfBoys;
    }
};

int main()
{
    int g1,b2,b1,g2;
    cin>>g1>>b1>>g2>>b2;
    ClassRoom c1(b1,g1);
    ClassRoom c2(b2,g2);
    ClassRoom c3(0,0);
    
    c3=c3.add(c1,c2);
    c3.display(c3);
    return 0;
}
