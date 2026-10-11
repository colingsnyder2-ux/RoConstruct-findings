// from server: 100% by colin
// roc 2009-06 0088f170  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f170
//
// 0088f170  6a07                 push 7
// 0088f172  6850276800           push 0x682750
// 0088f177  68d0256800           push 0x6825d0
// 0088f17c  6898228e00           push 0x8e2298
// 0088f181  6860238e00           push 0x8e2360
// 0088f186  b9c0d2a400           mov ecx, 0xa4d2c0
// 0088f18b  e81041ddff           call 0x6632a0
// 0088f190  6810af8900           push 0x89af10
// 0088f195  e861a9e8ff           call 0x719afb
// 0088f19a  59                   pop ecx
// 0088f19b  c3                   ret 

extern int g_0088f170_0;
extern int g_0088f170_1;
extern int g_0088f170_2;
extern int g_0088f170_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f170(void*);
struct O_0088f170 { int m(void*, void*, void*, void*, int); };
extern O_0088f170 g_obj_0088f170;
extern int g_tail_0088f170;
void func_0088f170()
{
    g_obj_0088f170.m((void*)&g_0088f170_0, (void*)&g_0088f170_1, (void*)&g_0088f170_2, (void*)&g_0088f170_3, 7);
    tail_fn_0088f170(&g_tail_0088f170);
}