// from server: 100% by colin
// roc 2010-06 009d1d10  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1d10
//
// 009d1d10  6a00                 push 0
// 009d1d12  6a02                 push 2
// 009d1d14  68c4020000           push 0x2c4
// 009d1d19  6840ffa200           push 0xa2ff40
// 009d1d1e  68c8aaa300           push 0xa3aac8
// 009d1d23  b968cac100           mov ecx, 0xc1ca68
// 009d1d28  e8c307c9ff           call 0x6624f0
// 009d1d2d  68a0429e00           push 0x9e42a0
// 009d1d32  e82c6dddff           call 0x7a8a63
// 009d1d37  59                   pop ecx
// 009d1d38  c3                   ret 

extern int g_009d1d10_0;
extern int g_009d1d10_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1d10(void*);
struct O_009d1d10 { int m(void*, void*, int, int, int); };
extern O_009d1d10 g_obj_009d1d10;
extern int g_tail_009d1d10;
void func_009d1d10()
{
    g_obj_009d1d10.m((void*)&g_009d1d10_0, (void*)&g_009d1d10_1, 708, 2, 0);
    tail_fn_009d1d10(&g_tail_009d1d10);
}