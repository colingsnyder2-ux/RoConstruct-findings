// from server: 100% by colin
// roc 2008-06 007f2110  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2110
//
// 007f2110  6a05                 push 5
// 007f2112  6848010000           push 0x148
// 007f2117  684c448200           push 0x82444c
// 007f211c  68ac448200           push 0x8244ac
// 007f2121  b938139700           mov ecx, 0x971338
// 007f2126  e8d583cbff           call 0x4aa500
// 007f212b  68d0be7f00           push 0x7fbed0
// 007f2130  e87af6eaff           call 0x6a17af
// 007f2135  59                   pop ecx
// 007f2136  c3                   ret 

extern int g_007f2110_0;
extern int g_007f2110_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f2110(void*);
struct O_007f2110 { int m(void*, void*, int, int); };
extern O_007f2110 g_obj_007f2110;
extern int g_tail_007f2110;
void func_007f2110()
{
    g_obj_007f2110.m((void*)&g_007f2110_0, (void*)&g_007f2110_1, 328, 5);
    tail_fn_007f2110(&g_tail_007f2110);
}