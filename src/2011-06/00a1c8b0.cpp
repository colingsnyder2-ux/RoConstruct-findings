// from server: 100% by colin
// roc 2011-06 00a1c8b0  unit: seg_00a10000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c8b0
//
// 00a1c8b0  6a00                 push 0
// 00a1c8b2  684ca1a800           push 0xa8a14c
// 00a1c8b7  68c8a1a800           push 0xa8a1c8
// 00a1c8bc  6880000000           push 0x80
// 00a1c8c1  b900bdcb00           mov ecx, 0xcbbd00
// 00a1c8c6  e8059bb7ff           call 0x5963d0
// 00a1c8cb  680050a300           push 0xa35000
// 00a1c8d0  e888e8deff           call 0x80b15d
// 00a1c8d5  59                   pop ecx
// 00a1c8d6  c3                   ret 

extern int g_00a1c8b0_1;
extern int g_00a1c8b0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1c8b0(void*);
struct O_00a1c8b0 { int m(int, void*, void*, int); };
extern O_00a1c8b0 g_obj_00a1c8b0;
extern int g_tail_00a1c8b0;
void func_00a1c8b0()
{
    g_obj_00a1c8b0.m(128, (void*)&g_00a1c8b0_1, (void*)&g_00a1c8b0_2, 0);
    tail_fn_00a1c8b0(&g_tail_00a1c8b0);
}