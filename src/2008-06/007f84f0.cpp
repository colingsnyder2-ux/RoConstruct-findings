// from server: 100% by colin
// roc 2008-06 007f84f0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f84f0
//
// 007f84f0  6a05                 push 5
// 007f84f2  6858010000           push 0x158
// 007f84f7  68b8818400           push 0x8481b8
// 007f84fc  68bc828400           push 0x8482bc
// 007f8501  b9e8c69700           mov ecx, 0x97c6e8
// 007f8506  e8f595e3ff           call 0x631b00
// 007f850b  68f0068000           push 0x8006f0
// 007f8510  e89a92eaff           call 0x6a17af
// 007f8515  59                   pop ecx
// 007f8516  c3                   ret 

extern int g_007f84f0_0;
extern int g_007f84f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f84f0(void*);
struct O_007f84f0 { int m(void*, void*, int, int); };
extern O_007f84f0 g_obj_007f84f0;
extern int g_tail_007f84f0;
void func_007f84f0()
{
    g_obj_007f84f0.m((void*)&g_007f84f0_0, (void*)&g_007f84f0_1, 344, 5);
    tail_fn_007f84f0(&g_tail_007f84f0);
}