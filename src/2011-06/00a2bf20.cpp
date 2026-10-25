// from server: 100% by colin
// roc 2011-06 00a2bf20  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bf20
//
// 00a2bf20  6a00                 push 0
// 00a2bf22  6a02                 push 2
// 00a2bf24  68f4000000           push 0xf4
// 00a2bf29  688064a900           push 0xa96480
// 00a2bf2e  68f03eaa00           push 0xaa3ef0
// 00a2bf33  b9202fcd00           mov ecx, 0xcd2f20
// 00a2bf38  e83394cdff           call 0x705370
// 00a2bf3d  68b0e0a300           push 0xa3e0b0
// 00a2bf42  e816f2ddff           call 0x80b15d
// 00a2bf47  59                   pop ecx
// 00a2bf48  c3                   ret 

extern int g_00a2bf20_0;
extern int g_00a2bf20_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bf20(void*);
struct O_00a2bf20 { int m(void*, void*, int, int, int); };
extern O_00a2bf20 g_obj_00a2bf20;
extern int g_tail_00a2bf20;
void func_00a2bf20()
{
    g_obj_00a2bf20.m((void*)&g_00a2bf20_0, (void*)&g_00a2bf20_1, 244, 2, 0);
    tail_fn_00a2bf20(&g_tail_00a2bf20);
}