int main(){
    int number, temp, rem, sum = 0;
    printf("Enter the palindrome number = \n");
    scanf("%d", &number);
    temp = number;
    while(number > 0){
        rem = number % 10;
        sum = (sum * 10) + rem;
        number = number / 10;
    }
    if(temp == sum)
        printf("Number is palindrome");
    else
        printf("Number is not palindrome");
    return  0;
}