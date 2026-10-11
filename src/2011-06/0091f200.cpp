// from server: 71% by colin
// roc-flags: /O2 /Ob2 /Oy /GS- /EHsc /MD
extern "C" void helper_0091f200(void*,int,int,int);
void func_0091f200(void* a,void* b,volatile int c) { if(c!=4){ int old=c; c=0; helper_0091f200(b,(int)a,old,0); return; } *(int*)b=0xca93a0; ((char*)b)[4]=0; ((char*)b)[5]=0; }
