// from server: 100% by colin
// roc 2010-06 009d1d70  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1d70
//
// 009d1d70  6a00                 push 0
// 009d1d72  6a02                 push 2
// 009d1d74  6814030000           push 0x314
// 009d1d79  6840ffa200           push 0xa2ff40
// 009d1d7e  6800aba300           push 0xa3ab00
// 009d1d83  b900c8c100           mov ecx, 0xc1c800
// 009d1d88  e86307c9ff           call 0x6624f0
// 009d1d8d  68e0429e00           push 0x9e42e0
// 009d1d92  e8cc6cddff           call 0x7a8a63
// 009d1d97  59                   pop ecx
// 009d1d98  c3                   ret 

extern int g_009d1d70_0;
extern int g_009d1d70_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1d70(void*);
struct O_009d1d70 { int m(void*, void*, int, int, int); };
extern O_009d1d70 g_obj_009d1d70;
extern int g_tail_009d1d70;
void func_009d1d70()
{
    g_obj_009d1d70.m((void*)&g_009d1d70_0, (void*)&g_009d1d70_1, 788, 2, 0);
    tail_fn_009d1d70(&g_tail_009d1d70);
}