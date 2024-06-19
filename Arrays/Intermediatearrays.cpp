#include<iostream>

using namespace std;



//LEETCODE 1ST QUESN
//136. SINGLE NUMBER



    int singleNum(int arr[] , int n){

        int ans=0;

        for(int i=0; i<n; i++){
            ans = ans^arr[i];
        }
        return ans;

    }

   
   
   void printAllPairOriginal(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"("<<arr[i]<<" , "<<arr[j]<<")";

        cout<<endl;
        }
        
    }
  
   }
   void printAllPairPatttern1(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<"("<<arr[i]<<" , "<<arr[j]<<")";

        cout<<endl;
        }
     
cout<<endl;
    }
    
   }
   

   void printAllPairPatttern2(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<"("<<arr[i]<<" , "<<arr[j]<<")";

        cout<<endl;
        }
     
cout<<endl;
    }
    
   }
    
    
    
    void printAllPairPatttern3(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"("<<arr[i]<<" , "<<arr[j]<<")";

        cout<<endl;
        }
     
cout<<endl;
    }
    
   }
   

   void printAllPairPatttern4(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            cout<<"("<<arr[i]<<" , "<<arr[j]<<")";

        cout<<endl;
        }
     
cout<<endl;
    }
    
   }
   



   void printAllPairPatttern5(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            cout<<"("<<arr[i]<<" , "<<arr[j]<<")";

        cout<<endl;
        }
     
cout<<endl;
    }
    
   }
   
   
   
   void printAllPairPatttern6(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cout<<"("<<arr[i]<<" , "<<arr[j]<<")";

        cout<<endl;
        }
     
cout<<endl;
    }
    
   }
   
   
   
   int main(){

//---------------------single number ke liye------------------------
        int arr[]= {10,20,20,55,30,10,30,40,50,40,50};
        int size = sizeof(arr)/sizeof(arr[0]);
        int ans= singleNum(arr,size);
        cout<<ans<<endl;


/*

//------------------to print all pairs-----------------------------
    int arr[]={10,20,30,40};
    int size= sizeof(arr)/sizeof(arr[0]);

    cout<<"----------------____PATTERN ORIGINAL WITH ALL PAIRS---------------"<<endl;    
    printAllPairOriginal(arr,size);
    cout<<"----------------____PATTERN 1---------------"<<endl;
    printAllPairPatttern1(arr,size);
    cout<<"-----------------____PATTERN 2--------------"<<endl;
    printAllPairPatttern2(arr,size);

    cout<<"----------------____PATTERN 3---------------"<<endl;
    printAllPairPatttern3(arr,size);


    cout<<"----------------____PATTERN 4---------------"<<endl;
    printAllPairPatttern4(arr,size);



    cout<<"----------------____PATTERN 5---------------"<<endl;
    printAllPairPatttern5(arr,size);



    cout<<"----------------____PATTERN 6---------------"<<endl;
    printAllPairPatttern6(arr,size);



*/



    
    return 0;
}