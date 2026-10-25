// from server: 100% by colin
// roc 2011-06 00a27f10  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27f10
//
// 00a27f10  6a00                 push 0
// 00a27f12  689c84a700           push 0xa7849c
// 00a27f17  68f4a1a800           push 0xa8a1f4
// 00a27f1c  6894000000           push 0x94
// 00a27f21  b998fbcc00           mov ecx, 0xccfb98
// 00a27f26  e82518c7ff           call 0x699750
// 00a27f2b  6810c2a300           push 0xa3c210
// 00a27f30  e82832deff           call 0x80b15d
// 00a27f35  59                   pop ecx
// 00a27f36  c3                   ret 

extern int g_00a27f10_1;
extern int g_00a27f10_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27f10(void*);
struct O_00a27f10 { int m(int, void*, void*, int); };
extern O_00a27f10 g_obj_00a27f10;
extern int g_tail_00a27f10;
void func_00a27f10()
{
    g_obj_00a27f10.m(148, (void*)&g_00a27f10_1, (void*)&g_00a27f10_2, 0);
    tail_fn_00a27f10(&g_tail_00a27f10);
}