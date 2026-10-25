// from server: 100% by colin
// roc 2011-06 00a2a1f0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2a1f0
//
// 00a2a1f0  6a00                 push 0
// 00a2a1f2  6858b9a900           push 0xa9b958
// 00a2a1f7  687877aa00           push 0xaa7778
// 00a2a1fc  68cc000000           push 0xcc
// 00a2a201  b9541acd00           mov ecx, 0xcd1a54
// 00a2a206  e80506cbff           call 0x6da810
// 00a2a20b  6880d1a300           push 0xa3d180
// 00a2a210  e8480fdeff           call 0x80b15d
// 00a2a215  59                   pop ecx
// 00a2a216  c3                   ret 

extern int g_00a2a1f0_1;
extern int g_00a2a1f0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2a1f0(void*);
struct O_00a2a1f0 { int m(int, void*, void*, int); };
extern O_00a2a1f0 g_obj_00a2a1f0;
extern int g_tail_00a2a1f0;
void func_00a2a1f0()
{
    g_obj_00a2a1f0.m(204, (void*)&g_00a2a1f0_1, (void*)&g_00a2a1f0_2, 0);
    tail_fn_00a2a1f0(&g_tail_00a2a1f0);
}