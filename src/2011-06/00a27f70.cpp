// from server: 100% by colin
// roc 2011-06 00a27f70  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27f70
//
// 00a27f70  6a00                 push 0
// 00a27f72  6a1f                 push 0x1f
// 00a27f74  6898000000           push 0x98
// 00a27f79  68e483a700           push 0xa783e4
// 00a27f7e  68e828aa00           push 0xaa28e8
// 00a27f83  b9c0fbcc00           mov ecx, 0xccfbc0
// 00a27f88  e8f3efc6ff           call 0x696f80
// 00a27f8d  68c0bfa300           push 0xa3bfc0
// 00a27f92  e8c631deff           call 0x80b15d
// 00a27f97  59                   pop ecx
// 00a27f98  c3                   ret 

extern int g_00a27f70_0;
extern int g_00a27f70_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27f70(void*);
struct O_00a27f70 { int m(void*, void*, int, int, int); };
extern O_00a27f70 g_obj_00a27f70;
extern int g_tail_00a27f70;
void func_00a27f70()
{
    g_obj_00a27f70.m((void*)&g_00a27f70_0, (void*)&g_00a27f70_1, 152, 31, 0);
    tail_fn_00a27f70(&g_tail_00a27f70);
}