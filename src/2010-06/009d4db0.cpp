// from server: 100% by colin
// roc 2010-06 009d4db0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4db0
//
// 009d4db0  6a01                 push 1
// 009d4db2  6a00                 push 0
// 009d4db4  68188ea100           push 0xa18e18
// 009d4db9  688c9fa200           push 0xa29f8c
// 009d4dbe  68a0000000           push 0xa0
// 009d4dc3  b9fcf1c100           mov ecx, 0xc1f1fc
// 009d4dc8  e883c7cdff           call 0x6b1550
// 009d4dcd  68d0619e00           push 0x9e61d0
// 009d4dd2  e88c3cddff           call 0x7a8a63
// 009d4dd7  59                   pop ecx
// 009d4dd8  c3                   ret 

extern int g_009d4db0_1;
extern int g_009d4db0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4db0(void*);
struct O_009d4db0 { int m(int, void*, void*, int, int); };
extern O_009d4db0 g_obj_009d4db0;
extern int g_tail_009d4db0;
void func_009d4db0()
{
    g_obj_009d4db0.m(160, (void*)&g_009d4db0_1, (void*)&g_009d4db0_2, 0, 1);
    tail_fn_009d4db0(&g_tail_009d4db0);
}