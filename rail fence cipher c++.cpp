#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, y, q ;
    string x ;
    int w = 1 ;
    while (w == 1)
    {


        cout << "print (1) to cipher a message or print (2) to decipher a message or print (3) to exit : ";
        cin >> n ;
        if (n == 1)
        {
            cout << "enter a string:" ;
            cin >> x ;
            cout << "enter a key:" ;
            cin >> y ;
            vector <string> z;
            q = x.length() ;
            string matrix [y][q] ;
            int i = 1, row = 0, col = 0 ;
            for (int s = 0 ; s < q ; s++)
            {
                if ((row + i < 0) || ( row + i >= y))
                {
                    i*=-1 ;
                }
                matrix [row][col] = x[s];
                row+=i ;
                col+=1 ;
            }
            for (int c = 0 ; c < y ; c++)
            {
                for (int v = 0 ; v < q ; v++)
                {
                    z.push_back(matrix[c][v]);
                }
            }
            for (int t = 0 ; t < z.size() ; t++)
            {
                cout << z[t];
            }
            cout << "\n\n";
        }




        if (n == 2)
        {
            cout << "enter a string:" ;
            cin >> x ;
            cout << "enter a key:" ;
            cin >> y ;
            vector <string> result;
            q = x.length() ;
            string matrix [y][q] ;
            int h = (sizeof (matrix[0]) / 4) ;
            int d = 0, i =1 ;
            for (int s = 0 ; s < q ; s++)
            {
                int row = 0 ;
                for (int col = 0 ; col < (sizeof (matrix[row]) / 4) ; col++)
                {
                    if ((row + i < 0) || (row + i >= q))
                    {
                        i*=-1 ;
                    }
                    if (row == s)
                    {
                        matrix[row][col] +=x[d];
                        d += 1;
                    }
                    row += i;
                }
                string z [q] [h] ;
                for (int a = 0 ; a < q ; a++)
                {
                    for (int b = 0 ; b < h ; b++)
                    {
                        z[b][a]= matrix[a][b] ;
                    }
                }
                for (int c = 0 ; c < y ; c++)
                {
                    for (int v = 0 ; v < q ; v++)
                    {
                        result.push_back(z[c][v]);
                    }
                }
                for (int t = 0 ; t < q ; t++)
                {
                    cout << z[t];
                }
                cout << "\n\n";
            }
        }
        if (n == 3)
        {
            cout << "thank you for using our program :) " << endl;
            w = 2 ;
        }




    }
    system("pause");
    return 0;
}
/*
if n == 1 :
 x=list(input("enter a string:"))
 y=int(input("enter a key:"))
 z = ""
 matrix = [[""for x in range(len(x))] for y in range(y)]
 i = 1
 row = 0
 col = 0
 for i1 in x:
     if row + i < 0 or row + i >= len(matrix):
         i*=-1
     matrix [row][col] = i1
     row+=i
     col+=1
 for c in range(y):
  z+="".join(matrix[c])
 print(z)
if n == 2 :
 x=list(input("enter a string:"))
 y=int(input("enter a key:"))
 matrix = [[""for x in range(len(x))] for y in range(y)]
 idx = 0
 i = 1
 result =""
 for s in range(0,len(matrix)):
     row = 0
     for col in range(0,len(matrix[row])):
         if row + i < 0 or row + i >= len(matrix):
            i*=-1
         if row == s:
             matrix[row][col] +=x[idx]
             idx += 1
         row += i
 z =[[0 for y in range(len(matrix))] for x in range(len(matrix[0]))]
 for a in range ( len(matrix) ):
     for b in range( len(matrix[0])):
         z[b][a]=matrix[a][b]
 for c in range(len(x)):
     result+="".join(z[c])
 print(result)
*/
