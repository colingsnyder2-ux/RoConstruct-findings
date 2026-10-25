// from server: 100% by colin
// roc 2011-06 00a27b60  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27b60
//
// 00a27b60  6a00                 push 0
// 00a27b62  689c84a700           push 0xa7849c
// 00a27b67  68f4a1a800           push 0xa8a1f4
// 00a27b6c  6894000000           push 0x94
// 00a27b71  b974fecc00           mov ecx, 0xccfe74
// 00a27b76  e89516c7ff           call 0x699210
// 00a27b7b  68a0c1a300           push 0xa3c1a0
// 00a27b80  e8d835deff           call 0x80b15d
// 00a27b85  59                   pop ecx
// 00a27b86  c3                   ret 

extern int g_00a27b60_1;
extern int g_00a27b60_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27b60(void*);
struct O_00a27b60 { int m(int, void*, void*, int); };
extern O_00a27b60 g_obj_00a27b60;
extern int g_tail_00a27b60;
void func_00a27b60()
{
    g_obj_00a27b60.m(148, (void*)&g_00a27b60_1, (void*)&g_00a27b60_2, 0);
    tail_fn_00a27b60(&g_tail_00a27b60);
}