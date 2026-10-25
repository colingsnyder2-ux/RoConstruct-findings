// from server: 100% by colin
// roc 2011-06 00a19730  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19730
//
// 00a19730  6a00                 push 0
// 00a19732  6a1f                 push 0x1f
// 00a19734  6898000000           push 0x98
// 00a19739  6830a5a700           push 0xa7a530
// 00a1973e  6818a5a700           push 0xa7a518
// 00a19743  b94c7dcb00           mov ecx, 0xcb7d4c
// 00a19748  e8939eacff           call 0x4e35e0
// 00a1974d  68e036a300           push 0xa336e0
// 00a19752  e8061adfff           call 0x80b15d
// 00a19757  59                   pop ecx
// 00a19758  c3                   ret 

extern int g_00a19730_0;
extern int g_00a19730_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19730(void*);
struct O_00a19730 { int m(void*, void*, int, int, int); };
extern O_00a19730 g_obj_00a19730;
extern int g_tail_00a19730;
void func_00a19730()
{
    g_obj_00a19730.m((void*)&g_00a19730_0, (void*)&g_00a19730_1, 152, 31, 0);
    tail_fn_00a19730(&g_tail_00a19730);
}