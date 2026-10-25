// from server: 100% by colin
// roc 2010-06 009d8ba0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8ba0
//
// 009d8ba0  6a00                 push 0
// 009d8ba2  6a02                 push 2
// 009d8ba4  686c020000           push 0x26c
// 009d8ba9  6840ffa200           push 0xa2ff40
// 009d8bae  6838b3a400           push 0xa4b338
// 009d8bb3  b95021c200           mov ecx, 0xc22150
// 009d8bb8  e8e302d2ff           call 0x6f8ea0
// 009d8bbd  68a0839e00           push 0x9e83a0
// 009d8bc2  e89cfedcff           call 0x7a8a63
// 009d8bc7  59                   pop ecx
// 009d8bc8  c3                   ret 

extern int g_009d8ba0_0;
extern int g_009d8ba0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8ba0(void*);
struct O_009d8ba0 { int m(void*, void*, int, int, int); };
extern O_009d8ba0 g_obj_009d8ba0;
extern int g_tail_009d8ba0;
void func_009d8ba0()
{
    g_obj_009d8ba0.m((void*)&g_009d8ba0_0, (void*)&g_009d8ba0_1, 620, 2, 0);
    tail_fn_009d8ba0(&g_tail_009d8ba0);
}