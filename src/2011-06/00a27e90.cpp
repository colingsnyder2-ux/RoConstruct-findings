// from server: 100% by colin
// roc 2011-06 00a27e90  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27e90
//
// 00a27e90  6a00                 push 0
// 00a27e92  689c84a700           push 0xa7849c
// 00a27e97  68f4a1a800           push 0xa8a1f4
// 00a27e9c  689c000000           push 0x9c
// 00a27ea1  b9a0fccc00           mov ecx, 0xccfca0
// 00a27ea6  e8c517c7ff           call 0x699670
// 00a27eab  6800c2a300           push 0xa3c200
// 00a27eb0  e8a832deff           call 0x80b15d
// 00a27eb5  59                   pop ecx
// 00a27eb6  c3                   ret 

extern int g_00a27e90_1;
extern int g_00a27e90_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27e90(void*);
struct O_00a27e90 { int m(int, void*, void*, int); };
extern O_00a27e90 g_obj_00a27e90;
extern int g_tail_00a27e90;
void func_00a27e90()
{
    g_obj_00a27e90.m(156, (void*)&g_00a27e90_1, (void*)&g_00a27e90_2, 0);
    tail_fn_00a27e90(&g_tail_00a27e90);
}