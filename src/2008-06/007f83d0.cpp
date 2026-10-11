// from server: 100% by colin
// roc 2008-06 007f83d0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f83d0
//
// 007f83d0  6a05                 push 5
// 007f83d2  684c010000           push 0x14c
// 007f83d7  68b8818400           push 0x8481b8
// 007f83dc  687c828400           push 0x84827c
// 007f83e1  b9b4c99700           mov ecx, 0x97c9b4
// 007f83e6  e8e589e3ff           call 0x630dd0
// 007f83eb  68b0068000           push 0x8006b0
// 007f83f0  e8ba93eaff           call 0x6a17af
// 007f83f5  59                   pop ecx
// 007f83f6  c3                   ret 

extern int g_007f83d0_0;
extern int g_007f83d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f83d0(void*);
struct O_007f83d0 { int m(void*, void*, int, int); };
extern O_007f83d0 g_obj_007f83d0;
extern int g_tail_007f83d0;
void func_007f83d0()
{
    g_obj_007f83d0.m((void*)&g_007f83d0_0, (void*)&g_007f83d0_1, 332, 5);
    tail_fn_007f83d0(&g_tail_007f83d0);
}