// from server: 100% by colin
// roc 2009-06 0088ef30  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088ef30
//
// 0088ef30  6a07                 push 7
// 0088ef32  6850276800           push 0x682750
// 0088ef37  68d0256800           push 0x6825d0
// 0088ef3c  6898228e00           push 0x8e2298
// 0088ef41  68a8228e00           push 0x8e22a8
// 0088ef46  b9c8d0a400           mov ecx, 0xa4d0c8
// 0088ef4b  e84041ddff           call 0x663090
// 0088ef50  6890b08900           push 0x89b090
// 0088ef55  e8a1abe8ff           call 0x719afb
// 0088ef5a  59                   pop ecx
// 0088ef5b  c3                   ret 

extern int g_0088ef30_0;
extern int g_0088ef30_1;
extern int g_0088ef30_2;
extern int g_0088ef30_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088ef30(void*);
struct O_0088ef30 { int m(void*, void*, void*, void*, int); };
extern O_0088ef30 g_obj_0088ef30;
extern int g_tail_0088ef30;
void func_0088ef30()
{
    g_obj_0088ef30.m((void*)&g_0088ef30_0, (void*)&g_0088ef30_1, (void*)&g_0088ef30_2, (void*)&g_0088ef30_3, 7);
    tail_fn_0088ef30(&g_tail_0088ef30);
}