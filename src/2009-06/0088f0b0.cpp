// from server: 100% by colin
// roc 2009-06 0088f0b0  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f0b0
//
// 0088f0b0  6a07                 push 7
// 0088f0b2  6850276800           push 0x682750
// 0088f0b7  68d0256800           push 0x6825d0
// 0088f0bc  6898228e00           push 0x8e2298
// 0088f0c1  6824238e00           push 0x8e2324
// 0088f0c6  b9b4d1a400           mov ecx, 0xa4d1b4
// 0088f0cb  e82041ddff           call 0x6631f0
// 0088f0d0  6890ae8900           push 0x89ae90
// 0088f0d5  e821aae8ff           call 0x719afb
// 0088f0da  59                   pop ecx
// 0088f0db  c3                   ret 

extern int g_0088f0b0_0;
extern int g_0088f0b0_1;
extern int g_0088f0b0_2;
extern int g_0088f0b0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f0b0(void*);
struct O_0088f0b0 { int m(void*, void*, void*, void*, int); };
extern O_0088f0b0 g_obj_0088f0b0;
extern int g_tail_0088f0b0;
void func_0088f0b0()
{
    g_obj_0088f0b0.m((void*)&g_0088f0b0_0, (void*)&g_0088f0b0_1, (void*)&g_0088f0b0_2, (void*)&g_0088f0b0_3, 7);
    tail_fn_0088f0b0(&g_tail_0088f0b0);
}