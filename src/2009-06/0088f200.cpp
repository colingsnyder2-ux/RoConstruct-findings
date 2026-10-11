// from server: 100% by colin
// roc 2009-06 0088f200  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f200
//
// 0088f200  6a07                 push 7
// 0088f202  68e0266800           push 0x6826e0
// 0088f207  6870256800           push 0x682570
// 0088f20c  6898228e00           push 0x8e2298
// 0088f211  6888238e00           push 0x8e2388
// 0088f216  b968d3a400           mov ecx, 0xa4d368
// 0088f21b  e85053ddff           call 0x664570
// 0088f220  68b0af8900           push 0x89afb0
// 0088f225  e8d1a8e8ff           call 0x719afb
// 0088f22a  59                   pop ecx
// 0088f22b  c3                   ret 

extern int g_0088f200_0;
extern int g_0088f200_1;
extern int g_0088f200_2;
extern int g_0088f200_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f200(void*);
struct O_0088f200 { int m(void*, void*, void*, void*, int); };
extern O_0088f200 g_obj_0088f200;
extern int g_tail_0088f200;
void func_0088f200()
{
    g_obj_0088f200.m((void*)&g_0088f200_0, (void*)&g_0088f200_1, (void*)&g_0088f200_2, (void*)&g_0088f200_3, 7);
    tail_fn_0088f200(&g_tail_0088f200);
}