// from server: 100% by colin
// roc 2010-06 009c98e0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c98e0
//
// 009c98e0  6a01                 push 1
// 009c98e2  6a00                 push 0
// 009c98e4  68f09ea200           push 0xa29ef0
// 009c98e9  68609fa200           push 0xa29f60
// 009c98ee  6884000000           push 0x84
// 009c98f3  b95cb4c000           mov ecx, 0xc0b45c
// 009c98f8  e8a3e7bcff           call 0x5980a0
// 009c98fd  6890ec9d00           push 0x9dec90
// 009c9902  e85cf1ddff           call 0x7a8a63
// 009c9907  59                   pop ecx
// 009c9908  c3                   ret 

extern int g_009c98e0_1;
extern int g_009c98e0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c98e0(void*);
struct O_009c98e0 { int m(int, void*, void*, int, int); };
extern O_009c98e0 g_obj_009c98e0;
extern int g_tail_009c98e0;
void func_009c98e0()
{
    g_obj_009c98e0.m(132, (void*)&g_009c98e0_1, (void*)&g_009c98e0_2, 0, 1);
    tail_fn_009c98e0(&g_tail_009c98e0);
}