// from server: 100% by colin
// roc 2010-06 009d8d80  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8d80
//
// 009d8d80  6a01                 push 1
// 009d8d82  6a00                 push 0
// 009d8d84  6828b5a400           push 0xa4b528
// 009d8d89  6818b5a400           push 0xa4b518
// 009d8d8e  68b4000000           push 0xb4
// 009d8d93  b9a024c200           mov ecx, 0xc224a0
// 009d8d98  e8234ad2ff           call 0x6fd7c0
// 009d8d9d  68a0889e00           push 0x9e88a0
// 009d8da2  e8bcfcdcff           call 0x7a8a63
// 009d8da7  59                   pop ecx
// 009d8da8  c3                   ret 

extern int g_009d8d80_1;
extern int g_009d8d80_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8d80(void*);
struct O_009d8d80 { int m(int, void*, void*, int, int); };
extern O_009d8d80 g_obj_009d8d80;
extern int g_tail_009d8d80;
void func_009d8d80()
{
    g_obj_009d8d80.m(180, (void*)&g_009d8d80_1, (void*)&g_009d8d80_2, 0, 1);
    tail_fn_009d8d80(&g_tail_009d8d80);
}