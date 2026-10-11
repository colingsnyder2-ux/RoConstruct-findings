// from server: 100% by colin
// roc 2007-08 00775760  unit: seg_00770000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775760
//
// 00775760  6a05                 push 5
// 00775762  680c010000           push 0x10c
// 00775767  6844fd7b00           push 0x7bfd44
// 0077576c  683cfe7b00           push 0x7bfe3c
// 00775771  b928768c00           mov ecx, 0x8c7628
// 00775776  e8d57ee7ff           call 0x5ed650
// 0077577b  68b0c17700           push 0x77c1b0
// 00775780  e89eb5ebff           call 0x630d23
// 00775785  59                   pop ecx
// 00775786  c3                   ret 

extern int g_00775760_0;
extern int g_00775760_1;
// roc-flags: /O2 /GS /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00775760(void*);
struct O_00775760 { int m(void*, void*, int, int); };
extern O_00775760 g_obj_00775760;
extern int g_tail_00775760;
void func_00775760()
{
    g_obj_00775760.m((void*)&g_00775760_0, (void*)&g_00775760_1, 268, 5);
    tail_fn_00775760(&g_tail_00775760);
}