int addDigits(int num) {
    long long sum = 0;
    while(num>0 || sum>9){
        if(num==0){
            num=sum;
            sum=0;
        }
        sum += num%10;
        num = num /10;
    }

    return sum;
}