// from server: 100% by colin
// roc 2011-06 00a194e0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a194e0
//
// 00a194e0  6a00                 push 0
// 00a194e2  6a1f                 push 0x1f
// 00a194e4  689b000000           push 0x9b
// 00a194e9  6818a2a700           push 0xa7a218
// 00a194ee  6834a4a700           push 0xa7a434
// 00a194f3  b9787bcb00           mov ecx, 0xcb7b78
// 00a194f8  e8e3a0acff           call 0x4e35e0
// 00a194fd  688035a300           push 0xa33580
// 00a19502  e8561cdfff           call 0x80b15d
// 00a19507  59                   pop ecx
// 00a19508  c3                   ret 

extern int g_00a194e0_0;
extern int g_00a194e0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a194e0(void*);
struct O_00a194e0 { int m(void*, void*, int, int, int); };
extern O_00a194e0 g_obj_00a194e0;
extern int g_tail_00a194e0;
void func_00a194e0()
{
    g_obj_00a194e0.m((void*)&g_00a194e0_0, (void*)&g_00a194e0_1, 155, 31, 0);
    tail_fn_00a194e0(&g_tail_00a194e0);
}