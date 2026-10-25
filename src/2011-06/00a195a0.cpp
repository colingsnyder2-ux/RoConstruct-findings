// from server: 100% by colin
// roc 2011-06 00a195a0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a195a0
//
// 00a195a0  6a00                 push 0
// 00a195a2  6a1f                 push 0x1f
// 00a195a4  6894000000           push 0x94
// 00a195a9  6878a4a700           push 0xa7a478
// 00a195ae  6894a4a700           push 0xa7a494
// 00a195b3  b92c7dcb00           mov ecx, 0xcb7d2c
// 00a195b8  e823a0acff           call 0x4e35e0
// 00a195bd  680036a300           push 0xa33600
// 00a195c2  e8961bdfff           call 0x80b15d
// 00a195c7  59                   pop ecx
// 00a195c8  c3                   ret 

extern int g_00a195a0_0;
extern int g_00a195a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a195a0(void*);
struct O_00a195a0 { int m(void*, void*, int, int, int); };
extern O_00a195a0 g_obj_00a195a0;
extern int g_tail_00a195a0;
void func_00a195a0()
{
    g_obj_00a195a0.m((void*)&g_00a195a0_0, (void*)&g_00a195a0_1, 148, 31, 0);
    tail_fn_00a195a0(&g_tail_00a195a0);
}