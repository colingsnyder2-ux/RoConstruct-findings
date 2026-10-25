// from server: 100% by colin
// roc 2011-06 00a27fe0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a27fe0
//
// 00a27fe0  6a00                 push 0
// 00a27fe2  689c84a700           push 0xa7849c
// 00a27fe7  68f4a1a800           push 0xa8a1f4
// 00a27fec  689c000000           push 0x9c
// 00a27ff1  b90cfecc00           mov ecx, 0xccfe0c
// 00a27ff6  e83518c7ff           call 0x699830
// 00a27ffb  6820c2a300           push 0xa3c220
// 00a28000  e85831deff           call 0x80b15d
// 00a28005  59                   pop ecx
// 00a28006  c3                   ret 

extern int g_00a27fe0_1;
extern int g_00a27fe0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a27fe0(void*);
struct O_00a27fe0 { int m(int, void*, void*, int); };
extern O_00a27fe0 g_obj_00a27fe0;
extern int g_tail_00a27fe0;
void func_00a27fe0()
{
    g_obj_00a27fe0.m(156, (void*)&g_00a27fe0_1, (void*)&g_00a27fe0_2, 0);
    tail_fn_00a27fe0(&g_tail_00a27fe0);
}