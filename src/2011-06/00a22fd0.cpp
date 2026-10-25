// from server: 100% by colin
// roc 2011-06 00a22fd0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a22fd0
//
// 00a22fd0  6a00                 push 0
// 00a22fd2  681c64a900           push 0xa9641c
// 00a22fd7  685c6ca900           push 0xa96c5c
// 00a22fdc  684c020000           push 0x24c
// 00a22fe1  b980c2cc00           mov ecx, 0xccc280
// 00a22fe6  e8d506c1ff           call 0x6336c0
// 00a22feb  68209fa300           push 0xa39f20
// 00a22ff0  e86881deff           call 0x80b15d
// 00a22ff5  59                   pop ecx
// 00a22ff6  c3                   ret 

extern int g_00a22fd0_1;
extern int g_00a22fd0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a22fd0(void*);
struct O_00a22fd0 { int m(int, void*, void*, int); };
extern O_00a22fd0 g_obj_00a22fd0;
extern int g_tail_00a22fd0;
void func_00a22fd0()
{
    g_obj_00a22fd0.m(588, (void*)&g_00a22fd0_1, (void*)&g_00a22fd0_2, 0);
    tail_fn_00a22fd0(&g_tail_00a22fd0);
}