// from server: 56% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GS- /EHsc /MD
extern "C" void helper(int,void*,int,int);
void f(int a,void* b,int c){if(c!=3){int old=c;c=0;helper(a,b,old,c);return;}*(void**)b=(void*)0x92c520;}
