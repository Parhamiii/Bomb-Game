#include <iostream>
using namespace std;
int board[5][5]={{0, 1, 0, 3, -1}, {1, -1, 0, -2, 2}, {-3, 0, 1, -1, 1,}, {2, 1, 0, 2, -2}, {1, 8, -3, 1, 0}};
int counterOfMove=12, life=3, i=0, j=0, score=0;
void movement(){
    char move;
    while (counterOfMove!=0 && life!=0 ) {
        cin >> move;
        counterOfMove--;
        switch (move) {
            case 's':
                i++;

                if (i==5){
                    i=0;
                }
                if (board[i][j]>0) {
                    score += board[i][j];
                }
                else if (board[i][j]<0){
                    life+=board[i][j];
                }
                break;
            case 'w':
                i--;

                if (i==-1){
                    i=4;
                }
                if (board[i][j]>0) {
                    score += board[i][j];
                }
                else if (board[i][j]<0){
                    life+=board[i][j];
                }
                break;
            case 'd':
                j++;

                if (j==5){
                    j=0;
                }
                if (board[i][j]>0) {
                    score += board[i][j];
                }
                else if (board[i][j]<0){
                    life+=board[i][j];
                }
                break;
            case 'a':
                j--;

                if (j==-1){
                    j=4;
                }
                if (board[i][j]>0) {
                    score += board[i][j];
                }
                else if (board[i][j]<0){
                    life+=board[i][j];
                }
                break;
            default:
                cout<<"Error  ";
        }
        if (life<=0)
            break;
    }
    if (life>0){
        cout<<"\nwin  "<<score<<"  "<<life<<endl;
    }
    else{
        cout<<"\nlose  "<<score<<"  "<<life<<endl;
    }
}
int main() {
    movement();
    return 0;
}
