// from server: 100% by colin
// roc 2010-06 009d6d00  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d6d00
//
// 009d6d00  6a00                 push 0
// 009d6d02  6a0f                 push 0xf
// 009d6d04  6898000000           push 0x98
// 009d6d09  685c8ea100           push 0xa18e5c
// 009d6d0e  680804a300           push 0xa30408
// 009d6d13  b98c0bc200           mov ecx, 0xc20b8c
// 009d6d18  e87327d0ff           call 0x6d9490
// 009d6d1d  68f0759e00           push 0x9e75f0
// 009d6d22  e83c1dddff           call 0x7a8a63
// 009d6d27  59                   pop ecx
// 009d6d28  c3                   ret 

extern int g_009d6d00_0;
extern int g_009d6d00_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d6d00(void*);
struct O_009d6d00 { int m(void*, void*, int, int, int); };
extern O_009d6d00 g_obj_009d6d00;
extern int g_tail_009d6d00;
void func_009d6d00()
{
    g_obj_009d6d00.m((void*)&g_009d6d00_0, (void*)&g_009d6d00_1, 152, 15, 0);
    tail_fn_009d6d00(&g_tail_009d6d00);
}