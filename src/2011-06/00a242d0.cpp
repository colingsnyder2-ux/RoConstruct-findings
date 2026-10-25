// from server: 100% by colin
// roc 2011-06 00a242d0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a242d0
//
// 00a242d0  6a00                 push 0
// 00a242d2  6a1f                 push 0x1f
// 00a242d4  68a0000000           push 0xa0
// 00a242d9  683819a700           push 0xa71938
// 00a242de  688493a900           push 0xa99384
// 00a242e3  b904cfcc00           mov ecx, 0xcccf04
// 00a242e8  e8c357c2ff           call 0x649ab0
// 00a242ed  6810a9a300           push 0xa3a910
// 00a242f2  e8666edeff           call 0x80b15d
// 00a242f7  59                   pop ecx
// 00a242f8  c3                   ret 

extern int g_00a242d0_0;
extern int g_00a242d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a242d0(void*);
struct O_00a242d0 { int m(void*, void*, int, int, int); };
extern O_00a242d0 g_obj_00a242d0;
extern int g_tail_00a242d0;
void func_00a242d0()
{
    g_obj_00a242d0.m((void*)&g_00a242d0_0, (void*)&g_00a242d0_1, 160, 31, 0);
    tail_fn_00a242d0(&g_tail_00a242d0);
}