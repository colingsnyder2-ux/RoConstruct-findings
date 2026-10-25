// from server: 100% by colin
// roc 2011-06 00a17c90  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17c90
//
// 00a17c90  6a00                 push 0
// 00a17c92  6a02                 push 2
// 00a17c94  68d4000000           push 0xd4
// 00a17c99  68e483a700           push 0xa783e4
// 00a17c9e  683886a700           push 0xa78638
// 00a17ca3  b92062cb00           mov ecx, 0xcb6220
// 00a17ca8  e8c361a9ff           call 0x4ade70
// 00a17cad  688024a300           push 0xa32480
// 00a17cb2  e8a634dfff           call 0x80b15d
// 00a17cb7  59                   pop ecx
// 00a17cb8  c3                   ret 

extern int g_00a17c90_0;
extern int g_00a17c90_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a17c90(void*);
struct O_00a17c90 { int m(void*, void*, int, int, int); };
extern O_00a17c90 g_obj_00a17c90;
extern int g_tail_00a17c90;
void func_00a17c90()
{
    g_obj_00a17c90.m((void*)&g_00a17c90_0, (void*)&g_00a17c90_1, 212, 2, 0);
    tail_fn_00a17c90(&g_tail_00a17c90);
}