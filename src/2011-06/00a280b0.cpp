// from server: 100% by colin
// roc 2011-06 00a280b0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a280b0
//
// 00a280b0  6a00                 push 0
// 00a280b2  689c84a700           push 0xa7849c
// 00a280b7  68f4a1a800           push 0xa8a1f4
// 00a280bc  68a8000000           push 0xa8
// 00a280c1  b950fccc00           mov ecx, 0xccfc50
// 00a280c6  e84518c7ff           call 0x699910
// 00a280cb  6830c2a300           push 0xa3c230
// 00a280d0  e88830deff           call 0x80b15d
// 00a280d5  59                   pop ecx
// 00a280d6  c3                   ret 

extern int g_00a280b0_1;
extern int g_00a280b0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a280b0(void*);
struct O_00a280b0 { int m(int, void*, void*, int); };
extern O_00a280b0 g_obj_00a280b0;
extern int g_tail_00a280b0;
void func_00a280b0()
{
    g_obj_00a280b0.m(168, (void*)&g_00a280b0_1, (void*)&g_00a280b0_2, 0);
    tail_fn_00a280b0(&g_tail_00a280b0);
}