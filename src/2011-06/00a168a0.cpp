// from server: 100% by colin
// roc 2011-06 00a168a0  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a168a0
//
// 00a168a0  6a00                 push 0
// 00a168a2  6a0e                 push 0xe
// 00a168a4  680c010000           push 0x10c
// 00a168a9  68c0d4a600           push 0xa6d4c0
// 00a168ae  68c8d4a600           push 0xa6d4c8
// 00a168b3  b98c35cb00           mov ecx, 0xcb358c
// 00a168b8  e8f3dfa3ff           call 0x4548b0
// 00a168bd  686015a300           push 0xa31560
// 00a168c2  e89648dfff           call 0x80b15d
// 00a168c7  59                   pop ecx
// 00a168c8  c3                   ret 

extern int g_00a168a0_0;
extern int g_00a168a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a168a0(void*);
struct O_00a168a0 { int m(void*, void*, int, int, int); };
extern O_00a168a0 g_obj_00a168a0;
extern int g_tail_00a168a0;
void func_00a168a0()
{
    g_obj_00a168a0.m((void*)&g_00a168a0_0, (void*)&g_00a168a0_1, 268, 14, 0);
    tail_fn_00a168a0(&g_tail_00a168a0);
}