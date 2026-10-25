// from server: 100% by colin
// roc 2010-06 009d64c0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d64c0
//
// 009d64c0  6a00                 push 0
// 009d64c2  6a02                 push 2
// 009d64c4  6894010000           push 0x194
// 009d64c9  6840ffa200           push 0xa2ff40
// 009d64ce  68c850a400           push 0xa450c8
// 009d64d3  b9c804c200           mov ecx, 0xc204c8
// 009d64d8  e81329cfff           call 0x6c8df0
// 009d64dd  68d06e9e00           push 0x9e6ed0
// 009d64e2  e87c25ddff           call 0x7a8a63
// 009d64e7  59                   pop ecx
// 009d64e8  c3                   ret 

extern int g_009d64c0_0;
extern int g_009d64c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d64c0(void*);
struct O_009d64c0 { int m(void*, void*, int, int, int); };
extern O_009d64c0 g_obj_009d64c0;
extern int g_tail_009d64c0;
void func_009d64c0()
{
    g_obj_009d64c0.m((void*)&g_009d64c0_0, (void*)&g_009d64c0_1, 404, 2, 0);
    tail_fn_009d64c0(&g_tail_009d64c0);
}