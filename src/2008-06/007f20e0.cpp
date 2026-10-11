// from server: 100% by colin
// roc 2008-06 007f20e0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f20e0
//
// 007f20e0  6a05                 push 5
// 007f20e2  6844010000           push 0x144
// 007f20e7  684c448200           push 0x82444c
// 007f20ec  6898448200           push 0x824498
// 007f20f1  b970139700           mov ecx, 0x971370
// 007f20f6  e80584cbff           call 0x4aa500
// 007f20fb  68b0be7f00           push 0x7fbeb0
// 007f2100  e8aaf6eaff           call 0x6a17af
// 007f2105  59                   pop ecx
// 007f2106  c3                   ret 

extern int g_007f20e0_0;
extern int g_007f20e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f20e0(void*);
struct O_007f20e0 { int m(void*, void*, int, int); };
extern O_007f20e0 g_obj_007f20e0;
extern int g_tail_007f20e0;
void func_007f20e0()
{
    g_obj_007f20e0.m((void*)&g_007f20e0_0, (void*)&g_007f20e0_1, 324, 5);
    tail_fn_007f20e0(&g_tail_007f20e0);
}