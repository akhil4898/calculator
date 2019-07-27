//                                                /*
// Created by akhil on 26/7/19.                        Title Comment
//                                                                      */
#include <stdio.h>                                  /*library File Access*/
#define  PI 3.14
float area_of_circle(float radius);
int main(void){                                    //Function main Heading
    float radius = 0.0, area = 0;                  //Variable Declaration
    printf("Enter the Radius of the area  = ");    //Output Statement (Prompt)
    scanf("%f", &radius);                          //Input Statement
    area = area_of_circle(radius);
    printf("area is = %0.3f\n", area);             //Output Statement
    return 0;
}


float area_of_circle(float r) {
    float area;
    area = PI * r * r;
    return(area);
}