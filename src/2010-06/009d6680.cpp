// from server: 100% by colin
// roc 2010-06 009d6680  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d6680
//
// 009d6680  6a00                 push 0
// 009d6682  6a02                 push 2
// 009d6684  68f4000000           push 0xf4
// 009d6689  6840ffa200           push 0xa2ff40
// 009d668e  685450a400           push 0xa45054
// 009d6693  b9c005c200           mov ecx, 0xc205c0
// 009d6698  e88368cfff           call 0x6ccf20
// 009d669d  6810719e00           push 0x9e7110
// 009d66a2  e8bc23ddff           call 0x7a8a63
// 009d66a7  59                   pop ecx
// 009d66a8  c3                   ret 

extern int g_009d6680_0;
extern int g_009d6680_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d6680(void*);
struct O_009d6680 { int m(void*, void*, int, int, int); };
extern O_009d6680 g_obj_009d6680;
extern int g_tail_009d6680;
void func_009d6680()
{
    g_obj_009d6680.m((void*)&g_009d6680_0, (void*)&g_009d6680_1, 244, 2, 0);
    tail_fn_009d6680(&g_tail_009d6680);
}