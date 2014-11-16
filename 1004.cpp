/*#include<iostream>
using namespace std;
const int maxsize=100;
template<class T>
class SeqList
{
public:
	SeqList(T a[],int n);
	~SeqList(){}
	void resort(T a[]);
	void Delete(T i);
	void PrintList();
private:
	T data[maxsize];
	int length;
};
template<class T>
SeqList<T>::SeqList(T a[],int n)
{
	for(int i=0;i<n;i++)
		data[i]=a[i];
	length=n;
}
template<class T>
void SeqList<T>::resort(T a[])
{
	for(int i=0;i<length;i++)
		data[i]=a[length-i-1];
}
template<class T>
void SeqList<T>::Delete(T x)
{
	int j=0;
	for(int i=0;i<length;i++)
		if(x==data[i])
        {
			for(j=i;j<length;j++)
		       data[j]=data[j+1];
		       length--;
		}
	
}
template<class T>
void SeqList<T>::PrintList()
{
	for(int i=0;i<length;i++)
		cout<<data[i]<<" ";
	cout<<endl;
}
int main()
{
	int num1=0, num2=0,num3=0;
	int delnum1;
	char delnum2;
	double delnum3;
	int list1[maxsize];
	char list2[maxsize];
	double list3[maxsize];
	cin>>num1;
	for(int i=0;i<num1;i++)
		cin>>list1[i];
	cin>>delnum1;
	
	cin>>num2;
	for(int i=0;i<num2;i++)
		cin>>list2[i];
	cin>>delnum2;
	
	cin>>num3;
	for(int i=0;i<num3;i++)
		cin>>list3[i];
	cin>>delnum3;
	
	SeqList<int>a1(list1,num1);
	SeqList<char>a2(list2,num2);
	SeqList<double>a3(list3,num3);
	a1.resort(list1);
	a1.PrintList();
	a1.Delete(delnum1);
	a1.PrintList();
	a2.resort(list2);
	a2.PrintList();
	a2.Delete(delnum2);
	a2.PrintList();
	a3.resort(list3);
	a3.PrintList();
	a3.Delete(delnum3);
	a3.PrintList();
	a3.~SeqList();
	system("pause");
	return 0;

}*/
#include<iostream>
#define MAXNUM 1001
using namespace std;
int n,i,j;
template<class T,int num>
class myclass{
 public:
        T arr[num];      
        void traverse(T arr[])
        {
           for(int i=n-1;i>=0;i--)
           {
               cout<<arr[i]<<" "; 
           } 
           cout<<endl;
        }
        void remove(T arr[],T a)
        {
            for(int i=n-1;i>=0;i--)
            {
               if(arr[i]!=a)
               {
                    cout<<arr[i]<<" ";
               } 
            }
            cout<<endl; 
        }
};
template<class T>
void f(myclass<T,MAXNUM> myClass)
{
  for(j=0;j<n;j++)
  {
        cin>>myClass.arr[j];
  } 
  T removenum;
  cin>>removenum;
  myClass.traverse(myClass.arr);
  myClass.remove(myClass.arr,removenum);
} 
int main(){

   for(i=0;i<3;i++)
   {
        cin>>n;
        if(i==0)
        {
            myclass<int,MAXNUM> myClass;
            f(myClass);
        }
        else if(i==1)
        {
            myclass<char,MAXNUM> myClass;
            f(myClass);
        }
        else if(i==2)
        {
            myclass<float,MAXNUM> myClass;
            f(myClass);
        }
   }
   system("pause");
   return 0; 
}
