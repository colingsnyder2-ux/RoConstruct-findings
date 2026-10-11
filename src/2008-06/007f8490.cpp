// from server: 100% by colin
// roc 2008-06 007f8490  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8490
//
// 007f8490  6a05                 push 5
// 007f8492  6848010000           push 0x148
// 007f8497  68b8818400           push 0x8481b8
// 007f849c  6864828400           push 0x848264
// 007f84a1  b960c99700           mov ecx, 0x97c960
// 007f84a6  e88595e3ff           call 0x631a30
// 007f84ab  6830078000           push 0x800730
// 007f84b0  e8fa92eaff           call 0x6a17af
// 007f84b5  59                   pop ecx
// 007f84b6  c3                   ret 

extern int g_007f8490_0;
extern int g_007f8490_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8490(void*);
struct O_007f8490 { int m(void*, void*, int, int); };
extern O_007f8490 g_obj_007f8490;
extern int g_tail_007f8490;
void func_007f8490()
{
    g_obj_007f8490.m((void*)&g_007f8490_0, (void*)&g_007f8490_1, 328, 5);
    tail_fn_007f8490(&g_tail_007f8490);
}