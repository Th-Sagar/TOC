#include<iostream>
#include<string.h>
using namespace std;
int main(){

int n,a,i,j;
char st[120];
string fu_str;
cout<<"Enter the length of the string:";
cin>>a;

cout<<"enter the string:\n";
for( i=0 ; i<a;i++)
{
	cin>>st[i];
}
cout<<"1.prefix \n2.suffix \n3.substring \nEnter any choice:";
cin>>n;
switch (n)
{
	case 1:
		{
			cout<<"the prefix of the string is :"<<endl;
			for(i=0;i<a;i++){
				fu_str = fu_str + st[i];
				cout<<fu_str<<endl;
				
			}
			cout<<"string break";
			
			
			break;
		}
	case 2:
			{
			cout<<"the suffix of the string is :"<<endl;
			for(i=a-1;i>=0;i--){
				fu_str = fu_str + st[i];
				cout<<fu_str<<endl;
				
			}
			break;
		}
		case 3:
			{
			cout<<"the substring of the string is :"<<endl;
			for(i=0;i<a;i++){
				string sta;
				
				for (j=i;j<a;j++){
				sta +=st[j];
				cout<<sta<<endl;
				}
				
				
			}
			break;
		}
		default:
			{
				cout<<"invalid choice";
				break;
			}
		
	}	
}
