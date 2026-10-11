// from server: 100% by colin
// roc 2008-06 007f7e30  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7e30
//
// 007f7e30  6a05                 push 5
// 007f7e32  6848010000           push 0x148
// 007f7e37  6890248200           push 0x822490
// 007f7e3c  681c318300           push 0x83311c
// 007f7e41  b9f0bf9700           mov ecx, 0x97bff0
// 007f7e46  e8b52be3ff           call 0x62aa00
// 007f7e4b  68b0038000           push 0x8003b0
// 007f7e50  e85a99eaff           call 0x6a17af
// 007f7e55  59                   pop ecx
// 007f7e56  c3                   ret 

extern int g_007f7e30_0;
extern int g_007f7e30_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f7e30(void*);
struct O_007f7e30 { int m(void*, void*, int, int); };
extern O_007f7e30 g_obj_007f7e30;
extern int g_tail_007f7e30;
void func_007f7e30()
{
    g_obj_007f7e30.m((void*)&g_007f7e30_0, (void*)&g_007f7e30_1, 328, 5);
    tail_fn_007f7e30(&g_tail_007f7e30);
}