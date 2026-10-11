// from server: 100% by colin
// roc 2008-06 007f80a0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f80a0
//
// 007f80a0  6a05                 push 5
// 007f80a2  687c010000           push 0x17c
// 007f80a7  6818828400           push 0x848218
// 007f80ac  6820828400           push 0x848220
// 007f80b1  b9acc79700           mov ecx, 0x97c7ac
// 007f80b6  e89592e3ff           call 0x631350
// 007f80bb  6850058000           push 0x800550
// 007f80c0  e8ea96eaff           call 0x6a17af
// 007f80c5  59                   pop ecx
// 007f80c6  c3                   ret 

extern int g_007f80a0_0;
extern int g_007f80a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f80a0(void*);
struct O_007f80a0 { int m(void*, void*, int, int); };
extern O_007f80a0 g_obj_007f80a0;
extern int g_tail_007f80a0;
void func_007f80a0()
{
    g_obj_007f80a0.m((void*)&g_007f80a0_0, (void*)&g_007f80a0_1, 380, 5);
    tail_fn_007f80a0(&g_tail_007f80a0);
}