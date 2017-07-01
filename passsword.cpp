#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
	char password[15];
	int i,pwd,usr_id,flag=100;
void cmpre_pwd(void)
            {
                    int rid;
                    char rpwd[15];
                    ifstream obj1;
                    obj1.open("password.txt");
                    while(!obj1.eof())
					{
							obj1 >> rid >> rpwd;
		                    if(rid==usr_id)
			                    {
			                    	if(!strcmp(rpwd,password))
									{
										flag = 1;	
										break;
									}
									else
									{
										flag = 0;
										break;
									}
								}
						else
						{
								flag=2;	
						}					
			     	}
                    obj1.close();
                }
int main()
{
	 cout<<"\t Username:";
    cin>>usr_id;
	cout<<"\n\t Password:";
        for(i=0;;i++)
       	{
                        password[i] = getch() ;
                        pwd = password[i] ;
                        if ( pwd ==  13 )
                        {
                            password[i] = '\0';
				                     cout<<"\n\t\t\tThank you.\n \t\tPassword has been entered.\n";
                            break;
                        }
        }
        			/*ofstream obj2;
                    obj2.open("password.txt",ios::app);
                    obj2 << usr_id << " " << password<< endl;
                    obj2.close();*/
   		cmpre_pwd();
	   	cout<< flag;
}
