// from server: 100% by colin
// roc 2011-06 00a243c0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a243c0
//
// 00a243c0  6a00                 push 0
// 00a243c2  6a1f                 push 0x1f
// 00a243c4  68ac000000           push 0xac
// 00a243c9  685093a900           push 0xa99350
// 00a243ce  68e893a900           push 0xa993e8
// 00a243d3  b9b4cfcc00           mov ecx, 0xcccfb4
// 00a243d8  e80356c2ff           call 0x6499e0
// 00a243dd  6810a8a300           push 0xa3a810
// 00a243e2  e8766ddeff           call 0x80b15d
// 00a243e7  59                   pop ecx
// 00a243e8  c3                   ret 

extern int g_00a243c0_0;
extern int g_00a243c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a243c0(void*);
struct O_00a243c0 { int m(void*, void*, int, int, int); };
extern O_00a243c0 g_obj_00a243c0;
extern int g_tail_00a243c0;
void func_00a243c0()
{
    g_obj_00a243c0.m((void*)&g_00a243c0_0, (void*)&g_00a243c0_1, 172, 31, 0);
    tail_fn_00a243c0(&g_tail_00a243c0);
}