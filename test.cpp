#include <iostream>
#include <queue>
using namespace std;

void create_list(queue<int>&L){
    while(!L.empty())
        L.pop();
}
void display_list(queue<int>&L){
    queue<int> temp;
    cout<<"List: ";
    while(!L.empty()){
        int x=L.front();
        L.pop();
        cout<<x<<" ";
        temp.push(x);
    }
    cout<<endl;
    while(!temp.empty()){
        L.push(temp.front());
        temp.pop();
    }
}
void insert_list(queue<int>&L,int value,int pos){
    queue<int> temp;
    int index=0;
    while(!L.empty()){
        if(index==pos){
            temp.push(value);
        }
        temp.push(L.front());
        L.pop();
        index++;
    }
    if(pos>=index){
        temp.push(value);
    }
    L=temp;
}

void delete_list_by_position(queue<int>&L,int pos){
    queue<int> temp;
    int index=0;
    while(!L.empty()){
        int x=L.front();
        L.pop();
        if(index!=pos){
            temp.push(x);
        }
        index++;
    }
    L=temp;
}
void delete_list_by_value(queue<int>&L,int target){
    queue<int> temp;
    bool deleted=false;
    while(!L.empty()){
        int x=L.front();
        L.pop();
        if(x==target&&!deleted){
            deleted=true;
        }else{
            temp.push(x);
        }
    }
    L=temp;
}
void free_list(queue<int>&L){
    while(!L.empty())
        L.pop();
}

int main(){
    queue<int> L;
    create_list(L);
    insert_list(L,10,0);
    insert_list(L,20,1);
    insert_list(L,30,2);
    insert_list(L,40,3);
    display_list(L);
    insert_list(L,99,2);
    display_list(L);
    delete_list_by_position(L,1);
    display_list(L);
    delete_list_by_value(L,30);
    display_list(L);
    free_list(L);
    display_list(L);
    return 0;
}

