// from server: 100% by colin
// roc 2010-06 009c3730  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c3730
//
// 009c3730  6a00                 push 0
// 009c3732  6a0f                 push 0xf
// 009c3734  68b4000000           push 0xb4
// 009c3739  68e4ada000           push 0xa0ade4
// 009c373e  6810aea000           push 0xa0ae10
// 009c3743  b90c0bc000           mov ecx, 0xc00b0c
// 009c3748  e8830ca8ff           call 0x4443d0
// 009c374d  6880b39d00           push 0x9db380
// 009c3752  e80c53deff           call 0x7a8a63
// 009c3757  59                   pop ecx
// 009c3758  c3                   ret 

extern int g_009c3730_0;
extern int g_009c3730_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c3730(void*);
struct O_009c3730 { int m(void*, void*, int, int, int); };
extern O_009c3730 g_obj_009c3730;
extern int g_tail_009c3730;
void func_009c3730()
{
    g_obj_009c3730.m((void*)&g_009c3730_0, (void*)&g_009c3730_1, 180, 15, 0);
    tail_fn_009c3730(&g_tail_009c3730);
}