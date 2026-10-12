// from server: 99% by king_originala
// roc-flags: /O2 /GS- /EHsc /MD
struct S{void f();}; typedef void(__thiscall* Fn)(void*,const char*); extern Fn assign;
void S::f(){assign((char*)this+564,"[[[progress]]]");}
