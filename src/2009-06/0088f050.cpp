// from server: 100% by colin
// roc 2009-06 0088f050  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f050
//
// 0088f050  6a07                 push 7
// 0088f052  6890266800           push 0x682690
// 0088f057  6850256800           push 0x682550
// 0088f05c  68f01b8e00           push 0x8e1bf0
// 0088f061  6804238e00           push 0x8e2304
// 0088f066  b974d1a400           mov ecx, 0xa4d174
// 0088f06b  e8504eddff           call 0x663ec0
// 0088f070  68d0ae8900           push 0x89aed0
// 0088f075  e881aae8ff           call 0x719afb
// 0088f07a  59                   pop ecx
// 0088f07b  c3                   ret 

extern int g_0088f050_0;
extern int g_0088f050_1;
extern int g_0088f050_2;
extern int g_0088f050_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f050(void*);
struct O_0088f050 { int m(void*, void*, void*, void*, int); };
extern O_0088f050 g_obj_0088f050;
extern int g_tail_0088f050;
void func_0088f050()
{
    g_obj_0088f050.m((void*)&g_0088f050_0, (void*)&g_0088f050_1, (void*)&g_0088f050_2, (void*)&g_0088f050_3, 7);
    tail_fn_0088f050(&g_tail_0088f050);
}