// from server: 100% by colin
// roc 2008-06 007f83a0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f83a0
//
// 007f83a0  6a05                 push 5
// 007f83a2  6848010000           push 0x148
// 007f83a7  68b8818400           push 0x8481b8
// 007f83ac  6864828400           push 0x848264
// 007f83b1  b9e4c79700           mov ecx, 0x97c7e4
// 007f83b6  e84589e3ff           call 0x630d00
// 007f83bb  68d0068000           push 0x8006d0
// 007f83c0  e8ea93eaff           call 0x6a17af
// 007f83c5  59                   pop ecx
// 007f83c6  c3                   ret 

extern int g_007f83a0_0;
extern int g_007f83a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f83a0(void*);
struct O_007f83a0 { int m(void*, void*, int, int); };
extern O_007f83a0 g_obj_007f83a0;
extern int g_tail_007f83a0;
void func_007f83a0()
{
    g_obj_007f83a0.m((void*)&g_007f83a0_0, (void*)&g_007f83a0_1, 328, 5);
    tail_fn_007f83a0(&g_tail_007f83a0);
}