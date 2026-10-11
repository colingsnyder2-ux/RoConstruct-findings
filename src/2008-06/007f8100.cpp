// from server: 100% by colin
// roc 2008-06 007f8100  unit: seg_007f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8100
//
// 007f8100  6a05                 push 5
// 007f8102  688c010000           push 0x18c
// 007f8107  68b8818400           push 0x8481b8
// 007f810c  6834828400           push 0x848234
// 007f8111  b994c69700           mov ecx, 0x97c694
// 007f8116  e83592e3ff           call 0x631350
// 007f811b  6870058000           push 0x800570
// 007f8120  e88a96eaff           call 0x6a17af
// 007f8125  59                   pop ecx
// 007f8126  c3                   ret 

extern int g_007f8100_0;
extern int g_007f8100_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_007f8100(void*);
struct O_007f8100 { int m(void*, void*, int, int); };
extern O_007f8100 g_obj_007f8100;
extern int g_tail_007f8100;
void func_007f8100()
{
    g_obj_007f8100.m((void*)&g_007f8100_0, (void*)&g_007f8100_1, 396, 5);
    tail_fn_007f8100(&g_tail_007f8100);
}