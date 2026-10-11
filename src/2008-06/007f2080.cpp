// from server: 100% by colin
// roc 2008-06 007f2080  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2080
//
// 007f2080  6a05                 push 5
// 007f2082  683c010000           push 0x13c
// 007f2087  684c448200           push 0x82444c
// 007f208c  6868448200           push 0x824468
// 007f2091  b964129700           mov ecx, 0x971264
// 007f2096  e86584cbff           call 0x4aa500
// 007f209b  6830be7f00           push 0x7fbe30
// 007f20a0  e80af7eaff           call 0x6a17af
// 007f20a5  59                   pop ecx
// 007f20a6  c3                   ret 

extern int g_007f2080_0;
extern int g_007f2080_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f2080(void*);
struct O_007f2080 { int m(void*, void*, int, int); };
extern O_007f2080 g_obj_007f2080;
extern int g_tail_007f2080;
void func_007f2080()
{
    g_obj_007f2080.m((void*)&g_007f2080_0, (void*)&g_007f2080_1, 316, 5);
    tail_fn_007f2080(&g_tail_007f2080);
}