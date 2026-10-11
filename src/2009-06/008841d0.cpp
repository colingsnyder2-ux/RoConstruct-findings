// from server: 100% by colin
// roc 2009-06 008841d0  unit: seg_00880000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008841d0
//
// 008841d0  68c0398900           push 0x8939c0
// 008841d5  c7055097a30000000000 mov dword ptr [0xa39750], 0
// 008841df  e81759e9ff           call 0x719afb
// 008841e4  59                   pop ecx
// 008841e5  c3                   ret 

extern int g; extern "C" void f(void*);
void func(){g=0; f((void*)0x8939c0);}
