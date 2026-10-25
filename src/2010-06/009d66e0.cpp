// from server: 100% by colin
// roc 2010-06 009d66e0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d66e0
//
// 009d66e0  6a00                 push 0
// 009d66e2  6a02                 push 2
// 009d66e4  6844010000           push 0x144
// 009d66e9  6840ffa200           push 0xa2ff40
// 009d66ee  688c50a400           push 0xa4508c
// 009d66f3  b92006c200           mov ecx, 0xc20620
// 009d66f8  e82368cfff           call 0x6ccf20
// 009d66fd  6890709e00           push 0x9e7090
// 009d6702  e85c23ddff           call 0x7a8a63
// 009d6707  59                   pop ecx
// 009d6708  c3                   ret 

extern int g_009d66e0_0;
extern int g_009d66e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d66e0(void*);
struct O_009d66e0 { int m(void*, void*, int, int, int); };
extern O_009d66e0 g_obj_009d66e0;
extern int g_tail_009d66e0;
void func_009d66e0()
{
    g_obj_009d66e0.m((void*)&g_009d66e0_0, (void*)&g_009d66e0_1, 324, 2, 0);
    tail_fn_009d66e0(&g_tail_009d66e0);
}