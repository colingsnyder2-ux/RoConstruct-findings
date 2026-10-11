// from server: 100% by colin
// roc 2008-06 007f1f70  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1f70
//
// 007f1f70  6a05                 push 5
// 007f1f72  6854010000           push 0x154
// 007f1f77  6810448200           push 0x824410
// 007f1f7c  6804448200           push 0x824404
// 007f1f81  b910129700           mov ecx, 0x971210
// 007f1f86  e87585cbff           call 0x4aa500
// 007f1f8b  6850bf7f00           push 0x7fbf50
// 007f1f90  e81af8eaff           call 0x6a17af
// 007f1f95  59                   pop ecx
// 007f1f96  c3                   ret 

extern int g_007f1f70_0;
extern int g_007f1f70_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f1f70(void*);
struct O_007f1f70 { int m(void*, void*, int, int); };
extern O_007f1f70 g_obj_007f1f70;
extern int g_tail_007f1f70;
void func_007f1f70()
{
    g_obj_007f1f70.m((void*)&g_007f1f70_0, (void*)&g_007f1f70_1, 340, 5);
    tail_fn_007f1f70(&g_tail_007f1f70);
}