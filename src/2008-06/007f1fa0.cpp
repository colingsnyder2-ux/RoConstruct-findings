// from server: 100% by colin
// roc 2008-06 007f1fa0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1fa0
//
// 007f1fa0  6a05                 push 5
// 007f1fa2  6858010000           push 0x158
// 007f1fa7  6810448200           push 0x824410
// 007f1fac  681c448200           push 0x82441c
// 007f1fb1  b9a8139700           mov ecx, 0x9713a8
// 007f1fb6  e84585cbff           call 0x4aa500
// 007f1fbb  6830bf7f00           push 0x7fbf30
// 007f1fc0  e8eaf7eaff           call 0x6a17af
// 007f1fc5  59                   pop ecx
// 007f1fc6  c3                   ret 

extern int g_007f1fa0_0;
extern int g_007f1fa0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1fa0(void*);
struct O_007f1fa0 { int m(void*, void*, int, int); };
extern O_007f1fa0 g_obj_007f1fa0;
extern int g_tail_007f1fa0;
void func_007f1fa0()
{
    g_obj_007f1fa0.m((void*)&g_007f1fa0_0, (void*)&g_007f1fa0_1, 344, 5);
    tail_fn_007f1fa0(&g_tail_007f1fa0);
}