// from server: 100% by colin
// roc 2010-06 009d4f30  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4f30
//
// 009d4f30  6a01                 push 1
// 009d4f32  6a00                 push 0
// 009d4f34  68188ea100           push 0xa18e18
// 009d4f39  688c9fa200           push 0xa29f8c
// 009d4f3e  68c4000000           push 0xc4
// 009d4f43  b91cf3c100           mov ecx, 0xc1f31c
// 009d4f48  e8c3c7cdff           call 0x6b1710
// 009d4f4d  6850629e00           push 0x9e6250
// 009d4f52  e80c3bddff           call 0x7a8a63
// 009d4f57  59                   pop ecx
// 009d4f58  c3                   ret 

extern int g_009d4f30_1;
extern int g_009d4f30_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4f30(void*);
struct O_009d4f30 { int m(int, void*, void*, int, int); };
extern O_009d4f30 g_obj_009d4f30;
extern int g_tail_009d4f30;
void func_009d4f30()
{
    g_obj_009d4f30.m(196, (void*)&g_009d4f30_1, (void*)&g_009d4f30_2, 0, 1);
    tail_fn_009d4f30(&g_tail_009d4f30);
}