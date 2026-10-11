// from server: 100% by colin
// roc 2009-06 0088eed0  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088eed0
//
// 0088eed0  6a07                 push 7
// 0088eed2  6890266800           push 0x682690
// 0088eed7  6850256800           push 0x682550
// 0088eedc  68f01b8e00           push 0x8e1bf0
// 0088eee1  687c228e00           push 0x8e227c
// 0088eee6  b95cd2a400           mov ecx, 0xa4d25c
// 0088eeeb  e80048ddff           call 0x6636f0
// 0088eef0  68d0ad8900           push 0x89add0
// 0088eef5  e801ace8ff           call 0x719afb
// 0088eefa  59                   pop ecx
// 0088eefb  c3                   ret 

extern int g_0088eed0_0;
extern int g_0088eed0_1;
extern int g_0088eed0_2;
extern int g_0088eed0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088eed0(void*);
struct O_0088eed0 { int m(void*, void*, void*, void*, int); };
extern O_0088eed0 g_obj_0088eed0;
extern int g_tail_0088eed0;
void func_0088eed0()
{
    g_obj_0088eed0.m((void*)&g_0088eed0_0, (void*)&g_0088eed0_1, (void*)&g_0088eed0_2, (void*)&g_0088eed0_3, 7);
    tail_fn_0088eed0(&g_tail_0088eed0);
}