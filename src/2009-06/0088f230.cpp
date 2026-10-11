// from server: 100% by colin
// roc 2009-06 0088f230  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f230
//
// 0088f230  6a07                 push 7
// 0088f232  6850276800           push 0x682750
// 0088f237  68d0256800           push 0x6825d0
// 0088f23c  6898228e00           push 0x8e2298
// 0088f241  689c238e00           push 0x8e239c
// 0088f246  b958d1a400           mov ecx, 0xa4d158
// 0088f24b  e80041ddff           call 0x663350
// 0088f250  6890af8900           push 0x89af90
// 0088f255  e8a1a8e8ff           call 0x719afb
// 0088f25a  59                   pop ecx
// 0088f25b  c3                   ret 

extern int g_0088f230_0;
extern int g_0088f230_1;
extern int g_0088f230_2;
extern int g_0088f230_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f230(void*);
struct O_0088f230 { int m(void*, void*, void*, void*, int); };
extern O_0088f230 g_obj_0088f230;
extern int g_tail_0088f230;
void func_0088f230()
{
    g_obj_0088f230.m((void*)&g_0088f230_0, (void*)&g_0088f230_1, (void*)&g_0088f230_2, (void*)&g_0088f230_3, 7);
    tail_fn_0088f230(&g_tail_0088f230);
}