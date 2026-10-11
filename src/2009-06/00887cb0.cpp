// from server: 100% by colin
// roc 2009-06 00887cb0  unit: seg_00880000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00887cb0
//
// 00887cb0  689c598c00           push 0x8c599c
// 00887cb5  6894598c00           push 0x8c5994
// 00887cba  6880598c00           push 0x8c5980
// 00887cbf  6834010000           push 0x134
// 00887cc4  b9a4eaa300           mov ecx, 0xa3eaa4
// 00887cc9  e802bfc4ff           call 0x4d3bd0
// 00887cce  68c05a8900           push 0x895ac0
// 00887cd3  e8231ee9ff           call 0x719afb
// 00887cd8  59                   pop ecx
// 00887cd9  c3                   ret 

extern int g_00887cb0_1;
extern int g_00887cb0_2;
extern int g_00887cb0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00887cb0(void*);
struct O_00887cb0 { int m(int, void*, void*, void*); };
extern O_00887cb0 g_obj_00887cb0;
extern int g_tail_00887cb0;
void func_00887cb0()
{
    g_obj_00887cb0.m(308, (void*)&g_00887cb0_1, (void*)&g_00887cb0_2, (void*)&g_00887cb0_3);
    tail_fn_00887cb0(&g_tail_00887cb0);
}