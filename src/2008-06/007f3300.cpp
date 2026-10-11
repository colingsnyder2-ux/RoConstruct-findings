// from server: 100% by colin
// roc 2008-06 007f3300  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3300
//
// 007f3300  6a05                 push 5
// 007f3302  6839010000           push 0x139
// 007f3307  6890248200           push 0x822490
// 007f330c  683cec8200           push 0x82ec3c
// 007f3311  b9e8489700           mov ecx, 0x9748e8
// 007f3316  e81531d7ff           call 0x566430
// 007f331b  68d0cf7f00           push 0x7fcfd0
// 007f3320  e88ae4eaff           call 0x6a17af
// 007f3325  59                   pop ecx
// 007f3326  c3                   ret 

extern int g_007f3300_0;
extern int g_007f3300_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f3300(void*);
struct O_007f3300 { int m(void*, void*, int, int); };
extern O_007f3300 g_obj_007f3300;
extern int g_tail_007f3300;
void func_007f3300()
{
    g_obj_007f3300.m((void*)&g_007f3300_0, (void*)&g_007f3300_1, 313, 5);
    tail_fn_007f3300(&g_tail_007f3300);
}