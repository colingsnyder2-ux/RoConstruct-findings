// from server: 100% by colin
// roc 2009-06 0088f110  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f110
//
// 0088f110  6a07                 push 7
// 0088f112  6890266800           push 0x682690
// 0088f117  6850256800           push 0x682550
// 0088f11c  68f01b8e00           push 0x8e1bf0
// 0088f121  683c238e00           push 0x8e233c
// 0088f126  b914d3a400           mov ecx, 0xa4d314
// 0088f12b  e88050ddff           call 0x6641b0
// 0088f130  6850af8900           push 0x89af50
// 0088f135  e8c1a9e8ff           call 0x719afb
// 0088f13a  59                   pop ecx
// 0088f13b  c3                   ret 

extern int g_0088f110_0;
extern int g_0088f110_1;
extern int g_0088f110_2;
extern int g_0088f110_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f110(void*);
struct O_0088f110 { int m(void*, void*, void*, void*, int); };
extern O_0088f110 g_obj_0088f110;
extern int g_tail_0088f110;
void func_0088f110()
{
    g_obj_0088f110.m((void*)&g_0088f110_0, (void*)&g_0088f110_1, (void*)&g_0088f110_2, (void*)&g_0088f110_3, 7);
    tail_fn_0088f110(&g_tail_0088f110);
}