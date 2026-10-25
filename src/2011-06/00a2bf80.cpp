// from server: 100% by colin
// roc 2011-06 00a2bf80  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bf80
//
// 00a2bf80  6a00                 push 0
// 00a2bf82  6a02                 push 2
// 00a2bf84  6834010000           push 0x134
// 00a2bf89  688064a900           push 0xa96480
// 00a2bf8e  68b8d7aa00           push 0xaad7b8
// 00a2bf93  b9982fcd00           mov ecx, 0xcd2f98
// 00a2bf98  e8d393cdff           call 0x705370
// 00a2bf9d  6830e0a300           push 0xa3e030
// 00a2bfa2  e8b6f1ddff           call 0x80b15d
// 00a2bfa7  59                   pop ecx
// 00a2bfa8  c3                   ret 

extern int g_00a2bf80_0;
extern int g_00a2bf80_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bf80(void*);
struct O_00a2bf80 { int m(void*, void*, int, int, int); };
extern O_00a2bf80 g_obj_00a2bf80;
extern int g_tail_00a2bf80;
void func_00a2bf80()
{
    g_obj_00a2bf80.m((void*)&g_00a2bf80_0, (void*)&g_00a2bf80_1, 308, 2, 0);
    tail_fn_00a2bf80(&g_tail_00a2bf80);
}