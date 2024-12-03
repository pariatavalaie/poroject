//
// Created by ASUS on 11/30/2024.
//
#include "stdio.h"
#include "meqdardehi.h"
extern int map[17][17];
void maqar(int tedadmaqar){
    int x,y;
    for(int i = 1;i <= tedadmaqar;i++){
        printf("x,y %d ra vard konid",i);
        scanf("%d %d",&x,&y);
       map[x][y]='c';
    }
}
void rosta(int tedadrosta){
    int x,y;
    for (int i = 0; i < tedadrosta  ; ++i) {
        printf("x,y%d ra vard konid",i+1);
        scanf("%d %d",&x,&y);
        if(map[x][y]!='c')
        map[x][y]='v';
        else i--;
    }}
void masdod(int tedadmasdod){
    int x,y;
    for (int i = 0; i < tedadmasdod ; ++i) {
        printf("x,y%d ra vard konid",i+1);
        scanf("%d %d",&x,&y);
        if(map[x][y]!='c'&&map[x][y]!='v')
        map[x][y]='x';
    else i--;
    }}