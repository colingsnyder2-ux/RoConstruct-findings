// from server: 100% by colin
// roc 2011-06 00a27bd0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27bd0
//
// 00a27bd0  6a00                 push 0
// 00a27bd2  689c84a700           push 0xa7849c
// 00a27bd7  68f4a1a800           push 0xa8a1f4
// 00a27bdc  6898000000           push 0x98
// 00a27be1  b9c8fccc00           mov ecx, 0xccfcc8
// 00a27be6  e80517c7ff           call 0x6992f0
// 00a27beb  68b0c1a300           push 0xa3c1b0
// 00a27bf0  e86835deff           call 0x80b15d
// 00a27bf5  59                   pop ecx
// 00a27bf6  c3                   ret 

extern int g_00a27bd0_1;
extern int g_00a27bd0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27bd0(void*);
struct O_00a27bd0 { int m(int, void*, void*, int); };
extern O_00a27bd0 g_obj_00a27bd0;
extern int g_tail_00a27bd0;
void func_00a27bd0()
{
    g_obj_00a27bd0.m(152, (void*)&g_00a27bd0_1, (void*)&g_00a27bd0_2, 0);
    tail_fn_00a27bd0(&g_tail_00a27bd0);
}