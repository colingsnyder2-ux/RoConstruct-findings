// from server: 100% by colin
// roc 2009-06 0088f0e0  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f0e0
//
// 0088f0e0  6a07                 push 7
// 0088f0e2  68d0276800           push 0x6827d0
// 0088f0e7  6830266800           push 0x682630
// 0088f0ec  6898228e00           push 0x8e2298
// 0088f0f1  6830238e00           push 0x8e2330
// 0088f0f6  b940d2a400           mov ecx, 0xa4d240
// 0088f0fb  e8f040ddff           call 0x6631f0
// 0088f100  6870ae8900           push 0x89ae70
// 0088f105  e8f1a9e8ff           call 0x719afb
// 0088f10a  59                   pop ecx
// 0088f10b  c3                   ret 

extern int g_0088f0e0_0;
extern int g_0088f0e0_1;
extern int g_0088f0e0_2;
extern int g_0088f0e0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f0e0(void*);
struct O_0088f0e0 { int m(void*, void*, void*, void*, int); };
extern O_0088f0e0 g_obj_0088f0e0;
extern int g_tail_0088f0e0;
void func_0088f0e0()
{
    g_obj_0088f0e0.m((void*)&g_0088f0e0_0, (void*)&g_0088f0e0_1, (void*)&g_0088f0e0_2, (void*)&g_0088f0e0_3, 7);
    tail_fn_0088f0e0(&g_tail_0088f0e0);
}