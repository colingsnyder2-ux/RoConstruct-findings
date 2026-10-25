// from server: 100% by colin
// roc 2011-06 00a27e20  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27e20
//
// 00a27e20  6a00                 push 0
// 00a27e22  689c84a700           push 0xa7849c
// 00a27e27  68f4a1a800           push 0xa8a1f4
// 00a27e2c  68c0000000           push 0xc0
// 00a27e31  b978fccc00           mov ecx, 0xccfc78
// 00a27e36  e85517c7ff           call 0x699590
// 00a27e3b  68f0c1a300           push 0xa3c1f0
// 00a27e40  e81833deff           call 0x80b15d
// 00a27e45  59                   pop ecx
// 00a27e46  c3                   ret 

extern int g_00a27e20_1;
extern int g_00a27e20_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27e20(void*);
struct O_00a27e20 { int m(int, void*, void*, int); };
extern O_00a27e20 g_obj_00a27e20;
extern int g_tail_00a27e20;
void func_00a27e20()
{
    g_obj_00a27e20.m(192, (void*)&g_00a27e20_1, (void*)&g_00a27e20_2, 0);
    tail_fn_00a27e20(&g_tail_00a27e20);
}