// from server: 100% by colin
// roc 2009-06 008883d0  unit: seg_00880000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008883d0
//
// 008883d0  68047e8c00           push 0x8c7e04
// 008883d5  6894598c00           push 0x8c5994
// 008883da  68f47d8c00           push 0x8c7df4
// 008883df  68002f0000           push 0x2f00
// 008883e4  b970f4a300           mov ecx, 0xa3f470
// 008883e9  e85238c6ff           call 0x4ebc40
// 008883ee  68b0628900           push 0x8962b0
// 008883f3  e80317e9ff           call 0x719afb
// 008883f8  59                   pop ecx
// 008883f9  c3                   ret 

extern int g_008883d0_1;
extern int g_008883d0_2;
extern int g_008883d0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_008883d0(void*);
struct O_008883d0 { int m(int, void*, void*, void*); };
extern O_008883d0 g_obj_008883d0;
extern int g_tail_008883d0;
void func_008883d0()
{
    g_obj_008883d0.m(12032, (void*)&g_008883d0_1, (void*)&g_008883d0_2, (void*)&g_008883d0_3);
    tail_fn_008883d0(&g_tail_008883d0);
}