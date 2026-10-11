// from server: 100% by colin
// roc 2008-06 007f20b0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f20b0
//
// 007f20b0  6a05                 push 5
// 007f20b2  684c010000           push 0x14c
// 007f20b7  684c448200           push 0x82444c
// 007f20bc  6888448200           push 0x824488
// 007f20c1  b92c129700           mov ecx, 0x97122c
// 007f20c6  e83584cbff           call 0x4aa500
// 007f20cb  6890be7f00           push 0x7fbe90
// 007f20d0  e8daf6eaff           call 0x6a17af
// 007f20d5  59                   pop ecx
// 007f20d6  c3                   ret 

extern int g_007f20b0_0;
extern int g_007f20b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f20b0(void*);
struct O_007f20b0 { int m(void*, void*, int, int); };
extern O_007f20b0 g_obj_007f20b0;
extern int g_tail_007f20b0;
void func_007f20b0()
{
    g_obj_007f20b0.m((void*)&g_007f20b0_0, (void*)&g_007f20b0_1, 332, 5);
    tail_fn_007f20b0(&g_tail_007f20b0);
}