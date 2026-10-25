// from server: 100% by colin
// roc 2011-06 00a244a0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a244a0
//
// 00a244a0  6a00                 push 0
// 00a244a2  6a1f                 push 0x1f
// 00a244a4  68b4000000           push 0xb4
// 00a244a9  68f0d8a600           push 0xa6d8f0
// 00a244ae  684c94a900           push 0xa9944c
// 00a244b3  b924cfcc00           mov ecx, 0xcccf24
// 00a244b8  e8f355c2ff           call 0x649ab0
// 00a244bd  6850a8a300           push 0xa3a850
// 00a244c2  e8966cdeff           call 0x80b15d
// 00a244c7  59                   pop ecx
// 00a244c8  c3                   ret 

extern int g_00a244a0_0;
extern int g_00a244a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a244a0(void*);
struct O_00a244a0 { int m(void*, void*, int, int, int); };
extern O_00a244a0 g_obj_00a244a0;
extern int g_tail_00a244a0;
void func_00a244a0()
{
    g_obj_00a244a0.m((void*)&g_00a244a0_0, (void*)&g_00a244a0_1, 180, 31, 0);
    tail_fn_00a244a0(&g_tail_00a244a0);
}