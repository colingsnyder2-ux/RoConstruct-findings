// from server: 100% by colin
// roc 2010-06 009d1e00  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1e00
//
// 009d1e00  6a00                 push 0
// 009d1e02  6a02                 push 2
// 009d1e04  688c030000           push 0x38c
// 009d1e09  6840ffa200           push 0xa2ff40
// 009d1e0e  6854aba300           push 0xa3ab54
// 009d1e13  b950cbc100           mov ecx, 0xc1cb50
// 009d1e18  e8d306c9ff           call 0x6624f0
// 009d1e1d  6840439e00           push 0x9e4340
// 009d1e22  e83c6cddff           call 0x7a8a63
// 009d1e27  59                   pop ecx
// 009d1e28  c3                   ret 

extern int g_009d1e00_0;
extern int g_009d1e00_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1e00(void*);
struct O_009d1e00 { int m(void*, void*, int, int, int); };
extern O_009d1e00 g_obj_009d1e00;
extern int g_tail_009d1e00;
void func_009d1e00()
{
    g_obj_009d1e00.m((void*)&g_009d1e00_0, (void*)&g_009d1e00_1, 908, 2, 0);
    tail_fn_009d1e00(&g_tail_009d1e00);
}