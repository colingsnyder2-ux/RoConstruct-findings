// from server: 100% by colin
// roc 2010-06 009d4cb0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4cb0
//
// 009d4cb0  6a01                 push 1
// 009d4cb2  6a00                 push 0
// 009d4cb4  68188ea100           push 0xa18e18
// 009d4cb9  688c9fa200           push 0xa29f8c
// 009d4cbe  68a0000000           push 0xa0
// 009d4cc3  b978f3c100           mov ecx, 0xc1f378
// 009d4cc8  e8c3c6cdff           call 0x6b1390
// 009d4ccd  6850619e00           push 0x9e6150
// 009d4cd2  e88c3dddff           call 0x7a8a63
// 009d4cd7  59                   pop ecx
// 009d4cd8  c3                   ret 

extern int g_009d4cb0_1;
extern int g_009d4cb0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4cb0(void*);
struct O_009d4cb0 { int m(int, void*, void*, int, int); };
extern O_009d4cb0 g_obj_009d4cb0;
extern int g_tail_009d4cb0;
void func_009d4cb0()
{
    g_obj_009d4cb0.m(160, (void*)&g_009d4cb0_1, (void*)&g_009d4cb0_2, 0, 1);
    tail_fn_009d4cb0(&g_tail_009d4cb0);
}