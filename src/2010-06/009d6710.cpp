// from server: 100% by colin
// roc 2010-06 009d6710  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d6710
//
// 009d6710  6a00                 push 0
// 009d6712  6a02                 push 2
// 009d6714  686c010000           push 0x16c
// 009d6719  6840ffa200           push 0xa2ff40
// 009d671e  68a850a400           push 0xa450a8
// 009d6723  b94006c200           mov ecx, 0xc20640
// 009d6728  e8f367cfff           call 0x6ccf20
// 009d672d  68b0709e00           push 0x9e70b0
// 009d6732  e82c23ddff           call 0x7a8a63
// 009d6737  59                   pop ecx
// 009d6738  c3                   ret 

extern int g_009d6710_0;
extern int g_009d6710_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d6710(void*);
struct O_009d6710 { int m(void*, void*, int, int, int); };
extern O_009d6710 g_obj_009d6710;
extern int g_tail_009d6710;
void func_009d6710()
{
    g_obj_009d6710.m((void*)&g_009d6710_0, (void*)&g_009d6710_1, 364, 2, 0);
    tail_fn_009d6710(&g_tail_009d6710);
}