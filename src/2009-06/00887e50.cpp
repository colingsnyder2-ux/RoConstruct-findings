// from server: 100% by colin
// roc 2009-06 00887e50  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887e50
//
// 00887e50  6a07                 push 7
// 00887e52  68bc000000           push 0xbc
// 00887e57  68305d8c00           push 0x8c5d30
// 00887e5c  68205e8c00           push 0x8c5e20
// 00887e61  b9b8eca300           mov ecx, 0xa3ecb8
// 00887e66  e805d5c4ff           call 0x4d5370
// 00887e6b  68105b8900           push 0x895b10
// 00887e70  e8861ce9ff           call 0x719afb
// 00887e75  59                   pop ecx
// 00887e76  c3                   ret 

extern int g_00887e50_0;
extern int g_00887e50_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887e50(void*);
struct O_00887e50 { int m(void*, void*, int, int); };
extern O_00887e50 g_obj_00887e50;
extern int g_tail_00887e50;
void func_00887e50()
{
    g_obj_00887e50.m((void*)&g_00887e50_0, (void*)&g_00887e50_1, 188, 7);
    tail_fn_00887e50(&g_tail_00887e50);
}