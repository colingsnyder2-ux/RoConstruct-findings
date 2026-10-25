// from server: 100% by colin
// roc 2010-06 009d6490  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d6490
//
// 009d6490  6a00                 push 0
// 009d6492  6a02                 push 2
// 009d6494  686c010000           push 0x16c
// 009d6499  6840ffa200           push 0xa2ff40
// 009d649e  68a850a400           push 0xa450a8
// 009d64a3  b9e803c200           mov ecx, 0xc203e8
// 009d64a8  e84329cfff           call 0x6c8df0
// 009d64ad  68b06e9e00           push 0x9e6eb0
// 009d64b2  e8ac25ddff           call 0x7a8a63
// 009d64b7  59                   pop ecx
// 009d64b8  c3                   ret 

extern int g_009d6490_0;
extern int g_009d6490_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d6490(void*);
struct O_009d6490 { int m(void*, void*, int, int, int); };
extern O_009d6490 g_obj_009d6490;
extern int g_tail_009d6490;
void func_009d6490()
{
    g_obj_009d6490.m((void*)&g_009d6490_0, (void*)&g_009d6490_1, 364, 2, 0);
    tail_fn_009d6490(&g_tail_009d6490);
}