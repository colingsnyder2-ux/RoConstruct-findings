// from server: 100% by colin
// roc 2011-06 00a24d40  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24d40
//
// 00a24d40  6a00                 push 0
// 00a24d42  6a1f                 push 0x1f
// 00a24d44  68b0000000           push 0xb0
// 00a24d49  68e483a700           push 0xa783e4
// 00a24d4e  6848b9a900           push 0xa9b948
// 00a24d53  b9a4dacc00           mov ecx, 0xccdaa4
// 00a24d58  e863a8c3ff           call 0x65f5c0
// 00a24d5d  6890ada300           push 0xa3ad90
// 00a24d62  e8f663deff           call 0x80b15d
// 00a24d67  59                   pop ecx
// 00a24d68  c3                   ret 

extern int g_00a24d40_0;
extern int g_00a24d40_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24d40(void*);
struct O_00a24d40 { int m(void*, void*, int, int, int); };
extern O_00a24d40 g_obj_00a24d40;
extern int g_tail_00a24d40;
void func_00a24d40()
{
    g_obj_00a24d40.m((void*)&g_00a24d40_0, (void*)&g_00a24d40_1, 176, 31, 0);
    tail_fn_00a24d40(&g_tail_00a24d40);
}