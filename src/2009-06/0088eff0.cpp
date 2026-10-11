// from server: 100% by colin
// roc 2009-06 0088eff0  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088eff0
//
// 0088eff0  6a07                 push 7
// 0088eff2  6850276800           push 0x682750
// 0088eff7  68d0256800           push 0x6825d0
// 0088effc  6898228e00           push 0x8e2298
// 0088f001  68e4228e00           push 0x8e22e4
// 0088f006  b97cd2a400           mov ecx, 0xa4d27c
// 0088f00b  e83041ddff           call 0x663140
// 0088f010  6810ae8900           push 0x89ae10
// 0088f015  e8e1aae8ff           call 0x719afb
// 0088f01a  59                   pop ecx
// 0088f01b  c3                   ret 

extern int g_0088eff0_0;
extern int g_0088eff0_1;
extern int g_0088eff0_2;
extern int g_0088eff0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088eff0(void*);
struct O_0088eff0 { int m(void*, void*, void*, void*, int); };
extern O_0088eff0 g_obj_0088eff0;
extern int g_tail_0088eff0;
void func_0088eff0()
{
    g_obj_0088eff0.m((void*)&g_0088eff0_0, (void*)&g_0088eff0_1, (void*)&g_0088eff0_2, (void*)&g_0088eff0_3, 7);
    tail_fn_0088eff0(&g_tail_0088eff0);
}