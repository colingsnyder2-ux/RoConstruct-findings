// from server: 100% by colin
// roc 2008-06 007f1e20  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1e20
//
// 007f1e20  6a05                 push 5
// 007f1e22  6832010000           push 0x132
// 007f1e27  68a0438200           push 0x8243a0
// 007f1e2c  68ac438200           push 0x8243ac
// 007f1e31  b980129700           mov ecx, 0x971280
// 007f1e36  e8f585cbff           call 0x4aa430
// 007f1e3b  68f0be7f00           push 0x7fbef0
// 007f1e40  e86af9eaff           call 0x6a17af
// 007f1e45  59                   pop ecx
// 007f1e46  c3                   ret 

extern int g_007f1e20_0;
extern int g_007f1e20_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1e20(void*);
struct O_007f1e20 { int m(void*, void*, int, int); };
extern O_007f1e20 g_obj_007f1e20;
extern int g_tail_007f1e20;
void func_007f1e20()
{
    g_obj_007f1e20.m((void*)&g_007f1e20_0, (void*)&g_007f1e20_1, 306, 5);
    tail_fn_007f1e20(&g_tail_007f1e20);
}