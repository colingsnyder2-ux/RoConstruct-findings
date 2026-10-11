// from server: 100% by colin
// roc 2009-06 0088f2f0  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f2f0
//
// 0088f2f0  6a07                 push 7
// 0088f2f2  6850276800           push 0x682750
// 0088f2f7  68d0256800           push 0x6825d0
// 0088f2fc  6898228e00           push 0x8e2298
// 0088f301  68d4238e00           push 0x8e23d4
// 0088f306  b93cd1a400           mov ecx, 0xa4d13c
// 0088f30b  e8f040ddff           call 0x663400
// 0088f310  6810b08900           push 0x89b010
// 0088f315  e8e1a7e8ff           call 0x719afb
// 0088f31a  59                   pop ecx
// 0088f31b  c3                   ret 

extern int g_0088f2f0_0;
extern int g_0088f2f0_1;
extern int g_0088f2f0_2;
extern int g_0088f2f0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f2f0(void*);
struct O_0088f2f0 { int m(void*, void*, void*, void*, int); };
extern O_0088f2f0 g_obj_0088f2f0;
extern int g_tail_0088f2f0;
void func_0088f2f0()
{
    g_obj_0088f2f0.m((void*)&g_0088f2f0_0, (void*)&g_0088f2f0_1, (void*)&g_0088f2f0_2, (void*)&g_0088f2f0_3, 7);
    tail_fn_0088f2f0(&g_tail_0088f2f0);
}