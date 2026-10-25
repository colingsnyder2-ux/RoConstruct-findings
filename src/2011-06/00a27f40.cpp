// from server: 100% by colin
// roc 2011-06 00a27f40  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27f40
//
// 00a27f40  6a00                 push 0
// 00a27f42  6a1f                 push 0x1f
// 00a27f44  6894000000           push 0x94
// 00a27f49  68e483a700           push 0xa783e4
// 00a27f4e  68dc28aa00           push 0xaa28dc
// 00a27f53  b9f0fccc00           mov ecx, 0xccfcf0
// 00a27f58  e823f0c6ff           call 0x696f80
// 00a27f5d  68e0bfa300           push 0xa3bfe0
// 00a27f62  e8f631deff           call 0x80b15d
// 00a27f67  59                   pop ecx
// 00a27f68  c3                   ret 

extern int g_00a27f40_0;
extern int g_00a27f40_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27f40(void*);
struct O_00a27f40 { int m(void*, void*, int, int, int); };
extern O_00a27f40 g_obj_00a27f40;
extern int g_tail_00a27f40;
void func_00a27f40()
{
    g_obj_00a27f40.m((void*)&g_00a27f40_0, (void*)&g_00a27f40_1, 148, 31, 0);
    tail_fn_00a27f40(&g_tail_00a27f40);
}