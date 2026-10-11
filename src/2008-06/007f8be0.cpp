// from server: 100% by colin
// roc 2008-06 007f8be0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8be0
//
// 007f8be0  6a05                 push 5
// 007f8be2  6844010000           push 0x144
// 007f8be7  6890248200           push 0x822490
// 007f8bec  68601e8400           push 0x841e60
// 007f8bf1  b98cd59700           mov ecx, 0x97d58c
// 007f8bf6  e8e54ce4ff           call 0x63d8e0
// 007f8bfb  6890108000           push 0x801090
// 007f8c00  e8aa8beaff           call 0x6a17af
// 007f8c05  59                   pop ecx
// 007f8c06  c3                   ret 

extern int g_007f8be0_0;
extern int g_007f8be0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8be0(void*);
struct O_007f8be0 { int m(void*, void*, int, int); };
extern O_007f8be0 g_obj_007f8be0;
extern int g_tail_007f8be0;
void func_007f8be0()
{
    g_obj_007f8be0.m((void*)&g_007f8be0_0, (void*)&g_007f8be0_1, 324, 5);
    tail_fn_007f8be0(&g_tail_007f8be0);
}