// from server: 79% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
struct Obj { void run(void*,void*,void*,void*,void*); }; extern Obj obj; extern "C" void tail(void*);
void func_0076fca0(){ obj.run((void*)0x486270,0,(void*)0x79a72c,(void*)0x79a73c,0); tail((void*)0x7781f0); }
