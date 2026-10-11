// from server: 100% by colin
// roc 2008-06 007f8310  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8310
//
// 007f8310  6a05                 push 5
// 007f8312  685c010000           push 0x15c
// 007f8317  68b8818400           push 0x8481b8
// 007f831c  6888828400           push 0x848288
// 007f8321  b904c79700           mov ecx, 0x97c704
// 007f8326  e80589e3ff           call 0x630c30
// 007f832b  6850068000           push 0x800650
// 007f8330  e87a94eaff           call 0x6a17af
// 007f8335  59                   pop ecx
// 007f8336  c3                   ret 

extern int g_007f8310_0;
extern int g_007f8310_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8310(void*);
struct O_007f8310 { int m(void*, void*, int, int); };
extern O_007f8310 g_obj_007f8310;
extern int g_tail_007f8310;
void func_007f8310()
{
    g_obj_007f8310.m((void*)&g_007f8310_0, (void*)&g_007f8310_1, 348, 5);
    tail_fn_007f8310(&g_tail_007f8310);
}