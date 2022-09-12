#include <iostream>
#define maxsize 10

using namespace std;

class Stack
{
    int top;
    int a[maxsize];
public:
    Stack();
    bool isFull();
    bool isEmpty();
    void pop();
    void push(int x);
    void display();
    void displayTop();
    void stackSize();
};

//inisialisasi bagian paling atas dari stack bernilai 0
Stack::Stack()
{
    top=0;
}

//jika top pada stack = ukuran maksimal dari jumlah maksimum yang dizinkan,
//stack sudah penuh dan tidak dapat melakukan push ke dalam stack
bool Stack::isFull()
{
    if(top==maxsize)
        return true;
    else
        return false;
}

//jika isi pada stack = 0 maka stack kosong dan tidak ada element yang dapat di pop dari stack
bool Stack::isEmpty()
{
    if(top==0)
        return true;
    else
        return false;
}

void Stack::pop()
{
    if(isEmpty())
    {
        cout << "stack kosong" << endl;
    }
    else
    {
        //ketika stack tidak kosong elemen dapat dikeluarkan (pop) dari stack dari indeks bagian paling atas
        top--;
        cout << "pop " << a[top] << endl;
    }
}

void Stack::push(int x)
{
    if(isFull())
    {
        cout << "stack sudah penuh" << endl;
    }
    else
    {
        //ketika stack belum penuh elemen dapat dimasukkan ke dalam stack
        a[top]=x;
        top++;
    }
}


void Stack::display()
{
    int i;
    if(top==0)
    {
        cout << "tidak ada yang dapat ditampilkan" << endl;
    }
    else
    {
        cout << "menampilkan" << endl;
        for(i=0; i<top;i++)
        {
            cout << a[i] << endl;
        }
    }

}

void Stack::displayTop()
{
    cout << "top " << a[top-1] << endl;
}

void Stack::stackSize()
{
    cout << "size dari stack adalah " << top << endl;
}

int main()
{
    Stack s;
    int select, element, result;
    while(1)
    {
        cout<<"*--------------------------------------------------------------------*"<<endl;
        cout<<"1.PUSH  2.POP  3.DISPLAY  4.ISFULL  5.ISEMPTY  6.TOP  7.SIZE  8.EXIT "<<endl;
        cout<<"*--------------------------------------------------------------------*"<<endl;
        cin >> select;
        if(select==1)
        {
            cout << "masukkan elemen ";
            cin >> element;
            s.push(element);
        }
        else if(select==2)
        {
            s.pop();
        }
        else if(select==3)
        {
            s.display();
        }
        else if(select==4)
        {
            if(s.isFull())
            {
                cout << "stack sudah penuh" << endl;
            }
            else
            {
                cout << "stack belum penuh anda dapat melakukan push " << endl;
            }
        }
        else if(select==5)
        {
            if(s.isEmpty())
            {
                cout << "stack sudah kosong" << endl;
            }
            else
            {
                cout << "stack belum kosong anda dapat melakukan pop " << endl;
            }
        }
        else if(select==6)
        {
            s.displayTop();
        }
        else if(select==7)
        {
            s.stackSize();
        }
        else
            return 0;
    }
    return 0;
}
