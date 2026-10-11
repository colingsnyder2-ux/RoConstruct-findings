// from server: 100% by colin
// roc 2009-06 0088f020  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f020
//
// 0088f020  6a07                 push 7
// 0088f022  68d0276800           push 0x6827d0
// 0088f027  6830266800           push 0x682630
// 0088f02c  6898228e00           push 0x8e2298
// 0088f031  68f4228e00           push 0x8e22f4
// 0088f036  b934d3a400           mov ecx, 0xa4d334
// 0088f03b  e80041ddff           call 0x663140
// 0088f040  68f0ad8900           push 0x89adf0
// 0088f045  e8b1aae8ff           call 0x719afb
// 0088f04a  59                   pop ecx
// 0088f04b  c3                   ret 

extern int g_0088f020_0;
extern int g_0088f020_1;
extern int g_0088f020_2;
extern int g_0088f020_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f020(void*);
struct O_0088f020 { int m(void*, void*, void*, void*, int); };
extern O_0088f020 g_obj_0088f020;
extern int g_tail_0088f020;
void func_0088f020()
{
    g_obj_0088f020.m((void*)&g_0088f020_0, (void*)&g_0088f020_1, (void*)&g_0088f020_2, (void*)&g_0088f020_3, 7);
    tail_fn_0088f020(&g_tail_0088f020);
}