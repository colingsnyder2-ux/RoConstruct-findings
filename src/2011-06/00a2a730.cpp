// from server: 100% by colin
// roc 2011-06 00a2a730  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2a730
//
// 00a2a730  6a00                 push 0
// 00a2a732  6a1f                 push 0x1f
// 00a2a734  68a8000000           push 0xa8
// 00a2a739  68e483a700           push 0xa783e4
// 00a2a73e  68b892aa00           push 0xaa92b8
// 00a2a743  b96c1ecd00           mov ecx, 0xcd1e6c
// 00a2a748  e89364ccff           call 0x6f0be0
// 00a2a74d  6860d4a300           push 0xa3d460
// 00a2a752  e8060adeff           call 0x80b15d
// 00a2a757  59                   pop ecx
// 00a2a758  c3                   ret 

extern int g_00a2a730_0;
extern int g_00a2a730_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2a730(void*);
struct O_00a2a730 { int m(void*, void*, int, int, int); };
extern O_00a2a730 g_obj_00a2a730;
extern int g_tail_00a2a730;
void func_00a2a730()
{
    g_obj_00a2a730.m((void*)&g_00a2a730_0, (void*)&g_00a2a730_1, 168, 31, 0);
    tail_fn_00a2a730(&g_tail_00a2a730);
}