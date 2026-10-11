// from server: 100% by colin
// roc 2008-06 007f81c0  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f81c0
//
// 007f81c0  6a05                 push 5
// 007f81c2  6848010000           push 0x148
// 007f81c7  68b8818400           push 0x8481b8
// 007f81cc  6864828400           push 0x848264
// 007f81d1  b978c69700           mov ecx, 0x97c678
// 007f81d6  e81593e3ff           call 0x6314f0
// 007f81db  68d0058000           push 0x8005d0
// 007f81e0  e8ca95eaff           call 0x6a17af
// 007f81e5  59                   pop ecx
// 007f81e6  c3                   ret 

extern int g_007f81c0_0;
extern int g_007f81c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f81c0(void*);
struct O_007f81c0 { int m(void*, void*, int, int); };
extern O_007f81c0 g_obj_007f81c0;
extern int g_tail_007f81c0;
void func_007f81c0()
{
    g_obj_007f81c0.m((void*)&g_007f81c0_0, (void*)&g_007f81c0_1, 328, 5);
    tail_fn_007f81c0(&g_tail_007f81c0);
}