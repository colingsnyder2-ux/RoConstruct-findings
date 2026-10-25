// from server: 100% by colin
// roc 2011-06 00a2bc20  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bc20
//
// 00a2bc20  6a00                 push 0
// 00a2bc22  6a1f                 push 0x1f
// 00a2bc24  6854010000           push 0x154
// 00a2bc29  6880d2aa00           push 0xaad280
// 00a2bc2e  6820d3aa00           push 0xaad320
// 00a2bc33  b9982acd00           mov ecx, 0xcd2a98
// 00a2bc38  e87373cdff           call 0x702fb0
// 00a2bc3d  68e0dda300           push 0xa3dde0
// 00a2bc42  e816f5ddff           call 0x80b15d
// 00a2bc47  59                   pop ecx
// 00a2bc48  c3                   ret 

extern int g_00a2bc20_0;
extern int g_00a2bc20_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bc20(void*);
struct O_00a2bc20 { int m(void*, void*, int, int, int); };
extern O_00a2bc20 g_obj_00a2bc20;
extern int g_tail_00a2bc20;
void func_00a2bc20()
{
    g_obj_00a2bc20.m((void*)&g_00a2bc20_0, (void*)&g_00a2bc20_1, 340, 31, 0);
    tail_fn_00a2bc20(&g_tail_00a2bc20);
}