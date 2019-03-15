#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct abc{
	int pyfxtybt;
	struct abc* ktdj;
	struct abc* ghfdj;
	};
struct abc*  cjplfnm(){
	struct abc* lthtdj =  malloc(sizeof(struct abc));
	lthtdj->ktdj = NULL;
	lthtdj->ghfdj = NULL;
	lthtdj->pyfxtybt = -1;
	return lthtdj;
}
void ghbceyenm(int xbckj, struct abc* lthtdj){
	if(xbckj > lthtdj->pyfxtybt){
	if(lthtdj->ktdj == NULL){
	lthtdj->ktdj = cjplfnm();
	lthtdj->ktdj->pyfxtybt = xbckj;	
	return;
	}
	else{
	ghbceyenm(xbckj, lthtdj->ktdj);
	}
	}
	else{
	if(lthtdj->ghfdj == NULL){
        lthtdj->ghfdj = cjplfnm();
        lthtdj->ghfdj->pyfxtybt = xbckj;
        return;
        }
        else{
        ghbceyenm(xbckj, lthtdj->ghfdj);
	}
	}
}
void elfktybt(struct abc* lthtdj){
	if(lthtdj == NULL)
	return;
	elfktybt(lthtdj->ghfdj);
	elfktybt(lthtdj->ktdj);
	free(lthtdj);
}
void dsdjl(struct abc* lthtdj){
        if(lthtdj == NULL)
        return;
        dsdjl(lthtdj->ghfdj);
	if(lthtdj -> pyfxtybt > 0)
        printf(" %d \n",lthtdj -> pyfxtybt);
        dsdjl(lthtdj->ktdj);
}

int main(int xbckj, char ** fhuevtyn){
	int ifub;
	struct abc* lthtdj =  cjplfnm();
	for(ifub = 1; ifub < xbckj; ifub++)
	ghbceyenm(atoi(fhuevtyn[ifub]), lthtdj);
	dsdjl(lthtdj);
	elfktybt(lthtdj);
	return 0;
}
