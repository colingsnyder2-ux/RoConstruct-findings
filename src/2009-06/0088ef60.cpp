// from server: 100% by colin
// roc 2009-06 0088ef60  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088ef60
//
// 0088ef60  6a07                 push 7
// 0088ef62  68d0276800           push 0x6827d0
// 0088ef67  6830266800           push 0x682630
// 0088ef6c  6898228e00           push 0x8e2298
// 0088ef71  68b4228e00           push 0x8e22b4
// 0088ef76  b9e8d1a400           mov ecx, 0xa4d1e8
// 0088ef7b  e81041ddff           call 0x663090
// 0088ef80  6870b08900           push 0x89b070
// 0088ef85  e871abe8ff           call 0x719afb
// 0088ef8a  59                   pop ecx
// 0088ef8b  c3                   ret 

extern int g_0088ef60_0;
extern int g_0088ef60_1;
extern int g_0088ef60_2;
extern int g_0088ef60_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088ef60(void*);
struct O_0088ef60 { int m(void*, void*, void*, void*, int); };
extern O_0088ef60 g_obj_0088ef60;
extern int g_tail_0088ef60;
void func_0088ef60()
{
    g_obj_0088ef60.m((void*)&g_0088ef60_0, (void*)&g_0088ef60_1, (void*)&g_0088ef60_2, (void*)&g_0088ef60_3, 7);
    tail_fn_0088ef60(&g_tail_0088ef60);
}