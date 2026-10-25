// from server: 100% by colin
// roc 2010-06 009d4bd0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4bd0
//
// 009d4bd0  6a01                 push 1
// 009d4bd2  6a00                 push 0
// 009d4bd4  68188ea100           push 0xa18e18
// 009d4bd9  688c9fa200           push 0xa29f8c
// 009d4bde  6898000000           push 0x98
// 009d4be3  b9c0f4c100           mov ecx, 0xc1f4c0
// 009d4be8  e8e3c5cdff           call 0x6b11d0
// 009d4bed  68d0639e00           push 0x9e63d0
// 009d4bf2  e86c3eddff           call 0x7a8a63
// 009d4bf7  59                   pop ecx
// 009d4bf8  c3                   ret 

extern int g_009d4bd0_1;
extern int g_009d4bd0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4bd0(void*);
struct O_009d4bd0 { int m(int, void*, void*, int, int); };
extern O_009d4bd0 g_obj_009d4bd0;
extern int g_tail_009d4bd0;
void func_009d4bd0()
{
    g_obj_009d4bd0.m(152, (void*)&g_009d4bd0_1, (void*)&g_009d4bd0_2, 0, 1);
    tail_fn_009d4bd0(&g_tail_009d4bd0);
}