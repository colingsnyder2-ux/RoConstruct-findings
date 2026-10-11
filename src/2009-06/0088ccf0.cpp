// from server: 100% by colin
// roc 2009-06 0088ccf0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088ccf0
//
// 0088ccf0  6a07                 push 7
// 0088ccf2  68d4000000           push 0xd4
// 0088ccf7  68d0508d00           push 0x8d50d0
// 0088ccfc  680c478d00           push 0x8d470c
// 0088cd01  b9c8b2a400           mov ecx, 0xa4b2c8
// 0088cd06  e845a0d8ff           call 0x616d50
// 0088cd0b  68509a8900           push 0x899a50
// 0088cd10  e8e6cde8ff           call 0x719afb
// 0088cd15  59                   pop ecx
// 0088cd16  c3                   ret 

extern int g_0088ccf0_0;
extern int g_0088ccf0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088ccf0(void*);
struct O_0088ccf0 { int m(void*, void*, int, int); };
extern O_0088ccf0 g_obj_0088ccf0;
extern int g_tail_0088ccf0;
void func_0088ccf0()
{
    g_obj_0088ccf0.m((void*)&g_0088ccf0_0, (void*)&g_0088ccf0_1, 212, 7);
    tail_fn_0088ccf0(&g_tail_0088ccf0);
}