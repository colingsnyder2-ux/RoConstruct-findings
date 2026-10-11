// from server: 100% by colin
// roc 2008-06 007f1f10  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1f10
//
// 007f1f10  6a05                 push 5
// 007f1f12  6842010000           push 0x142
// 007f1f17  68a0438200           push 0x8243a0
// 007f1f1c  68f4438200           push 0x8243f4
// 007f1f21  b9fc139700           mov ecx, 0x9713fc
// 007f1f26  e80585cbff           call 0x4aa430
// 007f1f2b  68d0bd7f00           push 0x7fbdd0
// 007f1f30  e87af8eaff           call 0x6a17af
// 007f1f35  59                   pop ecx
// 007f1f36  c3                   ret 

extern int g_007f1f10_0;
extern int g_007f1f10_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1f10(void*);
struct O_007f1f10 { int m(void*, void*, int, int); };
extern O_007f1f10 g_obj_007f1f10;
extern int g_tail_007f1f10;
void func_007f1f10()
{
    g_obj_007f1f10.m((void*)&g_007f1f10_0, (void*)&g_007f1f10_1, 322, 5);
    tail_fn_007f1f10(&g_tail_007f1f10);
}