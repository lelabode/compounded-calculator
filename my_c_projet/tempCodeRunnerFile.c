# include <stdio.h>
# include <stdbool.h>

int main(){
  bool isRunning = true;
  char response = '\0';


do{
    printf("You are playing a game.");
    printf("Would you like to continu? : (Y= yes), (N= no) :");
    scanf(" %c", &response);

    if(response != 'Y'){
      isRunning = false;
    }

}while(isRunning);
printf("You exit the game");
return 0;
}
