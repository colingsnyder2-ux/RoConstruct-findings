// from server: 100% by colin
// roc 2010-06 009cda20  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cda20
//
// 009cda20  6a01                 push 1
// 009cda22  6a00                 push 0
// 009cda24  68b0cca200           push 0xa2ccb0
// 009cda29  68dccca200           push 0xa2ccdc
// 009cda2e  68d4000000           push 0xd4
// 009cda33  b90489c100           mov ecx, 0xc18904
// 009cda38  e853e0bfff           call 0x5cba90
// 009cda3d  68d0209e00           push 0x9e20d0
// 009cda42  e81cb0ddff           call 0x7a8a63
// 009cda47  59                   pop ecx
// 009cda48  c3                   ret 

extern int g_009cda20_1;
extern int g_009cda20_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009cda20(void*);
struct O_009cda20 { int m(int, void*, void*, int, int); };
extern O_009cda20 g_obj_009cda20;
extern int g_tail_009cda20;
void func_009cda20()
{
    g_obj_009cda20.m(212, (void*)&g_009cda20_1, (void*)&g_009cda20_2, 0, 1);
    tail_fn_009cda20(&g_tail_009cda20);
}