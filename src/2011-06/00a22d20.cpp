// from server: 100% by colin
// roc 2011-06 00a22d20  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a22d20
//
// 00a22d20  6a00                 push 0
// 00a22d22  6a02                 push 2
// 00a22d24  68f8010000           push 0x1f8
// 00a22d29  688064a900           push 0xa96480
// 00a22d2e  685c64a900           push 0xa9645c
// 00a22d33  b91cc1cc00           mov ecx, 0xccc11c
// 00a22d38  e8d3b4c0ff           call 0x62e210
// 00a22d3d  68409da300           push 0xa39d40
// 00a22d42  e81684deff           call 0x80b15d
// 00a22d47  59                   pop ecx
// 00a22d48  c3                   ret 

extern int g_00a22d20_0;
extern int g_00a22d20_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a22d20(void*);
struct O_00a22d20 { int m(void*, void*, int, int, int); };
extern O_00a22d20 g_obj_00a22d20;
extern int g_tail_00a22d20;
void func_00a22d20()
{
    g_obj_00a22d20.m((void*)&g_00a22d20_0, (void*)&g_00a22d20_1, 504, 2, 0);
    tail_fn_00a22d20(&g_tail_00a22d20);
}