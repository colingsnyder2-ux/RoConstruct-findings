// from server: 100% by colin
// roc 2011-06 00a2b920  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2b920
//
// 00a2b920  6a00                 push 0
// 00a2b922  6a1f                 push 0x1f
// 00a2b924  6850010000           push 0x150
// 00a2b929  6880d2aa00           push 0xaad280
// 00a2b92e  681cd3aa00           push 0xaad31c
// 00a2b933  b9382acd00           mov ecx, 0xcd2a38
// 00a2b938  e8f36fcdff           call 0x702930
// 00a2b93d  68a0dca300           push 0xa3dca0
// 00a2b942  e816f8ddff           call 0x80b15d
// 00a2b947  59                   pop ecx
// 00a2b948  c3                   ret 

extern int g_00a2b920_0;
extern int g_00a2b920_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2b920(void*);
struct O_00a2b920 { int m(void*, void*, int, int, int); };
extern O_00a2b920 g_obj_00a2b920;
extern int g_tail_00a2b920;
void func_00a2b920()
{
    g_obj_00a2b920.m((void*)&g_00a2b920_0, (void*)&g_00a2b920_1, 336, 31, 0);
    tail_fn_00a2b920(&g_tail_00a2b920);
}