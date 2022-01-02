#include <iostream>
#include <string.h>
#include<bits/stdc++.h>
#include <fstream>

using namespace std;
class crew{
private:
    string pilot;
    string co_pilot;
    string attendant1;
    string attendant2;


    string hostess1;
    string hostess2;
    string hostess3;
    public:
    void addpilot(string n)
    {
        pilot=n;
    }
     void addco_pilot(string n)
    {
       co_pilot=n;
    }
      void addattendant1(string n)
    {
        attendant1=n;
    }
       void addattendant2(string n)
    {
        attendant2=n;
    }
     void addhostess2(string n)
    {
        hostess2=n;
    }
       void addhostess3(string n)
    {
        hostess3=n;
    }
       void addhostess1(string n)
    {
        hostess1=n;
    }
    string showpilot()
    {
        return pilot;
    }
      string showco_pilot()
    {
        return co_pilot; }
         string showattendant1()
    {
        return attendant1; }
          string showattendant2()
    {
        return attendant2; }
         string showhostess1()
    {
        return hostess1; }
               string showhostess2()
    {
        return hostess2; }
               string showhostess3()
    {
        return hostess3; }

         void crewdata(string a,string b,string c,string d,string e,string f,string g)
         {

             addpilot(a);

            addco_pilot(b);

              addattendant1(c);

              addattendant2(d);

              addhostess1(e);

              addhostess2(f);

              addhostess3(g);

         }

         void showcrew()
         {
             cout<<"pilot name & liSence no     : "<<showpilot()<<endl;
             cout<<"co-pilot name & liSence no  : "<<showco_pilot()<<endl;
             cout<<"attendant1 name & liSence no: "<<showattendant1()<<endl;
             cout<<"attendant2 name & liSence no: "<<showattendant2()<<endl;
             cout<<"hostess1 name  & liSence no : "<<showhostess1()<<endl;
             cout<<"hostess2 name & liSence no  : "<<showhostess2()<<endl;
             cout<<"hostess3 name & liSence no  : "<<showhostess3()<<endl;
         }



   } ;

class passenger
{private:
    string name;
    string lastname;
    string passportno;
    int cnic;
     passenger *next;
    passenger *previous;

    public:
    void addname(string n)
    {
        name=n;
    }
     void addlastname(string n)
    {
       lastname=n;
    }
     void addpassportno(string n)
    {
        passportno=n;
    }
     void addcnic(int n)
    {
        cnic=n;
    }
    string showname()
    {
        return name;
    }

    string showlastname()
    {
        return lastname;
    }

    string showpassportno()
    {
        return passportno;
    }

    int showcnic()
    {
        return cnic;
    }
    void passengerdata()
    { string a;
        cout<<"enter name"<<endl;
        cin>>a;
        addname(a);

        cout<<"enter last name"<<endl;
        cin>>a;
        addlastname(a);

        cout<<"enter passportno"<<endl;
        cin>>a;
        addpassportno(a);

        cout<<"enter cnic"<<endl;
        int b;
        cin>>b;
        addcnic(b);
    }
    void showpassenger()
    {
        cout<<"name       : "<<showname()<<endl;
        cout<<"last name  : "<<showlastname()<<endl;
        cout<<"passportno : "<<showpassportno()<<endl;
        cout<<"cnic       : "<<showcnic()<<endl;
    }
      void setdata()
{
    passengerdata();
}

void setnext(passenger *t)
{
    next=t;
}
void setprevious(passenger *t)
{
    previous=t;
}
passenger *getprevious()
{
    return previous;
}

passenger *getnext()
{
    return next;
}
 passenger()
    {
       next=NULL;
       previous=NULL;
       passengerdata();
    }

};
class flight
  {
private:
    string flightno;
    string flighttype;
    string fcity;
    string tcity;
    string dtime;
    string atime;
    string duration;
public:
void addflightno(string n)
{
    flightno=n;
}

void addflighttype(string n)
{
    flighttype=n;
}

void addfcity(string n)
{
    fcity=n;
}

void addtcity(string n)
{
    tcity=n;
}

void adddtime(string n)
{
    dtime=n;
}

void addatime(string n)
{
    atime=n;
}

void addduration(string n)
{
    duration=n;
}
string showflightno()
{
  return  flightno;
}

string showflighttype()
{
  return  flighttype;
}

string showfcity()
{
  return  fcity;
}

string showtcity()
{
   return tcity;
}

string showdtime()
{
   return dtime;
}

string showatime()
{
  return  atime;
}

string showduration()
{
  return  duration;
}
void flightdata(string a,string b,string c,string d,string e,string f,string g)
{


  addflightno(a);
 addflighttype(b);
addfcity(c);
addtcity(d);
adddtime(e);
addatime(f);
addduration(g);



}
    void showflight()
    {
        cout<<"flightno        : "<<showflightno()<<endl;
        cout<<"flight type     : "<<showflighttype()<<endl;
        cout<<"departng city   : "<<showfcity()<<endl;
        cout<<"arrival city    : "<<showtcity()<<endl;
        cout<<"departing time  : "<<showdtime()<<endl;
        cout<<"arrival time    : "<<showatime()<<endl;
        cout<<"duration        : "<<showduration()<<endl;
    }
    };


class passenger_list
{ private:
passenger *head;
passenger *tail;
    public:
    passenger_list()
    {
        head=NULL;
        tail=NULL;

    }



 void atend()
    {
        passenger *temp=new passenger();
        if(head==NULL&&tail==NULL)
        {
            head=temp;
        tail=temp;
        }

else{    tail->setnext(temp);
        temp->setprevious(tail);

        tail=temp;
    }}




void show()
{ if(head==tail)
{
    head->showpassenger();
}
      else {

        passenger *temp=head;
        //cout<<head<<endl;
         //cout<<tail<<endl;
        cout<<endl;
        while (temp!=tail)
       {// cout<<temp<<" "<<temp->getnext()<<" "<<temp->getprevious()<<endl;
           temp->showpassenger();


            temp=temp->getnext();
       }
      // cout<<temp<<" "<<temp->getnext()<<" "<<temp->getprevious()<<endl;

       temp->showpassenger();
      // cout<<temp<<endl;
        cout<<endl;}

}
bool by_cnic(int key)
{  passenger *temp=head;
    if(head==NULL&&tail==NULL)
    {
        return false;
    }


  else if(temp->showcnic()==key)
    {
       return true;
    }
else
    {
while(temp->getnext()!=NULL)
{
    if(temp->showcnic()==key)
    {
        return true;
        break;

    }
    else
    {
        temp=temp->getnext();
    }
}
}
if(temp==NULL)
{
    if(temp->showcnic()==key)
    {
      return true;
    }
}

}
void delete_passenger(int key)
{
    if(head->showcnic()==key)
    {
        head=head->getnext();
        head->setprevious(NULL);
    }
    else if(tail->showcnic()==key)
    {
        tail=tail->getprevious();
        tail->setnext(NULL);
    }
    else
    {
        passenger *current=head;
        passenger *temp2;
        while(current->getnext()!=NULL)
        {    temp2=current;
            if(current->showcnic()==key)
            {
              current=current->getnext() ;
              break;
            }
            else{
                current=current->getnext();
            }
        }
        temp2=temp2->getprevious();
      //  cout<<temp2<<endl;
       // cout<<current<<endl;
        temp2->setnext(current);
        current->setprevious(temp2);
    }

}
};


class node
{
private:
    node *next;
    node* previous;
    int data;
public:
    void setdata(int d)
    {
        data=d;
    }
    int getdata()
    {
        return data;
    }
    void setnext(node *n)
    {
        next=n;
    }
    node *getnext()
    {
        return next;
    }
    void setprevious(node *n)
    {
        previous=n;
    }
    node *getprevious()
    {
        return previous;
    }

    node(int d)
    {
        setdata(d);
        setnext(NULL);


    }


};
class Stack{
private:
    node *head;
    node *tail;
    int Count=0;
    public:
        void setcount(int n)
        {
            Count =n;
        }
        int getcount()
        {
            return Count;
        }
        Stack()
        {
            head=NULL;
            tail=NULL;
        }

 void push(int d)
 {


        node *temp=new node(d);



        if(head==NULL&&tail==NULL)
        {

            head=temp;
            tail=temp;

        }

else{
        temp->setprevious(tail);
    tail->setnext(temp);
    tail=temp;

}

Count++;
 }
 void display()
 {
     node *temp=head;
     if(head==NULL)
     {
         cout<<"empty"<<endl;
     }
     else{
     while(temp!=NULL)
     {
         cout<<temp->getdata() <<"-";
         //cout<<temp<<" "<<temp->getnext()<<endl;


         temp=temp->getnext();

     }
     cout<<endl;
 }}
 void isempty()
 {
     if(head==NULL&&tail==NULL)
     {
         cout<<"it is empty"<<endl;
     }
     else{
        cout<<"not empty"<<endl;
     }
 }
 int peek()
 {
     return tail->getdata();
 }
 int start()
 {
     return head->getdata();
 }
 void pop()
 { node *temp=head;
    if(head==tail)
    {
        head=NULL;
        tail=NULL;
    }
    else{



 tail=tail->getprevious();
 tail->setnext(NULL);



     Count--;


     }
 }


    void  del_element(int k,Stack  &a)
    {
        Stack b;
        int Cnt=0;

        if(a.peek()==k)
        {
             a.pop();

        }
        else
        { int x=getcount();
            while(x!=0)

            {  if(a.peek()==k)
             {
                 a.pop();
                 break;
             }
                 b.push(a.peek());
                a.pop();
                x--;
                Cnt++;
            }
        while(Cnt!=0)
        {
            a.push(b.peek());
            b.pop();
            Cnt--;
        }
         }}

         void add_element(int k, Stack &a)
         { Stack b;
         int Cnt=0;
             if(peek()<k)
             {
                 a.push(k);
             }
              else if(k<a.start())
        {
            node *temp=new node(k);
            head->setprevious(temp);
            temp->setnext(head);
            head=temp;
        }
            else
        { int x=getcount();
            while(x!=0)

            {  if(a.peek()<=k)
             {

                 break;
             }
                 b.push(a.peek());
                a.pop();
                x--;
                Cnt++;
            }


            a.push(k);
        while(Cnt!=0)
        {
            a.push(b.peek());
            b.pop();
            Cnt--;
        }
         }}
bool search_key(int key)

{

    node* current=head;
    int temp=0;
    node* temp2;
if(head->getdata()==key)
{
return true;
}
else{
    while(current->getnext()!=NULL)
    {
        if(current->getdata()==key)
        {
          temp=1;
          break;

        }
        else{

            current=current->getnext();
        }
    }

        if(temp==1)
        {
            return true;
        }
        else{
           return false;
        }}


}



};

class Node
{
    public:
    int key;
    Node *left;
    Node *right;
    int height;
};

class avl{

public:
int height(Node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}


int max(int a, int b)
{
    return (a > b)? a : b;
}


Node* newNode(int key)
{
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return(node);
}

Node *rightRotate(Node *y)
{
    Node *x = y->left;
    Node *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left),
                    height(y->right)) + 1;
    x->height = max(height(x->left),
                    height(x->right)) + 1;


    return x;
}


Node *leftRotate(Node *x)
{
    Node *y = x->right;
    Node *T2 = y->left;


    y->left = x;
    x->right = T2;


    x->height = max(height(x->left),
                    height(x->right)) + 1;
    y->height = max(height(y->left),
                    height(y->right)) + 1;


    return y;
}
Node * minValueNode(Node* node)
{
    Node* current = node;


    while (current->left != NULL)
        current = current->left;

    return current;
}


int getBalance(Node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

Node* Insert(Node* node, int key)
{

    if (node == NULL)
        return(newNode(key));

    if (key < node->key)
        node->left = Insert(node->left, key);
    else if (key > node->key)
        node->right = Insert(node->right, key);
    else
        return node;

    node->height = 1 + max(height(node->left),
                        height(node->right));

    int balance = getBalance(node);


    if (balance > 1 && key < node->left->key)
        return rightRotate(node);


    if (balance < -1 && key > node->right->key)
        return leftRotate(node);


    if (balance > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }


    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }


    return node;
}


void preOrder(Node *root)
{
    if(root != NULL)
    {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

}
Node* deleteNode(Node* root, int key)
{


    if (root == NULL)
        return root;


    if ( key < root->key )
        root->left = deleteNode(root->left, key);

    else if( key > root->key )
        root->right = deleteNode(root->right, key);

    else
    {

        if( (root->left == NULL) ||
            (root->right == NULL) )
        {
            Node *temp = root->left ?
                         root->left :
                         root->right;

            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else
            *root = *temp;
            free(temp);
        }
        else
        {
            Node* temp = minValueNode(root->right);


            root->key = temp->key;


            root->right = deleteNode(root->right,
                                     temp->key);
        }
    }


    if (root == NULL)
    return root;

    root->height = 1 + max(height(root->left),
                           height(root->right));

    int balance = getBalance(root);


    if (balance > 1 &&
        getBalance(root->left) >= 0)
        return rightRotate(root);


    if (balance > 1 &&
        getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 &&
        getBalance(root->right) <= 0)
        return leftRotate(root);

    if (balance < -1 &&
        getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}
};



int main()
{

       flight f2;
       flight f1;
       flight f3;
       crew c1;
crew c2;
crew c3;
     passenger_list p1;
     passenger_list p2;
     passenger_list p3;
         Stack s1;
         Stack s2;
         Stack s3;


avl av1;
avl av2;
avl av3;
    Node *r1=NULL;
    Node *r2=NULL;
    Node *r3=NULL;
    f1.flightdata("123a","domestic","lahore","sialkot","1 am","2 am","1 hour");
    f2.flightdata("123b","international","lahore","dubai","6 am","10 am","4 hours");
    f3.flightdata("123c","international","lahore","beijing","1 pm","10 pm","9 hours");


  c1.crewdata("ali  123vs ","asad  234se","arman    g123f","mughes v234q","kiran 34s","aleena 35d","abeera 56g");
  c2.crewdata("rehman  129vs ","azad  235se","arman    g12334e","nabeel v2454q","alia 345s","misha 3545d","anum 5614g");
  c3.crewdata("abdullah  2429vs ","nabeel  275se","amjad    g33334e","wali v2554q","aleena 346s","sehrish 37845d","anum 59814g");


       ofstream myfile1;

        myfile1.open("crew.txt", ios::out  | ios::app);
         myfile1<<"crew of plane 1"<< endl;
        myfile1<<" pilot      :";
        myfile1<<c1.showpilot() <<endl;
        myfile1<<" c0 pilot   :";
        myfile1<<c1.showco_pilot()<<endl;
        myfile1<<"    attendants  :"<<endl;
        myfile1<<c1.showattendant1()<<endl;
        myfile1<<c1.showattendant2()<<endl;
        myfile1<<"   hostesses   : "<<endl;
        myfile1<<c1.showhostess1()<<endl;
        myfile1<<c1.showhostess2()<<endl;
        myfile1<<c1.showhostess3()<<endl;

        myfile1<<"crew of plane 2"<< endl;

        myfile1<<" pilot      :";
        myfile1<<c2.showpilot() <<endl;
        myfile1<<" c0 pilot   :";
        myfile1<<c2.showco_pilot()<<endl;
        myfile1<<"    attendants  :"<<endl;
        myfile1<<c2.showattendant1()<<endl;
        myfile1<<c2.showattendant2()<<endl;
        myfile1<<"   hostesses   : "<<endl;
        myfile1<<c2.showhostess1()<<endl;
        myfile1<<c2.showhostess2()<<endl;
        myfile1<<c2.showhostess3()<<endl;

        myfile1<<"crew of plane 3"<< endl;

        myfile1<<" pilot      :";
        myfile1<<c3.showpilot() <<endl;
        myfile1<<" c0 pilot   :";
        myfile1<<c3.showco_pilot()<<endl;
        myfile1<<"    attendants  :"<<endl;
        myfile1<<c3.showattendant1()<<endl;
        myfile1<<c3.showattendant2()<<endl;
        myfile1<<"   hostesses   : "<<endl;
        myfile1<<c3.showhostess1()<<endl;
        myfile1<<c3.showhostess2()<<endl;
        myfile1<<c3.showhostess3()<<endl;



            myfile1.close();


            ofstream myfile2;
       myfile2.open("flight.txt", ios::out  | ios::app);
       myfile2<<" data of flight 1 "<<endl;
       myfile2<<" flight no"<<endl;
       myfile2<<f1.showflightno()<<endl;
       myfile2<<" flight type"<<endl;
       myfile2<<f1.showflighttype()<<endl;
       myfile2<<" flight duration"<<endl;
       myfile2<<f1.showduration()<<endl;
       myfile2<<" departing city"<<endl;
       myfile2<<f1.showfcity()<<endl;
       myfile2<<" arrival city "<<endl;
       myfile2<<f1.showtcity()<<endl;
       myfile2<<"departing time "<<endl;
       myfile2<<f1.showdtime()<<endl;
       myfile2<<" arrival time "<<endl;
       myfile2<<f1.showatime()<<endl;

       myfile2<<" data of flight 2 "<<endl;
       myfile2<<" flight no"<<endl;
       myfile2<<f2.showflightno()<<endl;
       myfile2<<" flight type"<<endl;
       myfile2<<f2.showflighttype()<<endl;
       myfile2<<" flight duration"<<endl;
       myfile2<<f2.showduration()<<endl;
       myfile2<<" departing city"<<endl;
       myfile2<<f2.showfcity()<<endl;
       myfile2<<" arrival city "<<endl;
       myfile2<<f2.showtcity()<<endl;
       myfile2<<"departing time "<<endl;
       myfile2<<f2.showdtime()<<endl;
       myfile2<<" arrival time "<<endl;
       myfile2<<f2.showatime()<<endl;

       myfile2<<" data of flight 2 "<<endl;
       myfile2<<" flight no"<<endl;
       myfile2<<f2.showflightno()<<endl;
       myfile2<<" flight type"<<endl;
       myfile2<<f2.showflighttype()<<endl;
       myfile2<<" flight duration"<<endl;
       myfile2<<f2.showduration()<<endl;
       myfile2<<" departing city"<<endl;
       myfile2<<f2.showfcity()<<endl;
       myfile2<<" arrival city "<<endl;
       myfile2<<f2.showtcity()<<endl;
       myfile2<<"departing time "<<endl;
       myfile2<<f2.showdtime()<<endl;
       myfile2<<" arrival time "<<endl;
       myfile2<<f2.showatime()<<endl;





            myfile2.close();







for(int i=1;i<=40;i++)
{
    s1.push(i);
    s2.push(i);
    s3.push(i);
}
cout<<" * Main menu * "<<endl;
cout<<" * press 1 if you are traveller "<<endl;
cout<<" * press 2 if you are employee "<<endl;
int a;
cin>>a;
if(a==2)
{   cout<<"enter your password"<<endl;
     string as;
     cin>>as;
     if(as=="admin")
     {


    cout<<" press 1 to get booking details"<<endl;
    cout<<" press 2 to get crew info"<<endl;
    cout<<" press 3 to get flight info"<<endl;
    int b;
    cin>>b;
    if(b==1)
    {
    cout<<" press 1 to check 123a"<<endl;
    cout<<" press 2 to check 123b"<<endl;
    cout<<" press 3 to check 123c"<<endl;
    int cx;
    cin>>cx;
    if(cx==1)
    {
        cout<<"available seats"<<endl;
        s1.display();
        cout<<"reserved seats"<<endl;
        av1.preOrder(r1);
        cout<<"data of passengers "<<endl;
        p1.show();
         cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int d;
            cin>>d;
            if(d==1)
            {
                main();
            }
            else
            {
                return 0;
            }


    }
   else  if(cx==2)
    {
        cout<<"available seats"<<endl;
        s2.display();
        cout<<"reserved seats"<<endl;
        av2.preOrder(r2);
        cout<<"data of passengers "<<endl;
        p2.show();
         cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int d;
            cin>>d;
            if(d==1)
            {
                main();
            }
            else
            {
                return 0;
            }


    }
    else if(cx==3)
    {
        cout<<"available seats"<<endl;
        s3.display();
        cout<<"reserved seats"<<endl;
        av3.preOrder(r3);
        cout<<"data of passengers "<<endl;
        p3.show();
         cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int d;
            cin>>d;
            if(d==1)
            {
                main();
            }
            else
            {
                return 0;
            }


    }
     else
          {
               cout<<" no data against given plane no "<<endl;
               cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }
          }

    }
   else if(b==3)
    {
    cout<<" press 1 to check 123a"<<endl;
    cout<<" press 2 to check 123b"<<endl;
    cout<<" press 3 to check 123c"<<endl;
    int c;
    cin>>c;

        if(c==1)
        {
            f1.showflight();

        }
        if(c==2)
        {
            f2.showflight();
        }
        if(c==3)
        {
            f3.showflight();
        }
        else
        {
            cout<<" wrong entry "<<endl;
            cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int d;
            cin>>d;
            if(d==1)
            {
                main();
            }
            else
            {
                return 0;
            }

        }

    }
  else  if(b==2)
    {
    cout<<" press 1 to check crew of 123a"<<endl;
    cout<<" press 2 to check crew of 123b"<<endl;
    cout<<" press 3 to check crew of 123c"<<endl;
    int e;
    cin>>e;
        if(e==1)
        {
            c1.showcrew();

        }
        else if(e==2)
        {
            c2.showcrew();
        }
       else  if(e==3)
        {
            c3.showcrew();
        }
        else
        {
            cout<<" wrong entry "<<endl;
            cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int f;
            cin>>f;
            if(f==1)
            {
                main();
            }
            else
            {
                return 0;
            }

        }

    }}
    else{
     cout<<" wrong entry "<<endl;
            cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g;
            cin>>g;
            if(g==1)
            {
                main();
            }
            else
            {
                return 0;
            } }

}
if(a==1)

{
  cout<<" * press 1 to search flights"<<endl;
  cout<<" * press 2 for ticket cancellation"<<endl;
  int i;
  cin>>i;
  if(i==1)
  {     cout<<"available flights"<<endl;
       cout<<" flight 1  form "<<f1.showfcity()<<" to "<<f1.showtcity()<<endl;
       cout<<" flight 2  form "<<f2.showfcity()<<" to "<<f2.showtcity()<<endl;
       cout<<" flight 3  form "<<f3.showfcity()<<" to "<<f3.showtcity()<<endl;

      cout<<" enter your departing city "<<endl;
      string bs;
      cin>>bs;
      cout<<" enter your arrival city "<<endl;
      string cs;
      cin>>cs;
          if(bs==f1.showfcity()&&cs==f1.showtcity())
    {
        f1.showflight();
        cout<<" press 1 to check available seats "<<endl;
        int g2;
        cin>>g2;
        if(g2==1)
        {
            s1.display();
            cout<<" seat no 1 to 20 are business class and 21 to 40 are economy class "<<endl;
            cout<<" press 1 to book a ticket "<<endl;
            int g4;
            cin>>g4;
            if(g4==1)
            {
                cout<<" enter seat no you want to book "<<endl;
                int g6;
                cin>>g6;
             if(   s1.search_key(g6)==1)
             { cout<<"***************"<<endl;
               cout<<"kindly enter your information "<<endl;

                 p1.atend();


                 r1=av1.Insert(r1,g6);
                 s1.del_element(g6,s1);


                 cout<<" enter your account no for money "<<endl;
                 string ac1;
                 cin>>ac1;
                 cout<<" enter 1 to confirm ticket "<<endl;
                 int g9;
                 cin>>g9;
                 if(g9 == 1)
                 {
                     cout<<"  your ticket is confirmed "<<endl;
                     cout<<"            Thankyou  "<<endl;
                     cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }
                 }


             }
             else
             {
                 cout<<"this seat is not available or you may entered wrong number "<<endl;
                 cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g7;
            cin>>g7;
            if(g7==1)
            {
                main();
            }
            else
            {
                return 0;
            }
             }

            }


        }}

     else if(bs==f2.showfcity()&&cs==f2.showtcity())
    {
        f2.showflight();
         cout<<" press 1 to check available seats "<<endl;
        int g21;
        cin>>g21;
        if(g21==1)
        {
            s2.display();
            cout<<" seat no 1 to 20 are business class and 21 to 40 are economy class "<<endl;
            cout<<" press 1 to book a ticket "<<endl;
            int g41;
            cin>>g41;
            if(g41==1)
            {
                cout<<" enter seat no you want to book "<<endl;
                int g61;
                cin>>g61;
             if(   s2.search_key(g61)==1)
             { cout<<"***************"<<endl;
               cout<<"kindly enter your information "<<endl;
                 p2.atend();
                 r2=av2.Insert(r2,g61);
                 s2.del_element(g61,s2);
                 cout<<" enter your account no for money "<<endl;
                 int ac11;
                 cin>>ac11;

                 cout<<" enter 1 to confirm ticket "<<endl;
                 int g91;
                 cin>>g91;
                 if(g91 == 1)
                 {
                     cout<<"  your ticket is confirmed "<<endl;
                     cout<<"            Thankyou  "<<endl;
                     cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g11;
            cin>>g11;
            if(g11==1)
            {
                main();
            }
            else
            {
                return 0;
            }
                 }


             }
             else
             {
                 cout<<"this seat is not available or you may entered wrong number "<<endl;
                 cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g71;
            cin>>g71;
            if(g71==1)
            {
                main();
            }
            else
            {
                return 0;
            }
             }

            }
      } }
    else  if(bs==f3.showfcity()&&cs==f3.showtcity())
    {
        f3.showflight();
          cout<<" press 1 to check available seats "<<endl;
        int g21;
        cin>>g21;
        if(g21==1)
        {
            s3.display();
            cout<<" seat no 1 to 20 are business class and 21 to 40 are economy class "<<endl;
            cout<<" press 1 to book a ticket "<<endl;
            int g41;
            cin>>g41;
            if(g41==1)
            {
                cout<<" enter seat no you want to book "<<endl;
                int g61;
                cin>>g61;
             if(   s3.search_key(g61)==1)
             { cout<<"***************"<<endl;
               cout<<"kindly enter your information "<<endl;
                 p3.atend();
                 r3=av3.Insert(r3,g61);
                 s3.del_element(g61,s3);
                 cout<<" enter your account no for money "<<endl;
                 string ac11;
                 cin>>ac11;
                 cout<<" enter 1 to confirm ticket "<<endl;
                 int g91;
                 cin>>g91;
                 if(g91 == 1)
                 {
                     cout<<"  your ticket is confirmed "<<endl;
                     cout<<"            Thankyou  "<<endl;
                     cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g11;
            cin>>g11;
            if(g11==1)
            {
                main();
            }
            else
            {
                return 0;
            }
                 }


             }
             else
             {
                 cout<<"this seat is not available or you may entered wrong number "<<endl;
                 cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g71;
            cin>>g71;
            if(g71==1)
            {
                main();
            }
            else
            {
                return 0;
            }
             }

            }
      }
    }
    else
    {
        cout<<" Sorry there is no scheduled flight on your particular route "<<endl;
        cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }

    }



}
else if(i==2)
{
    cout<<" enter your route "<<endl;
    string a;
    string b;
    cout<<"from"<<endl;
    cin>>a;
    cout<<"to"<<endl;
    cin>>b;
    if(a==f1.showfcity()&&b==f1.showtcity())
    {
        f1.showflight();
        cout<<"press 1 if this is your flight"<<endl;
        int az;
        cin>>az;
        if(az==1)
        {
            cout<<"enter your cnic "<<endl;
            int a9;
            cin>>a9;

                cout<<"enter your seat no"<<endl;
                int a2;
                cin>>a2;
              r1=  av1.deleteNode(r1,a2);
                s1.add_element(a2,s1);
                p1.delete_passenger(a9);
                cout<<"your ticket is cancelled"<<endl;
                 cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }
            }


        else
          {

               cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }
          }
    }
  else  if(a==f2.showfcity()&&b==f2.showtcity())
    {
        f2.showflight();
        cout<<"press 1 if this is your flight"<<endl;
        int az;
        cin>>az;
        if(az==1)
        {
            cout<<"enter your cnic "<<endl;
            int a9;
            cin>>a9;

                cout<<"enter your seat no"<<endl;
                int a2;
                cin>>a2;
               r2= av2.deleteNode(r2,a2);
                s2.add_element(a2,s2);
                p2.delete_passenger(a9);
                cout<<"your ticket is cancelled"<<endl;
                 cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }
            }


        else
          {

               cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }
          }
    }
    else  if(a==f3.showfcity()&&b==f3.showtcity())
    {
        f2.showflight();
        cout<<"press 1 if this is your flight"<<endl;
        int az;
        cin>>az;
        if(az==1)
        {
            cout<<"enter your cnic "<<endl;
            int a9;
            cin>>a9;

                cout<<"enter your seat no"<<endl;
                int a2;
                cin>>a2;
               r3= av3.deleteNode(r3,a2);
                s3.add_element(a2,s3);
                p3.delete_passenger(a9);
                cout<<"your ticket is cancelled"<<endl;
                 cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }
            }


        else
          {

               cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }
          }
    }

    else
          {    cout<<" your flight is not available or you entered wrong route "<<endl;

               cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }
          }

}
           else
          {

               cout<<" press 1 to return to main menu and any other key to exit "<<endl;
            int g1;
            cin>>g1;
            if(g1==1)
            {
                main();
            }
            else
            {
                return 0;
            }
          }



}








    return 0;
}
