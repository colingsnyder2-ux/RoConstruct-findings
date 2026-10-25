// from server: 100% by colin
// roc 2010-06 009c7a00  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7a00
//
// 009c7a00  6a00                 push 0
// 009c7a02  6a0f                 push 0xf
// 009c7a04  68d0000000           push 0xd0
// 009c7a09  6838a4a100           push 0xa1a438
// 009c7a0e  6868a4a100           push 0xa1a468
// 009c7a13  b90461c000           mov ecx, 0xc06104
// 009c7a18  e8a3f6b0ff           call 0x4d70c0
// 009c7a1d  68c0d19d00           push 0x9dd1c0
// 009c7a22  e83c10deff           call 0x7a8a63
// 009c7a27  59                   pop ecx
// 009c7a28  c3                   ret 

extern int g_009c7a00_0;
extern int g_009c7a00_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c7a00(void*);
struct O_009c7a00 { int m(void*, void*, int, int, int); };
extern O_009c7a00 g_obj_009c7a00;
extern int g_tail_009c7a00;
void func_009c7a00()
{
    g_obj_009c7a00.m((void*)&g_009c7a00_0, (void*)&g_009c7a00_1, 208, 15, 0);
    tail_fn_009c7a00(&g_tail_009c7a00);
}