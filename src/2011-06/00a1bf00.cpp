// from server: 100% by colin
// roc 2011-06 00a1bf00  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1bf00
//
// 00a1bf00  6a00                 push 0
// 00a1bf02  6a1f                 push 0x1f
// 00a1bf04  6894000000           push 0x94
// 00a1bf09  68089ba800           push 0xa89b08
// 00a1bf0e  68109ba800           push 0xa89b10
// 00a1bf13  b980b2cb00           mov ecx, 0xcbb280
// 00a1bf18  e8c337b7ff           call 0x58f6e0
// 00a1bf1d  68f04ba300           push 0xa34bf0
// 00a1bf22  e836f2deff           call 0x80b15d
// 00a1bf27  59                   pop ecx
// 00a1bf28  c3                   ret 

extern int g_00a1bf00_0;
extern int g_00a1bf00_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1bf00(void*);
struct O_00a1bf00 { int m(void*, void*, int, int, int); };
extern O_00a1bf00 g_obj_00a1bf00;
extern int g_tail_00a1bf00;
void func_00a1bf00()
{
    g_obj_00a1bf00.m((void*)&g_00a1bf00_0, (void*)&g_00a1bf00_1, 148, 31, 0);
    tail_fn_00a1bf00(&g_tail_00a1bf00);
}