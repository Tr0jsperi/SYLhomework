#include<stdio.h>
int main()
{
    float tank_volume;                      //定义油箱的容积为浮点类型变量tank_volume
    float oil_density;                      //定义油的密度为浮点类型变量oil_density
    float oil_kg;
    float area;

    tank_volume=0.1;                       //给变量tank_volume赋值
    oil_density=850;                       //给变量oil_density赋值

    oil_kg=tank_volume*oil_density;        //求tank_volume和oil_density的积并赋值给oil_kg
    area=oil_kg/0.85;                      //求oil_kg/0.85的商并赋值给area
    printf("Most farming is %f mu",area);
    return 0;
}
