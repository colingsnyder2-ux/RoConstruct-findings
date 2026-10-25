// from server: 100% by colin
// roc 2011-06 00a24390  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24390
//
// 00a24390  6a00                 push 0
// 00a24392  6a1f                 push 0x1f
// 00a24394  68a8000000           push 0xa8
// 00a24399  683819a700           push 0xa71938
// 00a2439e  68d493a900           push 0xa993d4
// 00a243a3  b96ccfcc00           mov ecx, 0xcccf6c
// 00a243a8  e83356c2ff           call 0x6499e0
// 00a243ad  68f0a7a300           push 0xa3a7f0
// 00a243b2  e8a66ddeff           call 0x80b15d
// 00a243b7  59                   pop ecx
// 00a243b8  c3                   ret 

extern int g_00a24390_0;
extern int g_00a24390_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24390(void*);
struct O_00a24390 { int m(void*, void*, int, int, int); };
extern O_00a24390 g_obj_00a24390;
extern int g_tail_00a24390;
void func_00a24390()
{
    g_obj_00a24390.m((void*)&g_00a24390_0, (void*)&g_00a24390_1, 168, 31, 0);
    tail_fn_00a24390(&g_tail_00a24390);
}