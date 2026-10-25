// from server: 100% by colin
// roc 2011-06 00a2bfe0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bfe0
//
// 00a2bfe0  6a00                 push 0
// 00a2bfe2  6a02                 push 2
// 00a2bfe4  6874010000           push 0x174
// 00a2bfe9  688064a900           push 0xa96480
// 00a2bfee  686440aa00           push 0xaa4064
// 00a2bff3  b96830cd00           mov ecx, 0xcd3068
// 00a2bff8  e87393cdff           call 0x705370
// 00a2bffd  6870e0a300           push 0xa3e070
// 00a2c002  e856f1ddff           call 0x80b15d
// 00a2c007  59                   pop ecx
// 00a2c008  c3                   ret 

extern int g_00a2bfe0_0;
extern int g_00a2bfe0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bfe0(void*);
struct O_00a2bfe0 { int m(void*, void*, int, int, int); };
extern O_00a2bfe0 g_obj_00a2bfe0;
extern int g_tail_00a2bfe0;
void func_00a2bfe0()
{
    g_obj_00a2bfe0.m((void*)&g_00a2bfe0_0, (void*)&g_00a2bfe0_1, 372, 2, 0);
    tail_fn_00a2bfe0(&g_tail_00a2bfe0);
}