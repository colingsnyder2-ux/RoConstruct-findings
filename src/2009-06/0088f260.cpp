// from server: 100% by colin
// roc 2009-06 0088f260  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f260
//
// 0088f260  6a07                 push 7
// 0088f262  68d0276800           push 0x6827d0
// 0088f267  6830266800           push 0x682630
// 0088f26c  6898228e00           push 0x8e2298
// 0088f271  68a8238e00           push 0x8e23a8
// 0088f276  b904d2a400           mov ecx, 0xa4d204
// 0088f27b  e8d040ddff           call 0x663350
// 0088f280  6870af8900           push 0x89af70
// 0088f285  e871a8e8ff           call 0x719afb
// 0088f28a  59                   pop ecx
// 0088f28b  c3                   ret 

extern int g_0088f260_0;
extern int g_0088f260_1;
extern int g_0088f260_2;
extern int g_0088f260_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f260(void*);
struct O_0088f260 { int m(void*, void*, void*, void*, int); };
extern O_0088f260 g_obj_0088f260;
extern int g_tail_0088f260;
void func_0088f260()
{
    g_obj_0088f260.m((void*)&g_0088f260_0, (void*)&g_0088f260_1, (void*)&g_0088f260_2, (void*)&g_0088f260_3, 7);
    tail_fn_0088f260(&g_tail_0088f260);
}