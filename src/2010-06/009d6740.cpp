// from server: 100% by colin
// roc 2010-06 009d6740  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d6740
//
// 009d6740  6a00                 push 0
// 009d6742  6a02                 push 2
// 009d6744  6894010000           push 0x194
// 009d6749  6840ffa200           push 0xa2ff40
// 009d674e  68c850a400           push 0xa450c8
// 009d6753  b9e006c200           mov ecx, 0xc206e0
// 009d6758  e8c367cfff           call 0x6ccf20
// 009d675d  68d0709e00           push 0x9e70d0
// 009d6762  e8fc22ddff           call 0x7a8a63
// 009d6767  59                   pop ecx
// 009d6768  c3                   ret 

extern int g_009d6740_0;
extern int g_009d6740_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d6740(void*);
struct O_009d6740 { int m(void*, void*, int, int, int); };
extern O_009d6740 g_obj_009d6740;
extern int g_tail_009d6740;
void func_009d6740()
{
    g_obj_009d6740.m((void*)&g_009d6740_0, (void*)&g_009d6740_1, 404, 2, 0);
    tail_fn_009d6740(&g_tail_009d6740);
}