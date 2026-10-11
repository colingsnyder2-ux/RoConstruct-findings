// from server: 100% by colin
// roc 2008-06 007f1e80  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1e80
//
// 007f1e80  6a05                 push 5
// 007f1e82  6830010000           push 0x130
// 007f1e87  68a0438200           push 0x8243a0
// 007f1e8c  68d0438200           push 0x8243d0
// 007f1e91  b9c4139700           mov ecx, 0x9713c4
// 007f1e96  e89585cbff           call 0x4aa430
// 007f1e9b  6870bd7f00           push 0x7fbd70
// 007f1ea0  e80af9eaff           call 0x6a17af
// 007f1ea5  59                   pop ecx
// 007f1ea6  c3                   ret 

extern int g_007f1e80_0;
extern int g_007f1e80_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1e80(void*);
struct O_007f1e80 { int m(void*, void*, int, int); };
extern O_007f1e80 g_obj_007f1e80;
extern int g_tail_007f1e80;
void func_007f1e80()
{
    g_obj_007f1e80.m((void*)&g_007f1e80_0, (void*)&g_007f1e80_1, 304, 5);
    tail_fn_007f1e80(&g_tail_007f1e80);
}