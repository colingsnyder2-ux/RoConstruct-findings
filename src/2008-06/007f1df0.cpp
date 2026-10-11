// from server: 100% by colin
// roc 2008-06 007f1df0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1df0
//
// 007f1df0  6a05                 push 5
// 007f1df2  6831010000           push 0x131
// 007f1df7  68a0438200           push 0x8243a0
// 007f1dfc  6890438200           push 0x824390
// 007f1e01  b98c139700           mov ecx, 0x97138c
// 007f1e06  e82586cbff           call 0x4aa430
// 007f1e0b  6810bf7f00           push 0x7fbf10
// 007f1e10  e89af9eaff           call 0x6a17af
// 007f1e15  59                   pop ecx
// 007f1e16  c3                   ret 

extern int g_007f1df0_0;
extern int g_007f1df0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1df0(void*);
struct O_007f1df0 { int m(void*, void*, int, int); };
extern O_007f1df0 g_obj_007f1df0;
extern int g_tail_007f1df0;
void func_007f1df0()
{
    g_obj_007f1df0.m((void*)&g_007f1df0_0, (void*)&g_007f1df0_1, 305, 5);
    tail_fn_007f1df0(&g_tail_007f1df0);
}