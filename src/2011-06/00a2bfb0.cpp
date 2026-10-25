// from server: 100% by colin
// roc 2011-06 00a2bfb0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bfb0
//
// 00a2bfb0  6a00                 push 0
// 00a2bfb2  6a02                 push 2
// 00a2bfb4  6854010000           push 0x154
// 00a2bfb9  688064a900           push 0xa96480
// 00a2bfbe  684440aa00           push 0xaa4044
// 00a2bfc3  b9b82fcd00           mov ecx, 0xcd2fb8
// 00a2bfc8  e8a393cdff           call 0x705370
// 00a2bfcd  6850e0a300           push 0xa3e050
// 00a2bfd2  e886f1ddff           call 0x80b15d
// 00a2bfd7  59                   pop ecx
// 00a2bfd8  c3                   ret 

extern int g_00a2bfb0_0;
extern int g_00a2bfb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bfb0(void*);
struct O_00a2bfb0 { int m(void*, void*, int, int, int); };
extern O_00a2bfb0 g_obj_00a2bfb0;
extern int g_tail_00a2bfb0;
void func_00a2bfb0()
{
    g_obj_00a2bfb0.m((void*)&g_00a2bfb0_0, (void*)&g_00a2bfb0_1, 340, 2, 0);
    tail_fn_00a2bfb0(&g_tail_00a2bfb0);
}