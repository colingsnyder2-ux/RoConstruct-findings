// from server: 100% by colin
// roc 2008-06 007f8040  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8040
//
// 007f8040  6a05                 push 5
// 007f8042  6870010000           push 0x170
// 007f8047  68ec818400           push 0x8481ec
// 007f804c  6808828400           push 0x848208
// 007f8051  b928c99700           mov ecx, 0x97c928
// 007f8056  e8f592e3ff           call 0x631350
// 007f805b  6810058000           push 0x800510
// 007f8060  e84a97eaff           call 0x6a17af
// 007f8065  59                   pop ecx
// 007f8066  c3                   ret 

extern int g_007f8040_0;
extern int g_007f8040_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8040(void*);
struct O_007f8040 { int m(void*, void*, int, int); };
extern O_007f8040 g_obj_007f8040;
extern int g_tail_007f8040;
void func_007f8040()
{
    g_obj_007f8040.m((void*)&g_007f8040_0, (void*)&g_007f8040_1, 368, 5);
    tail_fn_007f8040(&g_tail_007f8040);
}