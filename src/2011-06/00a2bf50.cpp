// from server: 100% by colin
// roc 2011-06 00a2bf50  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2bf50
//
// 00a2bf50  6a00                 push 0
// 00a2bf52  6a02                 push 2
// 00a2bf54  6814010000           push 0x114
// 00a2bf59  688064a900           push 0xa96480
// 00a2bf5e  680c3faa00           push 0xaa3f0c
// 00a2bf63  b99430cd00           mov ecx, 0xcd3094
// 00a2bf68  e80394cdff           call 0x705370
// 00a2bf6d  6810e0a300           push 0xa3e010
// 00a2bf72  e8e6f1ddff           call 0x80b15d
// 00a2bf77  59                   pop ecx
// 00a2bf78  c3                   ret 

extern int g_00a2bf50_0;
extern int g_00a2bf50_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2bf50(void*);
struct O_00a2bf50 { int m(void*, void*, int, int, int); };
extern O_00a2bf50 g_obj_00a2bf50;
extern int g_tail_00a2bf50;
void func_00a2bf50()
{
    g_obj_00a2bf50.m((void*)&g_00a2bf50_0, (void*)&g_00a2bf50_1, 276, 2, 0);
    tail_fn_00a2bf50(&g_tail_00a2bf50);
}