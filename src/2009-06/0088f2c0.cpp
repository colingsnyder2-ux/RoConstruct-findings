// from server: 100% by colin
// roc 2009-06 0088f2c0  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f2c0
//
// 0088f2c0  6a07                 push 7
// 0088f2c2  68e0266800           push 0x6826e0
// 0088f2c7  6870256800           push 0x682570
// 0088f2cc  6898228e00           push 0x8e2298
// 0088f2d1  68c0238e00           push 0x8e23c0
// 0088f2d6  b994d1a400           mov ecx, 0xa4d194
// 0088f2db  e83055ddff           call 0x664810
// 0088f2e0  6830b08900           push 0x89b030
// 0088f2e5  e811a8e8ff           call 0x719afb
// 0088f2ea  59                   pop ecx
// 0088f2eb  c3                   ret 

extern int g_0088f2c0_0;
extern int g_0088f2c0_1;
extern int g_0088f2c0_2;
extern int g_0088f2c0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f2c0(void*);
struct O_0088f2c0 { int m(void*, void*, void*, void*, int); };
extern O_0088f2c0 g_obj_0088f2c0;
extern int g_tail_0088f2c0;
void func_0088f2c0()
{
    g_obj_0088f2c0.m((void*)&g_0088f2c0_0, (void*)&g_0088f2c0_1, (void*)&g_0088f2c0_2, (void*)&g_0088f2c0_3, 7);
    tail_fn_0088f2c0(&g_tail_0088f2c0);
}