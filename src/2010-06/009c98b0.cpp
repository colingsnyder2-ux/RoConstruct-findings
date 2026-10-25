// from server: 100% by colin
// roc 2010-06 009c98b0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c98b0
//
// 009c98b0  6a01                 push 1
// 009c98b2  6a00                 push 0
// 009c98b4  68f09ea200           push 0xa29ef0
// 009c98b9  68509fa200           push 0xa29f50
// 009c98be  6880000000           push 0x80
// 009c98c3  b988b5c000           mov ecx, 0xc0b588
// 009c98c8  e8d3e7bcff           call 0x5980a0
// 009c98cd  6850ec9d00           push 0x9dec50
// 009c98d2  e88cf1ddff           call 0x7a8a63
// 009c98d7  59                   pop ecx
// 009c98d8  c3                   ret 

extern int g_009c98b0_1;
extern int g_009c98b0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c98b0(void*);
struct O_009c98b0 { int m(int, void*, void*, int, int); };
extern O_009c98b0 g_obj_009c98b0;
extern int g_tail_009c98b0;
void func_009c98b0()
{
    g_obj_009c98b0.m(128, (void*)&g_009c98b0_1, (void*)&g_009c98b0_2, 0, 1);
    tail_fn_009c98b0(&g_tail_009c98b0);
}