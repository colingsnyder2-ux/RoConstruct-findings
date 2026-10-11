// from server: 100% by colin
// roc 2008-06 007f82e0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f82e0
//
// 007f82e0  6a05                 push 5
// 007f82e2  6850010000           push 0x150
// 007f82e7  68b8818400           push 0x8481b8
// 007f82ec  687c828400           push 0x84827c
// 007f82f1  b9ccca9700           mov ecx, 0x97cacc
// 007f82f6  e83589e3ff           call 0x630c30
// 007f82fb  6870068000           push 0x800670
// 007f8300  e8aa94eaff           call 0x6a17af
// 007f8305  59                   pop ecx
// 007f8306  c3                   ret 

extern int g_007f82e0_0;
extern int g_007f82e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f82e0(void*);
struct O_007f82e0 { int m(void*, void*, int, int); };
extern O_007f82e0 g_obj_007f82e0;
extern int g_tail_007f82e0;
void func_007f82e0()
{
    g_obj_007f82e0.m((void*)&g_007f82e0_0, (void*)&g_007f82e0_1, 336, 5);
    tail_fn_007f82e0(&g_tail_007f82e0);
}