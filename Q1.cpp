#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
class SparseMatrix{
    public: 
        SparseMatrix();
	    SparseMatrix(const SparseMatrix & obj);
        void Print();
    private:
        int a[5][6];
};

int main(){
    time_t tempA, tempB;
    SparseMatrix a;
    tempA = clock();
    SparseMatrix b(a);
    tempB = clock() - tempA;
    printf("Create A : %f\n", ((float)tempA)/CLOCKS_PER_SEC);
    printf("Create B : %f\n", ((float)tempB) / CLOCKS_PER_SEC);
    
    a.Print();
    cout << endl;
    b.Print();

    system("pause");
    return 0;
}
SparseMatrix::SparseMatrix()
{
    srand( time(NULL) );

    for(int i = 0 ;i<5;i++)
    {
        for(int j = 0;j<6;j++)
        {
            if((float)rand()/RAND_MAX > 0.1f)
                a[i][j] = 0;
            else
                a[i][j] = 1;
        }
    }
}
SparseMatrix::SparseMatrix(const SparseMatrix &obj)
{
    // a[5][6] = obj.a[5][6];
    for(int i = 0;i<5;i++)
    {
        for(int j = 0 ;j<6;j++)
        {
            a[i][j] = obj.a[i][j];
        }
    }
}
void SparseMatrix::Print()
{
    for(int i = 0;i<5;i++)
    {
        for(int j = 0 ;j<6;j++)
        {
            cout<< a[i][j] << ',';
        }
        cout<<endl;
    }
}