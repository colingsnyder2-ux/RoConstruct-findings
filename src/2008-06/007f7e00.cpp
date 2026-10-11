// from server: 100% by colin
// roc 2008-06 007f7e00  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7e00
//
// 007f7e00  6a05                 push 5
// 007f7e02  6858010000           push 0x158
// 007f7e07  6890248200           push 0x822490
// 007f7e0c  68f05e8400           push 0x845ef0
// 007f7e11  b90cc09700           mov ecx, 0x97c00c
// 007f7e16  e8152be3ff           call 0x62a930
// 007f7e1b  68d0038000           push 0x8003d0
// 007f7e20  e88a99eaff           call 0x6a17af
// 007f7e25  59                   pop ecx
// 007f7e26  c3                   ret 

extern int g_007f7e00_0;
extern int g_007f7e00_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f7e00(void*);
struct O_007f7e00 { int m(void*, void*, int, int); };
extern O_007f7e00 g_obj_007f7e00;
extern int g_tail_007f7e00;
void func_007f7e00()
{
    g_obj_007f7e00.m((void*)&g_007f7e00_0, (void*)&g_007f7e00_1, 344, 5);
    tail_fn_007f7e00(&g_tail_007f7e00);
}