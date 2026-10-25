// from server: 100% by colin
// roc 2011-06 00a28010  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28010
//
// 00a28010  6a00                 push 0
// 00a28012  6a1f                 push 0x1f
// 00a28014  6898000000           push 0x98
// 00a28019  68e483a700           push 0xa783e4
// 00a2801e  68dc28aa00           push 0xaa28dc
// 00a28023  b900fccc00           mov ecx, 0xccfc00
// 00a28028  e8d3f0c6ff           call 0x697100
// 00a2802d  6840c0a300           push 0xa3c040
// 00a28032  e82631deff           call 0x80b15d
// 00a28037  59                   pop ecx
// 00a28038  c3                   ret 

extern int g_00a28010_0;
extern int g_00a28010_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28010(void*);
struct O_00a28010 { int m(void*, void*, int, int, int); };
extern O_00a28010 g_obj_00a28010;
extern int g_tail_00a28010;
void func_00a28010()
{
    g_obj_00a28010.m((void*)&g_00a28010_0, (void*)&g_00a28010_1, 152, 31, 0);
    tail_fn_00a28010(&g_tail_00a28010);
}