#include<iostream>
using namespace std;
class sum 
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		float add(float a,float b)
		{
			return a+b;
		}
};
int main()
{
	sum s;
	cout<<"Addition of two interger is: "<<s.add(10,25)<<endl;
	cout<<"Addition of two float is: "<<s.add(2.55f,8.66f)<<endl;
	return 0;
}
