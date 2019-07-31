// Program to check the number is palindrome or not.

int main()                                                  //main function
    int number, temp, rem, sum = 0;                         //variable declaration & initialization
    printf("Enter the palindrome number = \n");
    scanf("%d", &number);
    temp = number;
    while(number > 0){                                      //while loop
        rem = number % 10;
        sum = (sum * 10) + rem;
        number = number / 10;
    }
    if(temp == sum)                                         //if else statement
        printf("Number is palindrome");
    else
        printf("Number is not palindrome");
    return  0;
}