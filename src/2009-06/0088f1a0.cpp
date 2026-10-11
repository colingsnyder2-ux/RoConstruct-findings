// from server: 100% by colin
// roc 2009-06 0088f1a0  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f1a0
//
// 0088f1a0  6a07                 push 7
// 0088f1a2  68d0276800           push 0x6827d0
// 0088f1a7  6830266800           push 0x682630
// 0088f1ac  6898228e00           push 0x8e2298
// 0088f1b1  686c238e00           push 0x8e236c
// 0088f1b6  b95cd0a400           mov ecx, 0xa4d05c
// 0088f1bb  e8e040ddff           call 0x6632a0
// 0088f1c0  68f0ae8900           push 0x89aef0
// 0088f1c5  e831a9e8ff           call 0x719afb
// 0088f1ca  59                   pop ecx
// 0088f1cb  c3                   ret 

extern int g_0088f1a0_0;
extern int g_0088f1a0_1;
extern int g_0088f1a0_2;
extern int g_0088f1a0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f1a0(void*);
struct O_0088f1a0 { int m(void*, void*, void*, void*, int); };
extern O_0088f1a0 g_obj_0088f1a0;
extern int g_tail_0088f1a0;
void func_0088f1a0()
{
    g_obj_0088f1a0.m((void*)&g_0088f1a0_0, (void*)&g_0088f1a0_1, (void*)&g_0088f1a0_2, (void*)&g_0088f1a0_3, 7);
    tail_fn_0088f1a0(&g_tail_0088f1a0);
}