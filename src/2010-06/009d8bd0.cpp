// from server: 100% by colin
// roc 2010-06 009d8bd0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8bd0
//
// 009d8bd0  6a00                 push 0
// 009d8bd2  6a02                 push 2
// 009d8bd4  6894020000           push 0x294
// 009d8bd9  6840ffa200           push 0xa2ff40
// 009d8bde  6858b3a400           push 0xa4b358
// 009d8be3  b9901ec200           mov ecx, 0xc21e90
// 009d8be8  e8b302d2ff           call 0x6f8ea0
// 009d8bed  68c0839e00           push 0x9e83c0
// 009d8bf2  e86cfedcff           call 0x7a8a63
// 009d8bf7  59                   pop ecx
// 009d8bf8  c3                   ret 

extern int g_009d8bd0_0;
extern int g_009d8bd0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8bd0(void*);
struct O_009d8bd0 { int m(void*, void*, int, int, int); };
extern O_009d8bd0 g_obj_009d8bd0;
extern int g_tail_009d8bd0;
void func_009d8bd0()
{
    g_obj_009d8bd0.m((void*)&g_009d8bd0_0, (void*)&g_009d8bd0_1, 660, 2, 0);
    tail_fn_009d8bd0(&g_tail_009d8bd0);
}