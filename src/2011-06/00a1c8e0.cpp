// from server: 100% by colin
// roc 2011-06 00a1c8e0  unit: seg_00a10000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1c8e0
//
// 00a1c8e0  6a00                 push 0
// 00a1c8e2  68eca1a800           push 0xa8a1ec
// 00a1c8e7  68a0a1a800           push 0xa8a1a0
// 00a1c8ec  68dca1a800           push 0xa8a1dc
// 00a1c8f1  6884000000           push 0x84
// 00a1c8f6  b9c0becb00           mov ecx, 0xcbbec0
// 00a1c8fb  e8b09bb7ff           call 0x5964b0
// 00a1c900  681050a300           push 0xa35010
// 00a1c905  e853e8deff           call 0x80b15d
// 00a1c90a  59                   pop ecx
// 00a1c90b  c3                   ret 

extern int g_00a1c8e0_1;
extern int g_00a1c8e0_2;
extern int g_00a1c8e0_3;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a1c8e0(void*);
struct O_00a1c8e0 { int m(int, void*, void*, void*, int); };
extern O_00a1c8e0 g_obj_00a1c8e0;
extern int g_tail_00a1c8e0;
void func_00a1c8e0()
{
    g_obj_00a1c8e0.m(132, (void*)&g_00a1c8e0_1, (void*)&g_00a1c8e0_2, (void*)&g_00a1c8e0_3, 0);
    tail_fn_00a1c8e0(&g_tail_00a1c8e0);
}