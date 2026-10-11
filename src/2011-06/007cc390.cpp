// from server: 71% by colin
// roc-flags: /O2 /Ob2 /Oy /GS- /EHsc /MD
extern "C" void helper_007cc390(void*,int,int,int);
void func_007cc390(void* a,void* b,volatile int c) { if(c!=4){ int old=c; c=0; helper_007cc390(b,(int)a,old,0); return; } *(int*)b=0xc93360; ((char*)b)[4]=0; ((char*)b)[5]=0; }
