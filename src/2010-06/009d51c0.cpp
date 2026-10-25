// from server: 100% by colin
// roc 2010-06 009d51c0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d51c0
//
// 009d51c0  6a01                 push 1
// 009d51c2  6a00                 push 0
// 009d51c4  68188ea100           push 0xa18e18
// 009d51c9  688c9fa200           push 0xa29f8c
// 009d51ce  68b0000000           push 0xb0
// 009d51d3  b920f0c100           mov ecx, 0xc1f020
// 009d51d8  e8b3c8cdff           call 0x6b1a90
// 009d51dd  6850639e00           push 0x9e6350
// 009d51e2  e87c38ddff           call 0x7a8a63
// 009d51e7  59                   pop ecx
// 009d51e8  c3                   ret 

extern int g_009d51c0_1;
extern int g_009d51c0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d51c0(void*);
struct O_009d51c0 { int m(int, void*, void*, int, int); };
extern O_009d51c0 g_obj_009d51c0;
extern int g_tail_009d51c0;
void func_009d51c0()
{
    g_obj_009d51c0.m(176, (void*)&g_009d51c0_1, (void*)&g_009d51c0_2, 0, 1);
    tail_fn_009d51c0(&g_tail_009d51c0);
}