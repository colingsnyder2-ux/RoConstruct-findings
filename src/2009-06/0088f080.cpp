// from server: 100% by colin
// roc 2009-06 0088f080  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f080
//
// 0088f080  6a07                 push 7
// 0088f082  68e0266800           push 0x6826e0
// 0088f087  6870256800           push 0x682570
// 0088f08c  6898228e00           push 0x8e2298
// 0088f091  6810238e00           push 0x8e2310
// 0088f096  b988d3a400           mov ecx, 0xa4d388
// 0088f09b  e8a04fddff           call 0x664040
// 0088f0a0  68b0ae8900           push 0x89aeb0
// 0088f0a5  e851aae8ff           call 0x719afb
// 0088f0aa  59                   pop ecx
// 0088f0ab  c3                   ret 

extern int g_0088f080_0;
extern int g_0088f080_1;
extern int g_0088f080_2;
extern int g_0088f080_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f080(void*);
struct O_0088f080 { int m(void*, void*, void*, void*, int); };
extern O_0088f080 g_obj_0088f080;
extern int g_tail_0088f080;
void func_0088f080()
{
    g_obj_0088f080.m((void*)&g_0088f080_0, (void*)&g_0088f080_1, (void*)&g_0088f080_2, (void*)&g_0088f080_3, 7);
    tail_fn_0088f080(&g_tail_0088f080);
}