// from server: 100% by colin
// roc 2007-08 00775310  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775310
//
// 00775310  6a05                 push 5
// 00775312  6828010000           push 0x128
// 00775317  6878fd7b00           push 0x7bfd78
// 0077531c  686cfd7b00           push 0x7bfd6c
// 00775321  b9a4758c00           mov ecx, 0x8c75a4
// 00775326  e8558ce7ff           call 0x5edf80
// 0077532b  6870c27700           push 0x77c270
// 00775330  e8eeb9ebff           call 0x630d23
// 00775335  59                   pop ecx
// 00775336  c3                   ret 

extern int g_00775310_0;
extern int g_00775310_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775310(void*);
struct O_00775310 { int m(void*, void*, int, int); };
extern O_00775310 g_obj_00775310;
extern int g_tail_00775310;
void func_00775310()
{
    g_obj_00775310.m((void*)&g_00775310_0, (void*)&g_00775310_1, 296, 5);
    tail_fn_00775310(&g_tail_00775310);
}