#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<fstream.h>
#include<conio.h>

char un[20];
char sid[20];
char ft[20];

class Admin
{
    private:
    int totitem, price[10];
    char name [20];
    char fmenu[10][10],retype[20];
    char passwd[20], rpasswd[20];
    protected:
    char mobile [15], mail [50],stallid[20];
    public:
    char restid[15];
    public:
    // this function authenticates the login of both admin and food stall protal users.

    int login()
    {
        if((strcmp(::un,restid))==0)
        {
            cout << "\n Enter the login password : ";
            int len =0;
            len = strlen(passwd) ;
            char inputpasswd [20];
            for(itn i=0 ; i< len ; i++)
            {
                inputpasswd[i]=getch();
                cout << "#";
            }
            inputpasswd[i]=NULL;
            if((strcmp(::un, restid)==0) && (strcmp(passwd,inputpasswd)==0))
            return 1;
            else 
            return 0;
        }
        else
        return 0;
    }
    //this function helps in password recovery with the help of unique keyword provided by admin
    int recover()
    {
        //cout << "\n The Input Username is " << ::un ;
        char key[20];
        if(strcmp(::un,restid)==0)
        {
            cout << "\n Enter the Unique Keyword ( Provided by Admin):" ;
            cin >> key ;
            if((strcmp(key,rpasswd)==0))
            {
                cout << "\n You are a valid user.";
                cout << "\n Your password is" << passwd;
                cout << "\n Please exit to login again";
                return 1;
            }
            else
            return 0;
        }
        else
        return 0;
    }
    void getredata()
    {
        cout << "\n Enter the food stall  name:" ;
        gets (name);
        cout <<"\n Enter the food stall id:";
        cin >> restid ;
        cout << "Enter the mobile number :" ;
        gets(mobile);
        cout <<"Enter the emailid :";
        gets (mail);
        cout <<"Enter the stall unique id :";
        gets (stallid);
        cout << "\n Food stall food options possible are \n1.South-Indian\n2.Continental\n3.Chinese\n4.Thailand\n5.Multilple";
        
        int foodtype;
        cout << "\n Enter the food stall food options type(Unique Number)";
        cin >> foodtype;

        if (foodtype==1)
        strcpy("South Indian", retype);
        elseif(foodtype==2)
        strcpy("Continental", retype);
        elseif(foodtype==3)
        strcpy("Chinese", retype);
        elseif(foodtype==4)
        strcpy("thailand", retype);

        else
        strcpy("Multiple",retype);
        cout << "\n Enter the total food menu items :"
        cin >> "totitem" ;

        for (int i=0 ; i < totitem ; i++)
        {
            cout << "\n Enter the food item " << i+1 << "Name :" ;
            cin << fmenu[i] ;
            cout << "Enter the price of food" << i+1 << "INR : " ;
            cin << price[i] ;
        }
            cout << "\n  Create  your login password : " ;
            cin << passwd ;
            cout << "\n Enter the unique keyword to recover the password :" ;
            cin << rpasswd ;
            cout << "\n\n Please note your username is ID, i.e. "<< restid << " \n ";
    }
    void redisplay()
    {
        cout << "\nFood Stall Name                  :"<<name ;
        cout << "\nFood Stall ID                    :"<<restid ;
        cout << "\nFood Stall MObile Number         :"<<mobile ;
        cout << "\nFood Stall Email ID              :"<<mail ;
        cout << "\nFood Stall Food Menu Total Items :"<<totitem ;
        for(int i=0 ; i < totitem ; i++)
        {
            cout <<" \n\tFood Item : " << i+1 << " : " << fmenu[i] <<" :: Price :" << prive[i]; 
        }
        if (totitem==0)
        cout << "(None Food Item specified... )";
    }
    int reprofile()
    {
        if((strcmp( :: un ,retsid) == 0))
        {
            cout << "\nFood Stall Name           :" <<name;
            cout << "\nFood Stall Mobile         :" <<mobile;
            cout << "\nFood Stall Food Item Type :-" <<retype;
            return 1;
        }
        else
        return 0;
    }
    int knowremenu()
    {
        if((strcmp( ::un, restid)==0))
        {
            cout<<"\nFood Stall Food Item Type :-" <<retype;
            cout<<"\nFood Stall Total fmenus:-" <<totitem;
            for(int i=0 ; i<totitem; i++)
            {
                cout << " \n\t Food Item : " << i+1 << " : " << fmenu[i] << " :: Price :" << price[i] ;
            }
            return 1;
        }
        else
        return 0;
    }
    void addremenu()
    {
        if((strcmp( :: un,restid)==0))
        {
            cout << "\nEnter the new food item : ";
            cin >> fmenu[totitem];
            cout << "\nEnter the price of new food  item :";
            cin >>price[totitem] ;

            totitem++;
            cout << "\n\n New fmenu added successfully... ";
        }
    }
    //this function helps a food stall portal user to delete a menu

    void delremenu()
    {
        knowremenu();
        int de=0;
        if((strcmp( :: un, restid)==0))
        {
            if (totitem == 0 || totitem < 0 )
            {
                totitem = 0;
                cout << "\n None fmenu Exist...";
                getch();
                exit(0); 
            }
            cout << "\nEnter the fmenu No. to be deleted : ";
            cin >> de ;
            if (de == totitem)
            {
                totitem--;
                strcpy(fmenu[totitem], " ");
                price[totitem]=NULL;
            } 
            else if(totitem==1)
            {
                totitem=0;
                strcpy(fmenu[totitem], " ");
                price[0]=NULL;
            }
            else
            {
                de--;
                strcpy(fmenu[totitem], " ");
                for(int p=de ; p<totitem ; p++)
                {
                    strcpy (fmenu[p] , fmenu[p+1]);
                    price[p]=price[p+1];
                }
                totitem--;
            }
            cout << " \n Record updated successfully...";
        }
    }
    //this function helps a food stall portal user to modify the personal profile
    void modreprofile()
    {
        if((strcmp(:: un,restid)==0))
        {
            cout << "\nThe profile details are :";
            cout << "\n 1. Food Stall E-mail   :"<<mail;
            cout << "\n 2. Food Stall Mobile   :"<<mobile;
            cout << "\n 3. Food Stall Type     :"<<retype;
            int g=-1;
            cout <<"\n\nEnter the detail number to be modified :"
            cin >> g;
            if (g==1)
            {
                char nmail[50];
                cout << "\nEnter the New mail address : ";
                strcpy(mail , nmail) ;
                cout <<"\nRecords updated successfully....";
            }
            else if(g==2)
            {
                char nmobile[15];
                cout << "\nEnter the new mobile number :";
                gets(nmobile);
                strcpy(mobile,nmobile);
                cout <<"\n Records updated successfully...."
            }
            else if (g==3)
            {
                char nretype[20];
                cout <<"\n Food Stall Food Option Possible are : \n1.South-Indian\n2.Continental\n3.Chinese\n4.Thailand\n5.Multilple";
                int foodtype;
                cout <<"\nEnter the Food Stall Food Option Type (Unique Number)";
                cin>>foodtype;
                if(foodtype==1)
                strcpy("South Indian",nretype);
                else if(foodtype==2)
                strcpy("Continental",nretype);
                else if(foodtype==3)
                strcpy("Chinese",nretype);
                else if(foodtype==4)
                strcpy("Thailand",nretype);

                else 
                strcpy("Multiple",nretype);
                strcpy(retype,nretype);
                cout<< "\nRecords Updated Successfully...";
            }
            else
            cout<<"\nInvalid Input Provided...";
        } 
    }
    int knowremenutocustomer()
    {
        
    }
}