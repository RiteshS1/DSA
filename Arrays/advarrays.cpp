#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// int sortDNF(vector<int> nums, int size)
// {
//     vector<int> arr;

//     for(int i=0; i<size; i++){
//         if(nums[i]==0){
//             arr.push_back(nums[i]);

//         }
//     }
    
//     for(int i=0; i<size; i++){
//         if(nums[i]==1){
//             arr.push_back(nums[i]);
            
//         }
//     }
    
//     for(int i=0; i<size; i++){
//         if(nums[i]==2){
//             arr.push_back(nums[i]);
            
//         }
//     }


//     for(int i=0; i<size; i++){
//         cout<<arr[i];
//     }




        // int n = nums.size();
        // vector<int> ans;
        // for(int i = 0; i<n; i++){
            
        //     if(nums[i]==val){
        //         ans.push_back(nums[i]);
        //         ans.pop_back();
        //         ans.push_back(nums[i]);
                
        //     }
            

        // }
        
        // for(int i=0; i<n;i++){
        //     cout<<ans[i]<<" ";
        // }

// }

// int dectoBinary(int n){
//     int bit=0;
//     int i=1;
//     int num = 0;
    
//     while(n>0){
//         bit=(n&1);
//         num=bit*i +num;
//        n =  n>>1;
//        i*=10;

//     }
//     return num;
// }




//int main(){
    // int n;
    // cin>>n;
    // for(int row=0; row<n;row++){
    //     for(int col=0; col<n;col++){
    //         if(row==0||col==0||col==n-row-1)
    //         cout<<"*";
    //         else
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

//     int n;
//     cin>>n;
//     cout<<dectoBinary(n);








//    int a;
//    cin>>a;
//    vector<int> ansR;
 
//    for(int i=0;a!=0;i++){
//    int aR= a%2;
//    int aD = a/2;
   

//    ansR.push_back(aR);
// a=aD;
    
//    }
// // Print the binary digits in reverse order
//     for (int i = ansR.size() - 1; i >= 0; i--) {
//         cout << ansR[i];
//     }
//     cout << endl;
// int a = 5%2;
// int b =5/2;
// int c= b%2;
// int d= b/2;
// int e= d%2;
// cout<<a<<b<<c<<d<<e;



    // nums.push_back(10);
    // nums.push_back(20);
    // nums.push_back(10);
    // nums.push_back(40);
    // nums.push_back(50);

    // remElement(nums,10);
    


vector<int> twoSum( vector<int>&nums, int target)
{

    //Two Sum - LeetCode=1
    //ToDo = return the indices of the pair that gives the sum equal to target
    //Given = vector nums and target

    //Approach =
    //BruteForce--> traverse the complete vector and select first pos
    //           then keep adding the next eles till we get the target if not we switch to next eles
  vector<int> ans;
    int n = nums.size();
    for(int i=0; i<n;i++){
     // when i=n-1; j=n ; stop
        for(int j=i+1;j<n;j++){
            if(target == nums[i]+nums[j]){
                ans.push_back(i);
                ans.push_back(j);
          
            }
            // else{
            //     cout<<"Target aint valid";
            // }
        }
    }
      return ans;
}
int main(){
 
    vector<int> nums= {1,2,3,4,5,6,7,8,9,10};
    int target = 7;
    vector<int> result = twoSum(nums,target);
    if (!result.empty()) {
      for(int i=0;i<result.size();i++){
        cout<<result[i]<<",";

      }
    } else {
        cout << "No valid pair found!" << endl;
    }
    return 0;
}