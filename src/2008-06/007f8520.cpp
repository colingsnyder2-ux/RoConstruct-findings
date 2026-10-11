// from server: 100% by colin
// roc 2008-06 007f8520  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8520
//
// 007f8520  6a05                 push 5
// 007f8522  6848010000           push 0x148
// 007f8527  68b8818400           push 0x8481b8
// 007f852c  68cc828400           push 0x8482cc
// 007f8531  b920c79700           mov ecx, 0x97c720
// 007f8536  e87597e3ff           call 0x631cb0
// 007f853b  6850078000           push 0x800750
// 007f8540  e86a92eaff           call 0x6a17af
// 007f8545  59                   pop ecx
// 007f8546  c3                   ret 

extern int g_007f8520_0;
extern int g_007f8520_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8520(void*);
struct O_007f8520 { int m(void*, void*, int, int); };
extern O_007f8520 g_obj_007f8520;
extern int g_tail_007f8520;
void func_007f8520()
{
    g_obj_007f8520.m((void*)&g_007f8520_0, (void*)&g_007f8520_1, 328, 5);
    tail_fn_007f8520(&g_tail_007f8520);
}