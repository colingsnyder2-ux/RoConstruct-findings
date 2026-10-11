// from server: 100% by colin
// roc 2008-06 007f11b0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f11b0
//
// 007f11b0  6a04                 push 4
// 007f11b2  68c4010000           push 0x1c4
// 007f11b7  68e0248200           push 0x8224e0
// 007f11bc  680c258200           push 0x82250c
// 007f11c1  b9acfe9600           mov ecx, 0x96feac
// 007f11c6  e85509caff           call 0x491b20
// 007f11cb  6860b17f00           push 0x7fb160
// 007f11d0  e8da05ebff           call 0x6a17af
// 007f11d5  59                   pop ecx
// 007f11d6  c3                   ret 

extern int g_007f11b0_0;
extern int g_007f11b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f11b0(void*);
struct O_007f11b0 { int m(void*, void*, int, int); };
extern O_007f11b0 g_obj_007f11b0;
extern int g_tail_007f11b0;
void func_007f11b0()
{
    g_obj_007f11b0.m((void*)&g_007f11b0_0, (void*)&g_007f11b0_1, 452, 4);
    tail_fn_007f11b0(&g_tail_007f11b0);
}