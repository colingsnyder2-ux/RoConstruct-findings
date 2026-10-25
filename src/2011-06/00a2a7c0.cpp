// from server: 100% by colin
// roc 2011-06 00a2a7c0  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2a7c0
//
// 00a2a7c0  6a00                 push 0
// 00a2a7c2  68a887a700           push 0xa787a8
// 00a2a7c7  683494aa00           push 0xaa9434
// 00a2a7cc  6898000000           push 0x98
// 00a2a7d1  b9f01ecd00           mov ecx, 0xcd1ef0
// 00a2a7d6  e87574ccff           call 0x6f1c50
// 00a2a7db  68b0d4a300           push 0xa3d4b0
// 00a2a7e0  e87809deff           call 0x80b15d
// 00a2a7e5  59                   pop ecx
// 00a2a7e6  c3                   ret 

extern int g_00a2a7c0_1;
extern int g_00a2a7c0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2a7c0(void*);
struct O_00a2a7c0 { int m(int, void*, void*, int); };
extern O_00a2a7c0 g_obj_00a2a7c0;
extern int g_tail_00a2a7c0;
void func_00a2a7c0()
{
    g_obj_00a2a7c0.m(152, (void*)&g_00a2a7c0_1, (void*)&g_00a2a7c0_2, 0);
    tail_fn_00a2a7c0(&g_tail_00a2a7c0);
}