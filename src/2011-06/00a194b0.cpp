// from server: 100% by colin
// roc 2011-06 00a194b0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a194b0
//
// 00a194b0  6a00                 push 0
// 00a194b2  6a1f                 push 0x1f
// 00a194b4  6899000000           push 0x99
// 00a194b9  6818a2a700           push 0xa7a218
// 00a194be  681ca4a700           push 0xa7a41c
// 00a194c3  b9b87acb00           mov ecx, 0xcb7ab8
// 00a194c8  e813a1acff           call 0x4e35e0
// 00a194cd  686035a300           push 0xa33560
// 00a194d2  e8861cdfff           call 0x80b15d
// 00a194d7  59                   pop ecx
// 00a194d8  c3                   ret 

extern int g_00a194b0_0;
extern int g_00a194b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a194b0(void*);
struct O_00a194b0 { int m(void*, void*, int, int, int); };
extern O_00a194b0 g_obj_00a194b0;
extern int g_tail_00a194b0;
void func_00a194b0()
{
    g_obj_00a194b0.m((void*)&g_00a194b0_0, (void*)&g_00a194b0_1, 153, 31, 0);
    tail_fn_00a194b0(&g_tail_00a194b0);
}