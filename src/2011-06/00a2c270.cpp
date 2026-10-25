// from server: 100% by colin
// roc 2011-06 00a2c270  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2c270
//
// 00a2c270  6a00                 push 0
// 00a2c272  6a02                 push 2
// 00a2c274  6854010000           push 0x154
// 00a2c279  688064a900           push 0xa96480
// 00a2c27e  684440aa00           push 0xaa4044
// 00a2c283  b9ec31cd00           mov ecx, 0xcd31ec
// 00a2c288  e873cccdff           call 0x708f00
// 00a2c28d  68e0e1a300           push 0xa3e1e0
// 00a2c292  e8c6eeddff           call 0x80b15d
// 00a2c297  59                   pop ecx
// 00a2c298  c3                   ret 

extern int g_00a2c270_0;
extern int g_00a2c270_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2c270(void*);
struct O_00a2c270 { int m(void*, void*, int, int, int); };
extern O_00a2c270 g_obj_00a2c270;
extern int g_tail_00a2c270;
void func_00a2c270()
{
    g_obj_00a2c270.m((void*)&g_00a2c270_0, (void*)&g_00a2c270_1, 340, 2, 0);
    tail_fn_00a2c270(&g_tail_00a2c270);
}