// from server: 100% by colin
// roc 2008-06 007f8280  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8280
//
// 007f8280  6a05                 push 5
// 007f8282  6848010000           push 0x148
// 007f8287  68b8818400           push 0x8481b8
// 007f828c  6864828400           push 0x848264
// 007f8291  b9b0c69700           mov ecx, 0x97c6b0
// 007f8296  e8c588e3ff           call 0x630b60
// 007f829b  6830068000           push 0x800630
// 007f82a0  e80a95eaff           call 0x6a17af
// 007f82a5  59                   pop ecx
// 007f82a6  c3                   ret 

extern int g_007f8280_0;
extern int g_007f8280_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8280(void*);
struct O_007f8280 { int m(void*, void*, int, int); };
extern O_007f8280 g_obj_007f8280;
extern int g_tail_007f8280;
void func_007f8280()
{
    g_obj_007f8280.m((void*)&g_007f8280_0, (void*)&g_007f8280_1, 328, 5);
    tail_fn_007f8280(&g_tail_007f8280);
}