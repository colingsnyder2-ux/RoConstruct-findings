// from server: 100% by colin
// roc 2011-06 00a2c2a0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c2a0
//
// 00a2c2a0  6a00                 push 0
// 00a2c2a2  6a02                 push 2
// 00a2c2a4  6874010000           push 0x174
// 00a2c2a9  688064a900           push 0xa96480
// 00a2c2ae  686440aa00           push 0xaa4064
// 00a2c2b3  b96c32cd00           mov ecx, 0xcd326c
// 00a2c2b8  e843cccdff           call 0x708f00
// 00a2c2bd  6800e2a300           push 0xa3e200
// 00a2c2c2  e896eeddff           call 0x80b15d
// 00a2c2c7  59                   pop ecx
// 00a2c2c8  c3                   ret 

extern int g_00a2c2a0_0;
extern int g_00a2c2a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c2a0(void*);
struct O_00a2c2a0 { int m(void*, void*, int, int, int); };
extern O_00a2c2a0 g_obj_00a2c2a0;
extern int g_tail_00a2c2a0;
void func_00a2c2a0()
{
    g_obj_00a2c2a0.m((void*)&g_00a2c2a0_0, (void*)&g_00a2c2a0_1, 372, 2, 0);
    tail_fn_00a2c2a0(&g_tail_00a2c2a0);
}