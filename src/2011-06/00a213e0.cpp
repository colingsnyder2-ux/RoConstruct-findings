// from server: 100% by colin
// roc 2011-06 00a213e0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a213e0
//
// 00a213e0  6a00                 push 0
// 00a213e2  68840ca900           push 0xa90c84
// 00a213e7  68ac0ca900           push 0xa90cac
// 00a213ec  68b4000000           push 0xb4
// 00a213f1  b940abcc00           mov ecx, 0xccab40
// 00a213f6  e8b549bcff           call 0x5e5db0
// 00a213fb  685095a300           push 0xa39550
// 00a21400  e8589ddeff           call 0x80b15d
// 00a21405  59                   pop ecx
// 00a21406  c3                   ret 

extern int g_00a213e0_1;
extern int g_00a213e0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a213e0(void*);
struct O_00a213e0 { int m(int, void*, void*, int); };
extern O_00a213e0 g_obj_00a213e0;
extern int g_tail_00a213e0;
void func_00a213e0()
{
    g_obj_00a213e0.m(180, (void*)&g_00a213e0_1, (void*)&g_00a213e0_2, 0);
    tail_fn_00a213e0(&g_tail_00a213e0);
}