// from server: 100% by colin
// roc 2011-06 00a193a0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a193a0
//
// 00a193a0  6a00                 push 0
// 00a193a2  6a1f                 push 0x1f
// 00a193a4  68d0000000           push 0xd0
// 00a193a9  6818a2a700           push 0xa7a218
// 00a193ae  68a0a3a700           push 0xa7a3a0
// 00a193b3  b9f87acb00           mov ecx, 0xcb7af8
// 00a193b8  e823a2acff           call 0x4e35e0
// 00a193bd  68a037a300           push 0xa337a0
// 00a193c2  e8961ddfff           call 0x80b15d
// 00a193c7  59                   pop ecx
// 00a193c8  c3                   ret 

extern int g_00a193a0_0;
extern int g_00a193a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a193a0(void*);
struct O_00a193a0 { int m(void*, void*, int, int, int); };
extern O_00a193a0 g_obj_00a193a0;
extern int g_tail_00a193a0;
void func_00a193a0()
{
    g_obj_00a193a0.m((void*)&g_00a193a0_0, (void*)&g_00a193a0_1, 208, 31, 0);
    tail_fn_00a193a0(&g_tail_00a193a0);
}