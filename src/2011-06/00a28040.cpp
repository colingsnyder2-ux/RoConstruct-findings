// from server: 100% by colin
// roc 2011-06 00a28040  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28040
//
// 00a28040  6a00                 push 0
// 00a28042  6a1f                 push 0x1f
// 00a28044  68a0000000           push 0xa0
// 00a28049  68e483a700           push 0xa783e4
// 00a2804e  68e828aa00           push 0xaa28e8
// 00a28053  b934fecc00           mov ecx, 0xccfe34
// 00a28058  e8a3f0c6ff           call 0x697100
// 00a2805d  6820c0a300           push 0xa3c020
// 00a28062  e8f630deff           call 0x80b15d
// 00a28067  59                   pop ecx
// 00a28068  c3                   ret 

extern int g_00a28040_0;
extern int g_00a28040_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28040(void*);
struct O_00a28040 { int m(void*, void*, int, int, int); };
extern O_00a28040 g_obj_00a28040;
extern int g_tail_00a28040;
void func_00a28040()
{
    g_obj_00a28040.m((void*)&g_00a28040_0, (void*)&g_00a28040_1, 160, 31, 0);
    tail_fn_00a28040(&g_tail_00a28040);
}