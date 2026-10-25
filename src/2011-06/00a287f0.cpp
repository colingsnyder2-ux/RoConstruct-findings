// from server: 100% by colin
// roc 2011-06 00a287f0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a287f0
//
// 00a287f0  6a00                 push 0
// 00a287f2  6a02                 push 2
// 00a287f4  68ec000000           push 0xec
// 00a287f9  688064a900           push 0xa96480
// 00a287fe  68f03eaa00           push 0xaa3ef0
// 00a28803  b9f800cd00           mov ecx, 0xcd00f8
// 00a28808  e8532ec8ff           call 0x6ab660
// 00a2880d  68a0c4a300           push 0xa3c4a0
// 00a28812  e84629deff           call 0x80b15d
// 00a28817  59                   pop ecx
// 00a28818  c3                   ret 

extern int g_00a287f0_0;
extern int g_00a287f0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a287f0(void*);
struct O_00a287f0 { int m(void*, void*, int, int, int); };
extern O_00a287f0 g_obj_00a287f0;
extern int g_tail_00a287f0;
void func_00a287f0()
{
    g_obj_00a287f0.m((void*)&g_00a287f0_0, (void*)&g_00a287f0_1, 236, 2, 0);
    tail_fn_00a287f0(&g_tail_00a287f0);
}