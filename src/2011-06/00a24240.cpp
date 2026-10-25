// from server: 100% by colin
// roc 2011-06 00a24240  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a24240
//
// 00a24240  6a00                 push 0
// 00a24242  6a1f                 push 0x1f
// 00a24244  6894000000           push 0x94
// 00a24249  685093a900           push 0xa99350
// 00a2424e  684493a900           push 0xa99344
// 00a24253  b9f8cfcc00           mov ecx, 0xcccff8
// 00a24258  e88357c2ff           call 0x6499e0
// 00a2425d  68d0a8a300           push 0xa3a8d0
// 00a24262  e8f66edeff           call 0x80b15d
// 00a24267  59                   pop ecx
// 00a24268  c3                   ret 

extern int g_00a24240_0;
extern int g_00a24240_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a24240(void*);
struct O_00a24240 { int m(void*, void*, int, int, int); };
extern O_00a24240 g_obj_00a24240;
extern int g_tail_00a24240;
void func_00a24240()
{
    g_obj_00a24240.m((void*)&g_00a24240_0, (void*)&g_00a24240_1, 148, 31, 0);
    tail_fn_00a24240(&g_tail_00a24240);
}