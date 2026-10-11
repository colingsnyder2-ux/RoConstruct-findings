// from server: 100% by colin
// roc 2009-06 0088f140  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f140
//
// 0088f140  6a07                 push 7
// 0088f142  68e0266800           push 0x6826e0
// 0088f147  6870256800           push 0x682570
// 0088f14c  6898228e00           push 0x8e2298
// 0088f151  684c238e00           push 0x8e234c
// 0088f156  b998d2a400           mov ecx, 0xa4d298
// 0088f15b  e88051ddff           call 0x6642e0
// 0088f160  6830af8900           push 0x89af30
// 0088f165  e891a9e8ff           call 0x719afb
// 0088f16a  59                   pop ecx
// 0088f16b  c3                   ret 

extern int g_0088f140_0;
extern int g_0088f140_1;
extern int g_0088f140_2;
extern int g_0088f140_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f140(void*);
struct O_0088f140 { int m(void*, void*, void*, void*, int); };
extern O_0088f140 g_obj_0088f140;
extern int g_tail_0088f140;
void func_0088f140()
{
    g_obj_0088f140.m((void*)&g_0088f140_0, (void*)&g_0088f140_1, (void*)&g_0088f140_2, (void*)&g_0088f140_3, 7);
    tail_fn_0088f140(&g_tail_0088f140);
}