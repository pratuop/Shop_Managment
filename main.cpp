// void item()
// {
//     cout << "1)Chips " << endl;
//     cout << "Amount is 10";
//     cout << "Do You Want to Add or Skip(A/S)";
//     cin >> choice;
//     if (choice == 'A' and 'a')
//     {
//         pr_name[1] = "1]Chips";
//         pr_amt[1] = 10;
//         cout << "2)Corn " << endl;
//         cout << "Amount is 12";
//         cout << "Do You Want to Add or Skip(A/S)";
//         if (choice == 'A' and 'a')
//         {
//             pr_name[1] = "1]Chips";
//             pr_amt[1] = 10;
//         }
//     }
// }

#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string costo_name;
long long int costo_num;
int Total_Bill = 0;

class store

{
public:
   // char choice;
    string pr_name[50];
    int pr_amt[50];
    string conf_name[20];
    int conf_amt[20];
    store()
    {
        pr_name[0] = "Chips Amt:10";
        pr_amt[0] = 10;

        pr_name[1] = "corn Amt: 12";
        pr_amt[1] = 12;

        pr_name[2] = "coconut Amt:23";
        pr_amt[2] = 23;

        pr_name[3] = "Lemon 200g Amt:8";
        pr_amt[3] = 8;
    }

    void detail()
    {
        cout<<"\t\tWELCOME TO SHOP "<<endl;
        cout <<"===================================================="<<endl;
        
        cout << "Enter Your Name :";
        cin >> costo_name;
        cout << "Enter Your Number :";
        cin >> costo_num;
        system("cls");
    }

    void displayshop(int index)
    {
        cout << pr_name[index] << endl;
        pr_amt[index];
    }
    void count()
    {
        char ch;
        int c;
        int b = 0;
        // string conf_name[20];
        //  int conf_amt[20];
        cout<<"\t\tProduct List"<<endl;
        cout<<"============================================================"<<endl;
        for (int i = 0; i < 4; i++)
        {
            sleep(1);
            cout<<i+1<<".";
            displayshop(i);
            

        }
        cout<<"============================================================"<<endl;

        sleep(1);
        cout << "Want TO Stop Just Press 0" << endl;

        sleep(1);
        cout<<"Select Item "<<endl;
           cout<<"============================================================"<<endl;
        for (int j = 0; j < 40; j++)
        {
            cout<<"Enter Product Id : ";
            cin>>c;
            if (c == 0)
            {
                break;
            }
            c = c - 1;
            conf_name[j] = pr_name[c];
            conf_amt[j] = pr_amt[c];

            c = c + 1;
        }
        //  cout << conf_name[1];
        //  cout<<"Enter Want to you want to add :";
        //   cin>>c;
    }
    void bill()
    {
        cout<<"Printing the customer's bill will take some time."<<endl;
        sleep(1);
        cout<<"Please wait..."<<endl;
        sleep(1);
        cout<<"Please wait..."<<endl;
        sleep(1);
        
        system("cls");

        cout << "\t\tCustomer bill"<<endl;
        cout<<"============================================================"<<endl;
        cout<<"Customer Name :"<<costo_name<<endl;
        cout<<"Customer Name :"<<costo_num<<endl;
        cout<<"============================================================"<<endl;
        cout<<"Item List "<<endl;
        cout<<"-------------------------------------------------------------"<<endl;



        int total = 0;
        for (int i = 0; i < 10; i++)
        {
            if (conf_name[i].empty())
            {
                break;
            }
            cout <<i+1<<"." <<conf_name[i] << endl;
            total += conf_amt[i];
            // cout<<total<<endl;
        }
        cout<<"-------------------------------------------------------------"<<endl;
        cout << "Total Amount is :" << total << endl;
    }
};

int main()
{
    store s;
    s.detail();
    s.count();
    // system("clear");
    // clearConsole();
    system("cls");
    s.bill();
    



}
