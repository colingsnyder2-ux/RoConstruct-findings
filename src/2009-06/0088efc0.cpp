// from server: 100% by colin
// roc 2009-06 0088efc0  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088efc0
//
// 0088efc0  6a07                 push 7
// 0088efc2  68e0266800           push 0x6826e0
// 0088efc7  6870256800           push 0x682570
// 0088efcc  6898228e00           push 0x8e2298
// 0088efd1  68d0228e00           push 0x8e22d0
// 0088efd6  b920d2a400           mov ecx, 0xa4d220
// 0088efdb  e8b04dddff           call 0x663d90
// 0088efe0  6830ae8900           push 0x89ae30
// 0088efe5  e811abe8ff           call 0x719afb
// 0088efea  59                   pop ecx
// 0088efeb  c3                   ret 

extern int g_0088efc0_0;
extern int g_0088efc0_1;
extern int g_0088efc0_2;
extern int g_0088efc0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088efc0(void*);
struct O_0088efc0 { int m(void*, void*, void*, void*, int); };
extern O_0088efc0 g_obj_0088efc0;
extern int g_tail_0088efc0;
void func_0088efc0()
{
    g_obj_0088efc0.m((void*)&g_0088efc0_0, (void*)&g_0088efc0_1, (void*)&g_0088efc0_2, (void*)&g_0088efc0_3, 7);
    tail_fn_0088efc0(&g_tail_0088efc0);
}