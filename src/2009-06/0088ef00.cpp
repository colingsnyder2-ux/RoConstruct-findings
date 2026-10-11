// from server: 100% by colin
// roc 2009-06 0088ef00  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088ef00
//
// 0088ef00  6a07                 push 7
// 0088ef02  68e0266800           push 0x6826e0
// 0088ef07  6870256800           push 0x682570
// 0088ef0c  6898228e00           push 0x8e2298
// 0088ef11  6888228e00           push 0x8e2288
// 0088ef16  b978d0a400           mov ecx, 0xa4d078
// 0088ef1b  e8f049ddff           call 0x663910
// 0088ef20  68b0ad8900           push 0x89adb0
// 0088ef25  e8d1abe8ff           call 0x719afb
// 0088ef2a  59                   pop ecx
// 0088ef2b  c3                   ret 

extern int g_0088ef00_0;
extern int g_0088ef00_1;
extern int g_0088ef00_2;
extern int g_0088ef00_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088ef00(void*);
struct O_0088ef00 { int m(void*, void*, void*, void*, int); };
extern O_0088ef00 g_obj_0088ef00;
extern int g_tail_0088ef00;
void func_0088ef00()
{
    g_obj_0088ef00.m((void*)&g_0088ef00_0, (void*)&g_0088ef00_1, (void*)&g_0088ef00_2, (void*)&g_0088ef00_3, 7);
    tail_fn_0088ef00(&g_tail_0088ef00);
}