void swap_max(int arr[], int len, int n){

    int t, pos=n, max= arr[n];
    for(int i=n; i<len; i++){
    
        if(max<arr[i])
        {
            max=arr[i];
            pos=i;
        }
    }
    
       
    t=arr[pos];
    arr[pos]=arr[n];
    arr[n]=t;
        
}
   	
    	
    	
void ssort(int arr[], int l){

    for(int k=0; k<l; k++){
    
        swap_max(arr, l, k);
    }
}
