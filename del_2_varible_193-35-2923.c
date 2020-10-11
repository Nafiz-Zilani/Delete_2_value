#include<stdio.h>

int main()
{
    int data [100], counter, search1, search2, save_box, array_size, extra1 = -1, extra2 = -1;

    ///Taking array size
    printf("How many data you want to save(<=100) = ");
    scanf("%d", &array_size);

    ///converting to array size
    array_size = array_size - 1;

    ///Taking array data
    printf("\nEnter data = ");
    for(counter=0 ; counter<=array_size ; counter++){
        scanf("%d", &data[counter]);
    }

    ///Printing array data
    printf("\nData = ");
    for(counter=0 ; counter<=array_size ; counter++){
        printf ("%d ", data[counter]);
    }

    ///Which value customer want to delet
    printf("\nData you want to delete 1 = ");
    scanf("%d", &search1);
    printf("\nData you want to delete 2 = ");
    scanf("%d", &search2);

        ///first delete
        for(counter=0; counter<=array_size ; counter++){
            if(data[counter]== search1){
                save_box=counter;
                extra1 = 1;
                break;
            }
        }
        if(extra1 == 1){
            for( counter=save_box ; counter<=array_size ; counter++){
                data[counter] = data[counter+1];
            }
        }

        ///second delete
        for(counter=0; counter<=array_size ; counter++){
            if(data[counter]== search2){
                save_box=counter;
                extra2 = 1;
                break;
            }
        }
        if(extra2 == 1){
            for( counter=save_box ; counter<=array_size ; counter++){
                data[counter] = data[counter+1];
            }
        }

        ///printing new data
        if(extra1 == -1 && extra2 == -1){                  ///If both values don't exist on array
            printf("\n%d & %d  not found.", search1, search2);
            printf("\nNew array = |");

            for(counter=0 ; counter<=array_size ; counter++){
            printf("%d|", data[counter]);
            }
        }
        else if(extra1 != 1){              ///If first search value don't exist on array
            printf("\n%d is not found.", search1);
            printf("\nNew array = |");
            for(counter=0 ; counter<=array_size-1 ; counter++){
            printf("%d|", data[counter]);
            }
        }
        else if(extra2 != 1){             ///If second search value don't exist on array
            printf("\n%d is not found.", search2);
            printf("\nNew array = |");
            for(counter=0 ; counter<=array_size-1 ; counter++){
            printf("%d|", data[counter]);
            }

        }
        else{                            ///If both values  exist on array
            printf("\nNew array = |");
            for(counter=0 ; counter<=array_size-2 ; counter++){
                printf("%d|", data[counter]);
            }
        }
    return 0;
}
