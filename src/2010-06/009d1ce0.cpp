// from server: 100% by colin
// roc 2010-06 009d1ce0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1ce0
//
// 009d1ce0  6a00                 push 0
// 009d1ce2  6a02                 push 2
// 009d1ce4  689c020000           push 0x29c
// 009d1ce9  6840ffa200           push 0xa2ff40
// 009d1cee  68acaaa300           push 0xa3aaac
// 009d1cf3  b9a8c9c100           mov ecx, 0xc1c9a8
// 009d1cf8  e8f307c9ff           call 0x6624f0
// 009d1cfd  6880429e00           push 0x9e4280
// 009d1d02  e85c6dddff           call 0x7a8a63
// 009d1d07  59                   pop ecx
// 009d1d08  c3                   ret 

extern int g_009d1ce0_0;
extern int g_009d1ce0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1ce0(void*);
struct O_009d1ce0 { int m(void*, void*, int, int, int); };
extern O_009d1ce0 g_obj_009d1ce0;
extern int g_tail_009d1ce0;
void func_009d1ce0()
{
    g_obj_009d1ce0.m((void*)&g_009d1ce0_0, (void*)&g_009d1ce0_1, 668, 2, 0);
    tail_fn_009d1ce0(&g_tail_009d1ce0);
}