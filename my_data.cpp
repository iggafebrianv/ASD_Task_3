
#include "my_data.h"

/**
    CLASS      :
    NAME       :
    STUDENT ID :
**/

mytype create_data() {
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    // YOUR CODE HERE
     cout<<"Masukan ID: ";
    cin>>d.ID;
    cout<<"Masukan Nama: ";
    cin>>d.name;
    cout<<"Masukan ranking : ";
    cin>>d.rank;
    cout<<"Masukan score : ";
    cin>>d.score;
    // ===========================
    return d;
}

void view_data(mytype d) {
    /**
     TODO:  view the content of data d
     it will be called when print_info function is invoked
    */

    // ===========================
    // YOUR CODE HERE
        cout<< d.ID << " , " << d.name << " , "<< d.rank << " , " << d.score << endl;
    // ===========================
}


void edit_data(mytype &d) {
    /**
     * TODO:  edit the value of data d,
     *       receive input FROM USER
     *       the ID must NOT be modified
    */

    // ===========================
    // YOUR CODE HERE
    cout<< "Masukan pergantian nama : ";
    cin>>d.name;
    cout<<"Masukan pergantian rank : ";
    cin>>d.rank;
    cout<<"Masukan pergantian score : ";
    cin>>d.score;
    // ===========================
}

