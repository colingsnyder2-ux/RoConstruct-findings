// from server: 100% by colin
// roc 2008-06 007f8400  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8400
//
// 007f8400  6a05                 push 5
// 007f8402  6858010000           push 0x158
// 007f8407  68b8818400           push 0x8481b8
// 007f840c  68b0828400           push 0x8482b0
// 007f8411  b97cc99700           mov ecx, 0x97c97c
// 007f8416  e8b589e3ff           call 0x630dd0
// 007f841b  6890068000           push 0x800690
// 007f8420  e88a93eaff           call 0x6a17af
// 007f8425  59                   pop ecx
// 007f8426  c3                   ret 

extern int g_007f8400_0;
extern int g_007f8400_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8400(void*);
struct O_007f8400 { int m(void*, void*, int, int); };
extern O_007f8400 g_obj_007f8400;
extern int g_tail_007f8400;
void func_007f8400()
{
    g_obj_007f8400.m((void*)&g_007f8400_0, (void*)&g_007f8400_1, 344, 5);
    tail_fn_007f8400(&g_tail_007f8400);
}