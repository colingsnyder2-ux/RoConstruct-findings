// from server: 100% by colin
// roc 2008-06 007f80d0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f80d0
//
// 007f80d0  6a05                 push 5
// 007f80d2  6880010000           push 0x180
// 007f80d7  6818828400           push 0x848218
// 007f80dc  6828828400           push 0x848228
// 007f80e1  b950c89700           mov ecx, 0x97c850
// 007f80e6  e83593e3ff           call 0x631420
// 007f80eb  6890058000           push 0x800590
// 007f80f0  e8ba96eaff           call 0x6a17af
// 007f80f5  59                   pop ecx
// 007f80f6  c3                   ret 

extern int g_007f80d0_0;
extern int g_007f80d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f80d0(void*);
struct O_007f80d0 { int m(void*, void*, int, int); };
extern O_007f80d0 g_obj_007f80d0;
extern int g_tail_007f80d0;
void func_007f80d0()
{
    g_obj_007f80d0.m((void*)&g_007f80d0_0, (void*)&g_007f80d0_1, 384, 5);
    tail_fn_007f80d0(&g_tail_007f80d0);
}