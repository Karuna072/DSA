//to find kth smallest element (questiion from gfg) 
class Solution{
    public static int kthSmallest(int[] arr, int l, int r, int k) 
    { 
        //Your code here
        Arrays.sort(arr); //inbuilt function in java
        return arr[k-1];  //to return kth value
    } 
}
