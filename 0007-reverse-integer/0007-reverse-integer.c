int reverse(int x){
    if(x>2147483647 ||x<-2147483648){
        return 0;
    }else{
    long long  rev = 0 ;
    int num=x;
    while(num != 0){
        rev = rev*10+num%10;
        num = num/10;
    }
    if(rev>2147483647 ||rev<-2147483648){
        return 0;
    }else{
        return rev;
    }
}
}
    


