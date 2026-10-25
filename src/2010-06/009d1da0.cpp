// from server: 100% by colin
// roc 2010-06 009d1da0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1da0
//
// 009d1da0  6a00                 push 0
// 009d1da2  6a02                 push 2
// 009d1da4  683c030000           push 0x33c
// 009d1da9  6840ffa200           push 0xa2ff40
// 009d1dae  681caba300           push 0xa3ab1c
// 009d1db3  b920c8c100           mov ecx, 0xc1c820
// 009d1db8  e83307c9ff           call 0x6624f0
// 009d1dbd  6800439e00           push 0x9e4300
// 009d1dc2  e89c6cddff           call 0x7a8a63
// 009d1dc7  59                   pop ecx
// 009d1dc8  c3                   ret 

extern int g_009d1da0_0;
extern int g_009d1da0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1da0(void*);
struct O_009d1da0 { int m(void*, void*, int, int, int); };
extern O_009d1da0 g_obj_009d1da0;
extern int g_tail_009d1da0;
void func_009d1da0()
{
    g_obj_009d1da0.m((void*)&g_009d1da0_0, (void*)&g_009d1da0_1, 828, 2, 0);
    tail_fn_009d1da0(&g_tail_009d1da0);
}