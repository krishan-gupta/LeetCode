void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int temp_merge[m+n];
    int i=0 , j=0 , k = 0 ;
    while(m>i && n>j ){
        if(nums1[i]<nums2[j]){
            temp_merge[k]=nums1[i];
            i++;
            k++;
        }else{
            temp_merge[k]=nums2[j];
            k++;
            j++;
        }
    }


    while(m>i){
        temp_merge[k]=nums1[i];
        i++;
        k++;
    }

    while(n>j){
        temp_merge[k]=nums2[j];
        k++;
        j++;
    }

    for(int z=0 ; z<m+n;z++){
        nums1[z]=temp_merge[z];
    }
}