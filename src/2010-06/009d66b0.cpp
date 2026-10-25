// from server: 100% by colin
// roc 2010-06 009d66b0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d66b0
//
// 009d66b0  6a00                 push 0
// 009d66b2  6a02                 push 2
// 009d66b4  681c010000           push 0x11c
// 009d66b9  6840ffa200           push 0xa2ff40
// 009d66be  687050a400           push 0xa45070
// 009d66c3  b92407c200           mov ecx, 0xc20724
// 009d66c8  e85368cfff           call 0x6ccf20
// 009d66cd  6870709e00           push 0x9e7070
// 009d66d2  e88c23ddff           call 0x7a8a63
// 009d66d7  59                   pop ecx
// 009d66d8  c3                   ret 

extern int g_009d66b0_0;
extern int g_009d66b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d66b0(void*);
struct O_009d66b0 { int m(void*, void*, int, int, int); };
extern O_009d66b0 g_obj_009d66b0;
extern int g_tail_009d66b0;
void func_009d66b0()
{
    g_obj_009d66b0.m((void*)&g_009d66b0_0, (void*)&g_009d66b0_1, 284, 2, 0);
    tail_fn_009d66b0(&g_tail_009d66b0);
}