// from server: 100% by colin
// roc 2009-06 0088f1d0  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f1d0
//
// 0088f1d0  6a07                 push 7
// 0088f1d2  6890266800           push 0x682690
// 0088f1d7  6850256800           push 0x682550
// 0088f1dc  68f01b8e00           push 0x8e1bf0
// 0088f1e1  6878238e00           push 0x8e2378
// 0088f1e6  b9e4d0a400           mov ecx, 0xa4d0e4
// 0088f1eb  e8d052ddff           call 0x6644c0
// 0088f1f0  68d0af8900           push 0x89afd0
// 0088f1f5  e801a9e8ff           call 0x719afb
// 0088f1fa  59                   pop ecx
// 0088f1fb  c3                   ret 

extern int g_0088f1d0_0;
extern int g_0088f1d0_1;
extern int g_0088f1d0_2;
extern int g_0088f1d0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f1d0(void*);
struct O_0088f1d0 { int m(void*, void*, void*, void*, int); };
extern O_0088f1d0 g_obj_0088f1d0;
extern int g_tail_0088f1d0;
void func_0088f1d0()
{
    g_obj_0088f1d0.m((void*)&g_0088f1d0_0, (void*)&g_0088f1d0_1, (void*)&g_0088f1d0_2, (void*)&g_0088f1d0_3, 7);
    tail_fn_0088f1d0(&g_tail_0088f1d0);
}