// from server: 100% by colin
// roc 2009-06 0088ef90  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088ef90
//
// 0088ef90  6a07                 push 7
// 0088ef92  6890266800           push 0x682690
// 0088ef97  6850256800           push 0x682550
// 0088ef9c  68f01b8e00           push 0x8e1bf0
// 0088efa1  68c0228e00           push 0x8e22c0
// 0088efa6  b904d1a400           mov ecx, 0xa4d104
// 0088efab  e8004bddff           call 0x663ab0
// 0088efb0  6850ae8900           push 0x89ae50
// 0088efb5  e841abe8ff           call 0x719afb
// 0088efba  59                   pop ecx
// 0088efbb  c3                   ret 

extern int g_0088ef90_0;
extern int g_0088ef90_1;
extern int g_0088ef90_2;
extern int g_0088ef90_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088ef90(void*);
struct O_0088ef90 { int m(void*, void*, void*, void*, int); };
extern O_0088ef90 g_obj_0088ef90;
extern int g_tail_0088ef90;
void func_0088ef90()
{
    g_obj_0088ef90.m((void*)&g_0088ef90_0, (void*)&g_0088ef90_1, (void*)&g_0088ef90_2, (void*)&g_0088ef90_3, 7);
    tail_fn_0088ef90(&g_tail_0088ef90);
}