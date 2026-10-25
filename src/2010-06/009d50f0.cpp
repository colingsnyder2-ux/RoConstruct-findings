// from server: 100% by colin
// roc 2010-06 009d50f0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d50f0
//
// 009d50f0  6a01                 push 1
// 009d50f2  6a00                 push 0
// 009d50f4  68188ea100           push 0xa18e18
// 009d50f9  688c9fa200           push 0xa29f8c
// 009d50fe  68a0000000           push 0xa0
// 009d5103  b9c0f2c100           mov ecx, 0xc1f2c0
// 009d5108  e8a3c8cdff           call 0x6b19b0
// 009d510d  6810639e00           push 0x9e6310
// 009d5112  e84c39ddff           call 0x7a8a63
// 009d5117  59                   pop ecx
// 009d5118  c3                   ret 

extern int g_009d50f0_1;
extern int g_009d50f0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d50f0(void*);
struct O_009d50f0 { int m(int, void*, void*, int, int); };
extern O_009d50f0 g_obj_009d50f0;
extern int g_tail_009d50f0;
void func_009d50f0()
{
    g_obj_009d50f0.m(160, (void*)&g_009d50f0_1, (void*)&g_009d50f0_2, 0, 1);
    tail_fn_009d50f0(&g_tail_009d50f0);
}