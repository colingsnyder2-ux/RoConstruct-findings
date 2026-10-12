// from server: 88% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
struct C{void m(void*,void*,const char*,const char*,void*);}; extern C* g; extern "C" void tail(void*);
static const char a[]="SetBody"; static const char b[]="html";
void f(){g->m((void*)0x41ccd0,(void*)0,a,b,(void*)0);tail((void*)0x7fa6d0);}
