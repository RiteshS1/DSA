#include<iostream>
using namespace std;


int findMax(int arr[], int size){
    int maxans= INT8_MIN;
    for(int i=0; i<size; i++){
        maxans= max(maxans,arr[i]);
    }
    return maxans;
}



void printZeroesandOnes(int arr[],int size){
    int zeroCount =0, oneCount= 0;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }


    }
    cout<<"No of 0's = "<<zeroCount<<endl<<"No. of 1's = "<<oneCount;
}

void extremePrint(int arr[], int size){
    int i=0,j=size-1;//6
    while(i<=j){
        cout<<arr[i]<<" ";
        i++;
        if(j>i){
            cout<<arr[j]<<" ";
            j--;
        }
    }

   
}

void swapIndices(int arr[],int i, int j){
    for(int i=0; i<=j;i++){
    int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
for(int i=0; i<=j;i++){
    cout<<arr[i]<<" ";
    }

}

void reverseArr(int arr[],int n){
    int l=0, h=n-1;
    while(l<h){
        swap(arr[l++],arr[h--]);
    }
}
int main()
{
//--------------------------------------------------------BASICS-------------------------------------

    // int a[4];
    // cout<<a[0];


    // int a[5]={10,20,30,40,50};
    // cout<<a[0]<<"\n"<<a[4]<<endl;

    // int arr[6]= {10};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;





    // fill(a,a+4,21);


    // cout<<a[0]<<" "<<a[1]<<" " <<a[2]<< " " <<a[3]<<" " <<a[4];








    // I/p - O/p

//     int arr[5];
//     for(int i=0; i<5;i++){
//             cin>>arr[i];
           

//     }

//     for(int i=0;i<5;i++){
//         cout<<i<<" = "<<arr[i]<<endl;
//     }
//     //arr[i]-->i[arr]
//   for(int i=0;i<5;i++){
//         cout<<i<<" = "<<i[arr]<<endl;
//     }




    

    // int arr[5]={10,20};
    // cout<<sizeof(arr)/sizeof(int);
    // //5*4=20/4=5
    
//-------------------------------------------------Intermediate---------------------------

//FIND MAX-MIN 


    // int arr[100];
    // int size;
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Max no. "<<findMax(arr,size)<<endl;






//PrintNoofZeroesnOnes

    // int arr[100];
    // int size;
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
        
    // }
    // for(int i=0;i<size;i++){
    //     cout<<arr[i];
        
    // }
    // cout<<endl;
    // printZeroesandOnes(arr,size);
 






//Extreme Printing
/*
To isme humme extremes ko starting ke baad print krana hata h like
iff Input array is 10,20,30,40,50,60,70
to Output array should be 10,70,20,60,30,50,40
smjheeeeeee
*/

    // int arr[]={10,20,30,40,50,60,70};
    // int size = 7;
    // extremePrint(arr,size);


//SWAP VALUES OF TWO GIVEN INDICES

// int arr[]={10,20,30,40,50};
// swapIndices(arr,0,4);



//REVERSE
    int arr[7]={10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    





    return 0;
}
