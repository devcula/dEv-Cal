/*
*****FUN PROJECT*****
*****File: dEvCal.cpp
*****Author: Abhishek Prasad @ dEvCuLa
*****Year: 2014
*/

#include<iostream>
#include<math.h>
#include<windows.h>
#include<string>

using namespace std;
void first_menu();          //Done
void arithmetic();          //Done
void quadratic();           //Done
void power();               //Done
int factorial(int);			    //Done
void matrix();              //Inverse pending
void number_system();       //Pending
void permu_combi();         //Done
void trigonometric();       //Pending
void determinant();         //2X2 and 3X3 done

int main()
{
	first_menu();
	return 0;
}

void first_menu()
{
	int choice_1;
	system("cls");
	cout << "\n\n			CALCULATOR MENU\n\n";
	cout << "Select your option\n\n";
	cout << "1. ARITHMETIC OPERATIONS\n\n2. ROOTS OF QUADRATIC EQUATION\n\n3. POWER m^n\n\n4. FACTORIAL\n\n5. MATRIX CALCULATIONS\n\n6. NUMBER SYSTEM CONVERSIONS\n\n7. PERMUTATION AND COMBINATIONS\n\n8. TRIGONOMETRIC FUNCTIONS\n\n9. DETERMINANT\n\n10. EXIT\n\n";
	cin >> choice_1;
	switch (choice_1)
	{
	case 1: {
		system("cls");
		arithmetic();
		break;
	}
	case 2:{
		system("cls");
		quadratic();
		break;
	}
	case 3:{
		system("cls");
		power();
		break;
	}
	case 4:{
		system("cls");
		int m, choice;
		cout << "Enter the number::\n";
		cin >> m;
		cout << "It's factorial is " << factorial(m);
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	case 5:{
		system("cls");
		matrix();
		break;
	}
	case 6:{
		system("cls");
		number_system();
		break;
	}
	case 7:{
		system("cls");
		permu_combi();
		break;
	}
	case 8:{
		system("cls");
		trigonometric();
		break;
	}
	case 9:{
		system("cls");
		determinant();
		break;
	}
	case 10:{
		exit;
                break;
	}
	default:{
            cout<<"Invalid option...Please try again\n\n";
            first_menu();
	}
	}
}

void arithmetic()
{
	int choice_1;
	cout << "			SELECT\n\n";
	cout << "1. ADDITION\n\n2. SUBSTRACTION\n\n3. MULTIPLICATION\n\n4. DIVISIONS\n\n0. MAIN MENU\n";
	cin >> choice_1;
	switch (choice_1)
	{
            
            case 0:
            {
                system("cls");
                first_menu();
                break;
            }
	case 1:{
		system("cls");
		float numbers[100], sum = 0;
		int numbers_to_add,choice;
		cout << "How many numbers you want to add??\n";
		cin >> numbers_to_add;
		cout << "Enter the numbers::\n";
		//Taking input
		for (int i = 0; i<numbers_to_add; i++)
		{
			cin >> numbers[i];
		}
		//Calculating sum
		for (int j = 0; j<numbers_to_add; j++)
		{
			sum = sum + numbers[j];
		}
		cout << "Sum of all the numbers is " << sum;
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	case 2:{
		system("cls");
		float m, n;
		int choice;
		cout << "Enter the values of m and n respectively to calculate [m-n]\n";
		cin >> m >> n;
		cout << "Result is " << (m - n);
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	case 3:{
		system("cls");
		double numbers[20], product = 1;
		int numbers_to_multiply,choice;
		cout << "How many numbers you want to multiply??\n";
		cin >> numbers_to_multiply;
		cout << "Enter the numbers::\n";
		for (int i = 0; i<numbers_to_multiply; i++)
		{
			cin >> numbers[i];
		}
		for (int j = 0; j<numbers_to_multiply; j++)
		{
			product = product*numbers[j];
		}
		cout << "The final product is " << product;
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	case 4:{
		system("cls");
		float m, n;
		int choice;
		cout << "Enter values of m and n respectively to calculate m/n::\n";
		cin >> m >> n;
		if (n == 0)
			cout << "Error.. n can't be zero.. Please try again::";
		else{
			cout << "The result is m/n= " << m / n;
		}
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	default:{
		cout << "Invalid option..Please try again..";
		first_menu();
	}
	}
}

void quadratic()
{
	system("cls");
	float a, b, c, root1, root2, D, real_part;
	float img_root1, img_root2;
	int choice;
	cout << "Enter the values of a,b and c for the quadratic ax^2+bx+c::\n";
	cin >> a >> b >> c;
	D = b*b - 4 * a*c;
	if (D >= 0)
	{
		root1 = (-b + sqrt(D)) / (2 * a);
		root2 = (-b - sqrt(D)) / (2 * a);
		cout << "Roots of this quadratic are " << root1 << " and " << root2;
	}
	else{
		real_part = -b / (2 * a);
		img_root1 = sqrt(-D) / (2 * a);
		img_root2 = -(sqrt(-D) / (2 * a));
		if (img_root1<0)
		{
			img_root1 = img_root1*(-1);
		}
		if (img_root2<0)
		{
			img_root2 = img_root2*(-1);
		}
		cout << "The roots are complex and their values are\n";
		cout << real_part << "+" << img_root1 << "i";
		cout << " and " << real_part << "-" << img_root2 << "i";
	}
	cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
	cin >> choice;
	if (choice == 1)
		first_menu();
	else
		exit;
}

void power()
{
	double m, n;
	int choice;
	cout << "\nEnter values of m and n to calculate m^n::\n";
	cin >> m >> n;
	cout << "The result is " << m << "^" << n << " = " << pow(m, n);
	cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
	cin >> choice;
	if (choice == 1)
		first_menu();
	else
		exit;
}

int factorial(int a)
{
	if (a == 0)
		return 1;
	else
		return a*factorial(a - 1);
}

void matrix()
{
	system("cls");
	int choice_matrix, p,q;
	double a[25][25], b[25][25], c[25][25];
	cout << "\n1. ADDITION\n\n2. SUBSTRACTION\n\n3. MULTIPLICATION\n\n4. INVERSE\n\n0. MAIN MENU\n";
	cin >> choice_matrix;
	switch (choice_matrix)
	{
            case 0:
            {
                system("cls");
                first_menu();
                break;
            }
	case 1:{//addition
		int choice;
		cout << "Enter the order of matrices(mXn) to be added::\n";
		cin >> p>>q;
		cout << "Enter elements of first matrix::\n";
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j<q; j++)
			{
				cin >> a[i][j];
			}
		}
		cout << "Enter elements of second matrix::\n";
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j<q; j++)
			{
				cin >> b[i][j];
			}
		}
		cout << "The entered matrices are::\n";
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j<q; j++)
			{
				cout << a[i][j];
				cout << "		";
			}
			cout << endl;
		}
		cout << "\n\nand\n\n";
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j<q; j++)
			{
				cout << b[i][j];
				cout << "		";
			}
			cout << endl;
		}
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j<q; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
			}
		}
		cout << "Sum of the matrices is::\n\n";
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j < q;j++)
			{
				cout << c[i][j];
				cout << "		";
			}
			cout << endl;
		}
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	case 2:{//substraction
		int choice;
		cout << "Enter the order of matrices(mXn) to be added::\n";
		cin >> p >> q;
		cout << "Enter elements of first matrix::\n";
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j<q; j++)
			{
				cin >> a[i][j];
			}
		}
		cout << "Enter elements of second matrix::\n";
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j<q; j++)
			{
				cin >> b[i][j];
			}
		}
		cout << "The entered matrices are::\n";
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j<q; j++)
			{
				cout << a[i][j];
				cout << "		";
			}
			cout << endl;
		}
		cout << "\n\nand\n\n";
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j<q; j++)
			{
				cout << b[i][j];
				cout << "		";
			}
			cout << endl;
		}
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j<q; j++)
			{
				c[i][j] = a[i][j] -b[i][j];
			}
		}
		cout << "Substraction of the matrices is\n\n";
		for (int i = 0; i<p; i++)
		{
			for (int j = 0; j < q; j++)
			{
				cout << c[i][j];
				cout << "		";
			}
			cout << endl;
		}
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	case 3:{
		system("cls");
		int m, n, p, q, a[10][10], b[10][10], c[10][10],choice;
		cout << "Enter order of first matrix(mXn) i.e. m and n\n";
		cin >> m >> n;
		cout << "Enter order of second matrix(mXn) i.e. m and n\n";
		cin >> p >> q;
		if (n == p)
		{
			cout << "Enter elements of first matrix::\n";
			for (int i = 0; i<m; i++)
			{
				for (int j = 0; j<n; j++)
					cin >> a[i][j];
			}
			cout << "Enter elements of second matrix::\n";
			for (int i = 0; i<p; i++)
			{
				for (int j = 0; j<q; j++)
					cin >> b[i][j];
			}
			cout << "The entered matrices are\n";
			for (int i = 0; i<m; i++)
			{
				for (int j = 0; j<n; j++)
				{
					cout << a[i][j];
					cout << "     ";
				}
				cout << endl;
			}
			cout << " and \n";
			for (int i = 0; i<p; i++)
			{
				for (int j = 0; j<q; j++)
				{
					cout << b[i][j];
					cout << "     ";
				}
				cout << endl;
			}
			//calculating product of matrices now
			for (int i = 0; i<m; i++)
			{
				for (int j = 0; j<q; j++)
				{
					c[i][j] = 0;
					for (int k = 0; k<n; k++)
						c[i][j] += a[i][k] * b[k][j];
				}
			}
			cout << "The product of the matrices is\n\n";
			for (int i = 0; i<m; i++)
			{
				for (int j = 0; j<q; j++)
				{
					cout << c[i][j];
					cout << "     ";
				}
				cout << endl;
			}
		}
		else
			cout << "These matrices can't be multiplied due to order conflict\n\nPlease try again..";
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	case 4:{//Inverse of a matrix
		int choice;
		cout << "I'm still working on this feature..\n\nWait for the next update..";
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	default:{
		cout << "Invalid option..Please try again..";
		first_menu();
	}
	}

}

void permu_combi()
{
	int choice, n, r, permu, combi;
	cout << "\n1. PERMUTATION\n\n2. COMBINATION\n\n0. MAIN MENU ";
	cin >> choice;
	switch (choice)
	{
        case 0:{
            system("cls");
            first_menu();
            break;
                }
	case 1:{int choice;
		cout << "\nEnter the values of n and r respectively to find nPr::\n";
		cin >> n >> r;
                if(n>=r)
                { permu = factorial(n) / factorial(n - r);
		cout << "The value of nPr is " << permu;
                }
                else
                    cout<<"Error..r cannot be greater than n\n";
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	case 2:{
		int choice;
		cout << "Enter the values of n and r respectively to calculate nCr::\n";
		cin >> n >> r;
                if(n>=r)
		{combi = factorial(n) / (factorial(r)*factorial(n - r));
		cout << "The value of nCr is " << combi;}
                else
                    cout<<"Error..r cannot be greater than n\n";
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;
	}
	default:{
		cout << "Invalid option..Please try again..";
		first_menu();
	}
	}

}

void number_system()
{
	int choice;
	cout << "1. Decimal>>binary\n\n2. Decimal>>octal\n\n3. Decimal>>hexadecimal\n\n4. Binary>>decimal\n\n5. Binary>>octal\n\n6. Binary>>hexadecimal\n\n7. Octal>>decimal\n\n8. Octal>>binary\n\n9. Octal>>hexadecimal\n\n10. Hexadecimal>>decimal\n\n11. Hexadecimal>>binary\n\n12. Hexadecimal>>octal\n\n0. MAIN MENU ";
	cin >> choice;
	switch (choice)
	{
            case 0:{
                system("cls");
                first_menu();
                break;
            }
	case 1:{
            system("cls");
		int decimal, a[32], k,choice;
		cout << "Enter the value in decimal ";
		cin >> decimal;
		for (int i = 0; i<32; i++)
		{
			a[i] = decimal % 2;
			decimal = decimal / 2;
		}
		for (int i = 32; i>0; i--)
		{
			if (a[i] == 1)
			{
				k = i;
				break;
			}
		}
		cout << "The binary value of the entered number is ";
		for (int i = k; i >= 0; i--)
		{
			cout << a[i];
		}
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice;
		if (choice == 1)
			first_menu();
		else
			exit;
		break;

	}
	case 2:
	{
            system("cls");
            int decimal, a[10], k,choice;
	cout << "Enter the value in decimal ";
	cin >> decimal;
	for (int i = 0; i<10; i++)
	{
		a[i] = decimal % 8;
		decimal = decimal / 8;
	}
	for (int i = 10; i>0; i--)
	{
		if (a[i] != 0)
		{
			k = i;
			break;
		}
	}
	cout << "The octal value of the entered number is ";
	for (int i = 8; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
	cin >> choice;
	if (choice == 1)
		first_menu();
	else
		exit;
	break;
	}
        case 3:{
            system("cls");
            int decimal,a[10],choice;
            cout<<"Enter the number in decimal ";
            cin>>decimal;
            for(int i=0;i<8;i++)
            {
                a[i]=decimal%16;
                decimal=decimal/16;
            }
            cout<<"The value in hexadecimal is ";
            for(int j=7;j>=0;j--)
            {
                if(a[j]>9)
                {
                    if(a[j]==10)
                        cout<<"A";
                    else if(a[j]==11)
                        cout<<"B";
                    else if(a[j]==12)
                        cout<<"C";
                    else if(a[j]==13)
                        cout<<"D";
                    else if(a[j]==14)
                        cout<<"E";
                    else if(a[j]==15)
                        cout<<"F";
                }
                else
                    cout<<a[j];
            }
            cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
	cin >> choice;
	if (choice == 1)
		first_menu();
	else
		exit;
	break;
                
            }
        case 4:{
            system("cls");
            int binary,decimal=0,choice,a[16],n=0,temp=0;
            int mod=10,l=1;
            cout<<"Enter the value in binary ";
            cin>>binary;
            for(int i=0;i<16;i++)
            {
                a[i]=0;
            }
            for(int j=0;j<16;j++)
            {
                a[j]=(binary%mod)/l;
                mod=mod*10;
                l=l*10;
            }
            for(int p=0;p<16;p++)
            {
                if(a[p]!=0&&a[p]!=1)
                    temp+=1;
            }
            if(temp==0)
            {
                for(int k=0;k<16;k++)
            {
                decimal+=a[k]*pow(2,n);
                n+=1;
            }
            cout<<"The value in decimal is "<<decimal;
            }
            else
                cout<<"Error..Binary number should only contain 1 or 0\n";
            cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
	cin >> choice;
	if (choice == 1)
		first_menu();
	else
		exit;
	break;
            
        }
            case 5:
            {
                system("cls");
            int binary,decimal=0,choice,a[16],n=0,temp=0,b[8],q;
            int mod=10,l=1;
            cout<<"Enter the value in binary ";
            cin>>binary;
            for(int i=0;i<16;i++)
            {
                a[i]=0;
            }
            for(int j=0;j<16;j++)
            {
                a[j]=(binary%mod)/l;
                mod=mod*10;
                l=l*10;
            }
            for(int p=0;p<16;p++)
            {
                if(a[p]!=0&&a[p]!=1)
                    temp+=1;
            }
            if(temp==0)
            {
                for(int k=0;k<16;k++)
                    {
                        decimal+=a[k]*pow(2,n);
                        n+=1;
                    }
                for (int z = 0; z<8; z++)
                    {
                        b[z] = decimal % 8;
                        decimal = decimal / 8;
                    }
                for (int i = 10; i>0; i--)
                    {
                        if (b[i] != 0)
                            {
                                q = i;
                                break;
                            }
                    }
                cout << "The octal value of the entered number is ";
                for (int i = 8; i >= 0; i--)
                    {
                        cout << b[i];
                    }
                 }
            else
                cout<<"Error..Binary number should only contain 1 or 0\n";
            cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
	cin >> choice;
	if (choice == 1)
		first_menu();
	else
		exit;
	break;
            }
            case 6:
            {
                system("cls");
                int binary,decimal=0,choice,a[16],n=0,temp=0,b[8];
                int mod=10,l=1;
                cout<<"Enter the value in binary ";
                cin>>binary;
                for(int i=0;i<16;i++)
                {
                    a[i]=0;
                }
                for(int j=0;j<16;j++)
                {
                    a[j]=(binary%mod)/l;
                    mod=mod*10;
                    l=l*10;
                }
                for(int p=0;p<16;p++)
                {
                    if(a[p]!=0&&a[p]!=1)
                    temp+=1;
                }
                if(temp==0)
                {
                    for(int k=0;k<16;k++)
                    {
                        decimal+=a[k]*pow(2,n);
                        n+=1;
                    }
                for(int i=0;i<8;i++)
            {
                b[i]=decimal%16;
                decimal=decimal/16;
            }
            cout<<"The value in hexadecimal is ";
            for(int j=7;j>=0;j--)
            {
                if(b[j]>9)
                {
                    if(b[j]==10)
                        cout<<"A";
                    else if(b[j]==11)
                        cout<<"B";
                    else if(b[j]==12)
                        cout<<"C";
                    else if(b[j]==13)
                        cout<<"D";
                    else if(b[j]==14)
                        cout<<"E";
                    else if(b[j]==15)
                        cout<<"F";
                }
                else
                    cout<<b[j];
            }
                }
                else
                    cout<<"Error..Binary number should only contain 1 or 0\n";
                cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
                cin >> choice;
                if (choice == 1)
                    first_menu();
                else
                    exit;
                break;
            }
            case 7:{
                int octal,decimal=0,a[10],l=1,mod=10,temp=0,power=0;
                cout<<"Enter the value in octal ";
                cin>>octal;
                for(int i=0;i<10;i++)
                {
                    a[i]=0;
                }
                for(int j=0;j<10;j++)
                {
                    a[j]=(octal%mod)/l;
                    mod=mod*10;
                    l=l*10;
                }
                for(int k=0;k<10;k++)
                {
                    if(a[k]>=8)
                        temp+=1;
                }
                if(temp==0)
                {
                    for(int m=0;m<10;m++)
                    {
                        decimal+=a[m]*pow(8,power);
                        power+=1;
                    }
                    cout<<"The decimal value of the entered number is "<<decimal;
                }
                else
                    cout<<"Error..Octal values should contain digits only between 1 & 7\n";
                cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
                cin >> choice;
                if (choice == 1)
                    first_menu();
                else
                    exit;
                break;
                 }
            case 8:{
                int octal,decimal=0,a[10],l=1,mod=10,temp=0,power=0,b[16];
                cout<<"Enter the value in octal ";
                cin>>octal;
                for(int i=0;i<10;i++)
                {
                    a[i]=0;
                }
                for(int j=0;j<10;j++)
                {
                    a[j]=(octal%mod)/l;
                    mod=mod*10;
                    l=l*10;
                }
                for(int k=0;k<10;k++)
                {
                    if(a[k]>=8)
                        temp+=1;
                }
                if(temp==0)
                {
                    int z;
                    for(int m=0;m<10;m++)
                    {
                        decimal+=a[m]*pow(8,power);
                        power+=1;
                    }
                    for (int n = 0; n<16; n++)
                    {
			b[n] = decimal % 2;
			decimal = decimal / 2;
                    }
		/*for (int p = 16; p>0; p--)
		{
			if (b[p] == 1)
			{
				z = p;
				break;
			}
		}*/
		cout << "The binary value of the entered number is ";
		for (int q = 15; q >= 0; q--)
		{
			cout << b[q];
		}
                }
                else
                    cout<<"Error..Octal values should contain digits only between 1 & 7\n";
                cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
                cin >> choice;
                if (choice == 1)
                    first_menu();
                else
                    exit;
                break;
            }
            case 9:{
                int octal,decimal=0,a[10],l=1,mod=10,temp=0,power=0,b[8];
                cout<<"Enter the value in octal ";
                cin>>octal;
                for(int i=0;i<10;i++)
                {
                    a[i]=0;
                }
                for(int j=0;j<10;j++)
                {
                    a[j]=(octal%mod)/l;
                    mod=mod*10;
                    l=l*10;
                }
                for(int k=0;k<10;k++)
                {
                    if(a[k]>=8)
                        temp+=1;
                }
                if(temp==0)
                {
                    for(int m=0;m<10;m++)
                    {
                        decimal+=a[m]*pow(8,power);
                        power+=1;
                    }
                    for(int i=0;i<8;i++)
            {
                b[i]=decimal%16;
                decimal=decimal/16;
            }
            cout<<"The value in hexadecimal is ";
            for(int j=7;j>=0;j--)
            {
                if(b[j]>9)
                {
                    if(b[j]==10)
                        cout<<"A";
                    else if(b[j]==11)
                        cout<<"B";
                    else if(b[j]==12)
                        cout<<"C";
                    else if(b[j]==13)
                        cout<<"D";
                    else if(b[j]==14)
                        cout<<"E";
                    else if(b[j]==15)
                        cout<<"F";
                }
                else
                    cout<<b[j];
            }
                }
                else
                    cout<<"Error..Octal values should contain digits only between 1 & 7\n";
                cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
                cin >> choice;
                if (choice == 1)
                    first_menu();
                else
                    exit;
                break;
                }
            case 10:{
                char hexa[8];
                int  deci[8],m=0,temp=0,power=0;
                double decimal=0;
                for(int k=0;k<8;k++)
                {
                    deci[k]=0;
                    hexa[k]='\0';
                }
                cout<<"Enter the value in hexadecimal ";
                cin>>hexa;
                for(int j=0;j<8;j++)
                {
                    if(hexa[j]=='0')
                        deci[j]=0;
                    else if(hexa[j]=='1')
                        deci[j]=1;
                    else if(hexa[j]=='2')
                        deci[j]=2;
                    else if(hexa[j]=='3')
                        deci[j]=3;
                    else if(hexa[j]=='4')
                        deci[j]=4;
                    else if(hexa[j]=='5')
                        deci[j]=5;
                    else if(hexa[j]=='6')
                        deci[j]=6;
                    else if(hexa[j]=='7')
                        deci[j]=7;
                    else if(hexa[j]=='8')
                        deci[j]=8;
                    else if(hexa[j]=='9')
                        deci[j]=9;
                    else if(hexa[j]=='a'|| hexa[j]=='A')
                        deci[j]=10;
                    else if(hexa[j]=='b'||hexa[j]=='B')
                        deci[j]=11;
                    else if(hexa[j]=='c'||hexa[j]=='C')
                        deci[j]=12;
                    else if(hexa[j]=='d'||hexa[j]=='D')
                        deci[j]=13;
                    else if(hexa[j]=='e'||hexa[j]=='E')
                        deci[j]=14;
                    else if(hexa[j]=='f'||hexa[j]=='F')
                        deci[j]=15;
                    else if(hexa[j]=='\0')
                        deci[j]=0;
                    else
                        deci[j]=99; //99 is the error value assumed to check the error in entered hexadecimal value;
                }
                for(int i=0;i<8;i++)
                {
                    if(deci[i]==99)
                        temp+=1;
                }
                if(temp==0)
                {
                    for(int p=7;p>=0;p--)
                    {
                        if(deci[p]!=0)
                        {
                            m=p;
                            break;
                        }
                    }
                    for(int q=m;q>=0;q--)
                    {
                        decimal=decimal+deci[q]*pow(16,power);
                        power+=1;
                    }            
                    cout<<"\nThe equivalent decimal value is "<<decimal;
                }
                else
                    cout<<"Error..Only enter hexadecimal value..";
            }
            }
	}

void trigonometric()
{
	int choice;
	cout << "Still working on this feature..Wait for the next update";
	cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
	cin >> choice;
	if (choice == 1)
		first_menu();
	else
		exit;
}

void determinant()
{
	int choice;
	float two[2][2], three[3][3], result;
	cout << "1. 2X2 determinant\n\n2. 3X3 determinant\n\n0. MAIN MENU ";
	cin >> choice;
	switch (choice)
	{
            case 0:{
                system("cls");
                first_menu();
                break;
            }
	case 1:{
		int choice_1;
		cout << "Enter the elements of determinant\n";
		for (int i = 0; i<2; i++)
		{
			for (int j = 0; j<2; j++)
				cin >> two[i][j];
		}
		result = two[0][0] * two[1][1] - two[0][1] * two[1][0];
		cout << "The entered determinant is\n\n";
		for (int i = 0; i<2; i++)
		{
			for (int j = 0; j<2; j++)
			{
				cout << two[i][j];
				cout << "     ";
			}
			cout << endl;
		}
		cout << "\n\n and the value of the determinant is " << result;
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice_1;
		if (choice_1 == 1)
			first_menu();
		else
			exit;
		break;
	}
	case 2:{
		int choice_1;
		cout << "Enter the elements of determinants\n";
		for (int i = 0; i<3; i++)
		{
			for (int j = 0; j<3; j++)
				cin >> three[i][j];
		}
		result = three[0][0] * (three[1][1] * three[2][2] - three[1][2] * three[2][1]) - three[0][1] * (three[1][0] * three[2][2] - three[1][2] * three[2][0]) + three[0][2] * (three[1][0] * three[2][1] - three[1][1] * three[2][0]);
		cout << "The entered determinant is\n\n";
		for (int i = 0; i<3; i++)
		{
			for (int j = 0; j<3; j++)
			{
				cout << three[i][j];
				cout << "     ";
			}
			cout << endl;

		}
		cout << "\n\nand the value of the determinant is " << result;
		cout << "\n\nPress 1 to go to the main menu or press any other key to exit\n\n";
		cin >> choice_1;
		if (choice_1== 1)
			first_menu();
		else
			exit;
		break;
	}
	default:{
		cout << "Invalid option..Please try again..";
		first_menu();
	}
	}
}
