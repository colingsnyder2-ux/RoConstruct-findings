// from server: 100% by colin
// roc 2010-06 009d5020  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5020
//
// 009d5020  6a01                 push 1
// 009d5022  6a00                 push 0
// 009d5024  68188ea100           push 0xa18e18
// 009d5029  688c9fa200           push 0xa29f8c
// 009d502e  6898000000           push 0x98
// 009d5033  b978f2c100           mov ecx, 0xc1f278
// 009d5038  e893c8cdff           call 0x6b18d0
// 009d503d  68d0629e00           push 0x9e62d0
// 009d5042  e81c3addff           call 0x7a8a63
// 009d5047  59                   pop ecx
// 009d5048  c3                   ret 

extern int g_009d5020_1;
extern int g_009d5020_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5020(void*);
struct O_009d5020 { int m(int, void*, void*, int, int); };
extern O_009d5020 g_obj_009d5020;
extern int g_tail_009d5020;
void func_009d5020()
{
    g_obj_009d5020.m(152, (void*)&g_009d5020_1, (void*)&g_009d5020_2, 0, 1);
    tail_fn_009d5020(&g_tail_009d5020);
}