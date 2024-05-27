# include <iostream>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        for(int l=0;l<n-i-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}

void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*(n-i)-1;k++){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}

void print9(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print10(int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            for(int j=1;j<i;j++){
                if(j%2==0){
                    cout<<"1 ";
                } else{
                    cout<<"0 ";
                }
                
            }
            cout<<endl;

        } else{
            for(int j=1;j<i;j++){
                if(j%2==0){
                    cout<<"0 ";
                } else{
                    cout<<"1 ";
                }
            
        }
        
    }
}
}

int main(){
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int n; cin>>n;
        // print1(n);
        // print2(n);
        // print3(n);
        // print4(n);
        // print5(n);
        // print6(n);
        // print7(n);
        // print8(n);
        print10(n);
    }
    return 0;
}