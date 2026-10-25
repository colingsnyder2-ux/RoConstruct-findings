// from server: 100% by colin
// roc 2011-06 00a28bb0  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28bb0
//
// 00a28bb0  6a00                 push 0
// 00a28bb2  6a02                 push 2
// 00a28bb4  68b4020000           push 0x2b4
// 00a28bb9  688064a900           push 0xa96480
// 00a28bbe  688440aa00           push 0xaa4084
// 00a28bc3  b9c003cd00           mov ecx, 0xcd03c0
// 00a28bc8  e8d32bc8ff           call 0x6ab7a0
// 00a28bcd  68c0c3a300           push 0xa3c3c0
// 00a28bd2  e88625deff           call 0x80b15d
// 00a28bd7  59                   pop ecx
// 00a28bd8  c3                   ret 

extern int g_00a28bb0_0;
extern int g_00a28bb0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28bb0(void*);
struct O_00a28bb0 { int m(void*, void*, int, int, int); };
extern O_00a28bb0 g_obj_00a28bb0;
extern int g_tail_00a28bb0;
void func_00a28bb0()
{
    g_obj_00a28bb0.m((void*)&g_00a28bb0_0, (void*)&g_00a28bb0_1, 692, 2, 0);
    tail_fn_00a28bb0(&g_tail_00a28bb0);
}