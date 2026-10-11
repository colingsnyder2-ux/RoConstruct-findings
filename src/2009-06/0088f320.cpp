// from server: 100% by colin
// roc 2009-06 0088f320  unit: seg_00880000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f320
//
// 0088f320  6a07                 push 7
// 0088f322  68d0276800           push 0x6827d0
// 0088f327  6830266800           push 0x682630
// 0088f32c  6898228e00           push 0x8e2298
// 0088f331  68e0238e00           push 0x8e23e0
// 0088f336  b9dcd2a400           mov ecx, 0xa4d2dc
// 0088f33b  e8c040ddff           call 0x663400
// 0088f340  68f0af8900           push 0x89aff0
// 0088f345  e8b1a7e8ff           call 0x719afb
// 0088f34a  59                   pop ecx
// 0088f34b  c3                   ret 

extern int g_0088f320_0;
extern int g_0088f320_1;
extern int g_0088f320_2;
extern int g_0088f320_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088f320(void*);
struct O_0088f320 { int m(void*, void*, void*, void*, int); };
extern O_0088f320 g_obj_0088f320;
extern int g_tail_0088f320;
void func_0088f320()
{
    g_obj_0088f320.m((void*)&g_0088f320_0, (void*)&g_0088f320_1, (void*)&g_0088f320_2, (void*)&g_0088f320_3, 7);
    tail_fn_0088f320(&g_tail_0088f320);
}