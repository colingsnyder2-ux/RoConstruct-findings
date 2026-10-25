// from server: 100% by colin
// roc 2010-06 009d55d0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d55d0
//
// 009d55d0  6a00                 push 0
// 009d55d2  6a0f                 push 0xf
// 009d55d4  686c010000           push 0x16c
// 009d55d9  68f429a400           push 0xa429f4
// 009d55de  68b02aa400           push 0xa42ab0
// 009d55e3  b9e8f9c100           mov ecx, 0xc1f9e8
// 009d55e8  e88325ceff           call 0x6b7b70
// 009d55ed  6870679e00           push 0x9e6770
// 009d55f2  e86c34ddff           call 0x7a8a63
// 009d55f7  59                   pop ecx
// 009d55f8  c3                   ret 

extern int g_009d55d0_0;
extern int g_009d55d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d55d0(void*);
struct O_009d55d0 { int m(void*, void*, int, int, int); };
extern O_009d55d0 g_obj_009d55d0;
extern int g_tail_009d55d0;
void func_009d55d0()
{
    g_obj_009d55d0.m((void*)&g_009d55d0_0, (void*)&g_009d55d0_1, 364, 15, 0);
    tail_fn_009d55d0(&g_tail_009d55d0);
}