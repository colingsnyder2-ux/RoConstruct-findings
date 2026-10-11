// from server: 100% by colin
// roc 2009-06 00887df0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887df0
//
// 00887df0  6a07                 push 7
// 00887df2  68b4000000           push 0xb4
// 00887df7  68305d8c00           push 0x8c5d30
// 00887dfc  68005e8c00           push 0x8c5e00
// 00887e01  b980eda300           mov ecx, 0xa3ed80
// 00887e06  e865d5c4ff           call 0x4d5370
// 00887e0b  68705c8900           push 0x895c70
// 00887e10  e8e61ce9ff           call 0x719afb
// 00887e15  59                   pop ecx
// 00887e16  c3                   ret 

extern int g_00887df0_0;
extern int g_00887df0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887df0(void*);
struct O_00887df0 { int m(void*, void*, int, int); };
extern O_00887df0 g_obj_00887df0;
extern int g_tail_00887df0;
void func_00887df0()
{
    g_obj_00887df0.m((void*)&g_00887df0_0, (void*)&g_00887df0_1, 180, 7);
    tail_fn_00887df0(&g_tail_00887df0);
}