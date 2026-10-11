// from server: 100% by colin
// roc 2008-06 007f7d90  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7d90
//
// 007f7d90  6a05                 push 5
// 007f7d92  6844010000           push 0x144
// 007f7d97  6890248200           push 0x822490
// 007f7d9c  686c5b8400           push 0x845b6c
// 007f7da1  b9b4bf9700           mov ecx, 0x97bfb4
// 007f7da6  e86518e3ff           call 0x629610
// 007f7dab  6830038000           push 0x800330
// 007f7db0  e8fa99eaff           call 0x6a17af
// 007f7db5  59                   pop ecx
// 007f7db6  c3                   ret 

extern int g_007f7d90_0;
extern int g_007f7d90_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f7d90(void*);
struct O_007f7d90 { int m(void*, void*, int, int); };
extern O_007f7d90 g_obj_007f7d90;
extern int g_tail_007f7d90;
void func_007f7d90()
{
    g_obj_007f7d90.m((void*)&g_007f7d90_0, (void*)&g_007f7d90_1, 324, 5);
    tail_fn_007f7d90(&g_tail_007f7d90);
}