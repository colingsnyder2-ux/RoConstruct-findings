// from server: 100% by colin
// roc 2011-06 00a2a1c0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2a1c0
//
// 00a2a1c0  6a00                 push 0
// 00a2a1c2  6858b9a900           push 0xa9b958
// 00a2a1c7  686877aa00           push 0xaa7768
// 00a2a1cc  68c8000000           push 0xc8
// 00a2a1d1  b9241acd00           mov ecx, 0xcd1a24
// 00a2a1d6  e83506cbff           call 0x6da810
// 00a2a1db  6890d1a300           push 0xa3d190
// 00a2a1e0  e8780fdeff           call 0x80b15d
// 00a2a1e5  59                   pop ecx
// 00a2a1e6  c3                   ret 

extern int g_00a2a1c0_1;
extern int g_00a2a1c0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2a1c0(void*);
struct O_00a2a1c0 { int m(int, void*, void*, int); };
extern O_00a2a1c0 g_obj_00a2a1c0;
extern int g_tail_00a2a1c0;
void func_00a2a1c0()
{
    g_obj_00a2a1c0.m(200, (void*)&g_00a2a1c0_1, (void*)&g_00a2a1c0_2, 0);
    tail_fn_00a2a1c0(&g_tail_00a2a1c0);
}