#include <stdio.h>
#include "raylib.h"
#include "meqdardehi.h"
int map[17][17]={0};

int main(){
    int tedadmaqar,tedadrosta,tedadmasdod;
    printf("tedad maqar vard konid");
    scanf("%d",&tedadmaqar);
    maqar(tedadmaqar);
    printf("tedad rosta vard konid");
    scanf("%d",&tedadrosta);
    rosta(tedadrosta);
    printf("tedadmasdod ra vard konid");
    scanf("%d",&tedadmasdod);
    masdod(tedadmasdod);
    InitWindow(0,0,"MAP");

   Texture2D background= LoadTexture("C:/Users/ASUS/CLionProjects/untitled4/img_1.png");
    SetTargetFPS(60);;
    while(!WindowShouldClose()){
        ClearBackground(GRAY);
        BeginDrawing();
        ClearBackground(GREEN);
        for (int i = 0;i < 17;i++){
            for (int j = 0; j <17 ; ++j) {
                if(map[i][j]=='c'){

                }
                if(map[i][j]=='v'){
                    Vector2 position={i*50,j*50};
                }
            }


        }

        DrawText("1",50,50,20,RED);
    EndDrawing();}
    CloseWindow();
    return 0;}

