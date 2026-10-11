// from server: 100% by colin
// roc 2008-06 007f2ea0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2ea0
//
// 007f2ea0  6a05                 push 5
// 007f2ea2  6830010000           push 0x130
// 007f2ea7  68d0e78200           push 0x82e7d0
// 007f2eac  68bce78200           push 0x82e7bc
// 007f2eb1  b96c459700           mov ecx, 0x97456c
// 007f2eb6  e87522d7ff           call 0x565130
// 007f2ebb  6810cf7f00           push 0x7fcf10
// 007f2ec0  e8eae8eaff           call 0x6a17af
// 007f2ec5  59                   pop ecx
// 007f2ec6  c3                   ret 

extern int g_007f2ea0_0;
extern int g_007f2ea0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f2ea0(void*);
struct O_007f2ea0 { int m(void*, void*, int, int); };
extern O_007f2ea0 g_obj_007f2ea0;
extern int g_tail_007f2ea0;
void func_007f2ea0()
{
    g_obj_007f2ea0.m((void*)&g_007f2ea0_0, (void*)&g_007f2ea0_1, 304, 5);
    tail_fn_007f2ea0(&g_tail_007f2ea0);
}