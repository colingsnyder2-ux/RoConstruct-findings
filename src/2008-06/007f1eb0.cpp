// from server: 100% by colin
// roc 2008-06 007f1eb0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1eb0
//
// 007f1eb0  6a05                 push 5
// 007f1eb2  6840010000           push 0x140
// 007f1eb7  68a0438200           push 0x8243a0
// 007f1ebc  68e4438200           push 0x8243e4
// 007f1ec1  b9e4129700           mov ecx, 0x9712e4
// 007f1ec6  e86585cbff           call 0x4aa430
// 007f1ecb  6890bd7f00           push 0x7fbd90
// 007f1ed0  e8daf8eaff           call 0x6a17af
// 007f1ed5  59                   pop ecx
// 007f1ed6  c3                   ret 

extern int g_007f1eb0_0;
extern int g_007f1eb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1eb0(void*);
struct O_007f1eb0 { int m(void*, void*, int, int); };
extern O_007f1eb0 g_obj_007f1eb0;
extern int g_tail_007f1eb0;
void func_007f1eb0()
{
    g_obj_007f1eb0.m((void*)&g_007f1eb0_0, (void*)&g_007f1eb0_1, 320, 5);
    tail_fn_007f1eb0(&g_tail_007f1eb0);
}