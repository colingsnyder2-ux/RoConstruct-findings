// from server: 100% by colin
// roc 2008-06 007f82b0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f82b0
//
// 007f82b0  6a05                 push 5
// 007f82b2  684c010000           push 0x14c
// 007f82b7  68b8818400           push 0x8481b8
// 007f82bc  6890ad8000           push 0x80ad90
// 007f82c1  b990c79700           mov ecx, 0x97c790
// 007f82c6  e89588e3ff           call 0x630b60
// 007f82cb  6810068000           push 0x800610
// 007f82d0  e8da94eaff           call 0x6a17af
// 007f82d5  59                   pop ecx
// 007f82d6  c3                   ret 

extern int g_007f82b0_0;
extern int g_007f82b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f82b0(void*);
struct O_007f82b0 { int m(void*, void*, int, int); };
extern O_007f82b0 g_obj_007f82b0;
extern int g_tail_007f82b0;
void func_007f82b0()
{
    g_obj_007f82b0.m((void*)&g_007f82b0_0, (void*)&g_007f82b0_1, 332, 5);
    tail_fn_007f82b0(&g_tail_007f82b0);
}