bool isPalindrome(int x) {
    long long  pali = 0;
    long long temp = x;
    while (temp > 0) {
        pali = pali*10 + temp%10;
        temp = temp /10;
    }

    if (pali == x) {
        return true ;
    } else {
        return false;
    }
}