// from server: 100% by colin
// roc 2008-06 007f2ed0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2ed0
//
// 007f2ed0  6a04                 push 4
// 007f2ed2  6831010000           push 0x131
// 007f2ed7  68d0e78200           push 0x82e7d0
// 007f2edc  68d8e78200           push 0x82e7d8
// 007f2ee1  b914469700           mov ecx, 0x974614
// 007f2ee6  e84522d7ff           call 0x565130
// 007f2eeb  68b0cd7f00           push 0x7fcdb0
// 007f2ef0  e8bae8eaff           call 0x6a17af
// 007f2ef5  59                   pop ecx
// 007f2ef6  c3                   ret 

extern int g_007f2ed0_0;
extern int g_007f2ed0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f2ed0(void*);
struct O_007f2ed0 { int m(void*, void*, int, int); };
extern O_007f2ed0 g_obj_007f2ed0;
extern int g_tail_007f2ed0;
void func_007f2ed0()
{
    g_obj_007f2ed0.m((void*)&g_007f2ed0_0, (void*)&g_007f2ed0_1, 305, 4);
    tail_fn_007f2ed0(&g_tail_007f2ed0);
}