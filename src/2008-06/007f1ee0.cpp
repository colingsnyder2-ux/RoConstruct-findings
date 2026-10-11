// from server: 100% by colin
// roc 2008-06 007f1ee0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1ee0
//
// 007f1ee0  6a05                 push 5
// 007f1ee2  6841010000           push 0x141
// 007f1ee7  68a0438200           push 0x8243a0
// 007f1eec  68ec438200           push 0x8243ec
// 007f1ef1  b9e0139700           mov ecx, 0x9713e0
// 007f1ef6  e83585cbff           call 0x4aa430
// 007f1efb  68b0bd7f00           push 0x7fbdb0
// 007f1f00  e8aaf8eaff           call 0x6a17af
// 007f1f05  59                   pop ecx
// 007f1f06  c3                   ret 

extern int g_007f1ee0_0;
extern int g_007f1ee0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1ee0(void*);
struct O_007f1ee0 { int m(void*, void*, int, int); };
extern O_007f1ee0 g_obj_007f1ee0;
extern int g_tail_007f1ee0;
void func_007f1ee0()
{
    g_obj_007f1ee0.m((void*)&g_007f1ee0_0, (void*)&g_007f1ee0_1, 321, 5);
    tail_fn_007f1ee0(&g_tail_007f1ee0);
}