// from server: 100% by colin
// roc 2010-06 009c9940  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9940
//
// 009c9940  6a01                 push 1
// 009c9942  6a00                 push 0
// 009c9944  68949fa200           push 0xa29f94
// 009c9949  688c9fa200           push 0xa29f8c
// 009c994e  688c000000           push 0x8c
// 009c9953  b9b8b3c000           mov ecx, 0xc0b3b8
// 009c9958  e873e9bcff           call 0x5982d0
// 009c995d  6810ed9d00           push 0x9ded10
// 009c9962  e8fcf0ddff           call 0x7a8a63
// 009c9967  59                   pop ecx
// 009c9968  c3                   ret 

extern int g_009c9940_1;
extern int g_009c9940_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c9940(void*);
struct O_009c9940 { int m(int, void*, void*, int, int); };
extern O_009c9940 g_obj_009c9940;
extern int g_tail_009c9940;
void func_009c9940()
{
    g_obj_009c9940.m(140, (void*)&g_009c9940_1, (void*)&g_009c9940_2, 0, 1);
    tail_fn_009c9940(&g_tail_009c9940);
}