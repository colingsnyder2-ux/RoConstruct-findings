// from server: 100% by colin
// roc 2009-06 0088f290  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f290
//
// 0088f290  6a07                 push 7
// 0088f292  6890266800           push 0x682690
// 0088f297  6850256800           push 0x682550
// 0088f29c  68f01b8e00           push 0x8e1bf0
// 0088f2a1  68b4238e00           push 0x8e23b4
// 0088f2a6  b93cd0a400           mov ecx, 0xa4d03c
// 0088f2ab  e8b054ddff           call 0x664760
// 0088f2b0  6850b08900           push 0x89b050
// 0088f2b5  e841a8e8ff           call 0x719afb
// 0088f2ba  59                   pop ecx
// 0088f2bb  c3                   ret 

extern int g_0088f290_0;
extern int g_0088f290_1;
extern int g_0088f290_2;
extern int g_0088f290_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f290(void*);
struct O_0088f290 { int m(void*, void*, void*, void*, int); };
extern O_0088f290 g_obj_0088f290;
extern int g_tail_0088f290;
void func_0088f290()
{
    g_obj_0088f290.m((void*)&g_0088f290_0, (void*)&g_0088f290_1, (void*)&g_0088f290_2, (void*)&g_0088f290_3, 7);
    tail_fn_0088f290(&g_tail_0088f290);
}