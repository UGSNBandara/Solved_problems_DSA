#include <iostream>

using namespace std;


void printArray(int* arr, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << *(arr + i * cols + j) << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int round;
    cin>>round;

    for(int x=0; x<round; x++){
    int r, c;
    cin>>r>>c;
    int arr[r][c] ={};
    int dif[r][c] ={};

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
            dif[i][j]=arr[i][j];
        }
    }
    //gonna change;
    int con1=0;
    for(int a=0; a<r; a++){
        con1 =0;
        for(int b=0; b<c; b++){
            if(arr[a][b]!=dif[a][b]){
                continue;
            }
            else{
                int con2=0;
                for(int e=0; e<r; e++){
                    con2=0;
                    for(int d=0; d<c; d++){
                        if((dif[a][b]!=arr[e][d])&&(dif[a][b]!=dif[e][d])){
                            con2 = dif[a][b];
                            dif[a][b] = dif[e][d];
                            dif[e][d] = con2;
                            con2=-1;
                            //cout<<"Changed "<<a<<" "<<b<<" : "<<e<<" "<<d<<endl; 
                            break;
                        }
                    }
                    if(con2==-1){break;}
                }
                if(con2==0){
                    cout<<-1<<endl;
                    con1=-1;
                    break;
                }
            }
        }
        if(con1==-1){break;}
    }
    if(con1==0){
        printArray(dif[0],r,c);
    }
    }
    return 0;
}