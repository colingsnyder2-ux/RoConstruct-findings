// from server: 100% by colin
// roc 2011-06 00a2e140  unit: seg_00a20000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2e140
//
// 00a2e140  6a00                 push 0
// 00a2e142  681c64a900           push 0xa9641c
// 00a2e147  685c6ca900           push 0xa96c5c
// 00a2e14c  6894000000           push 0x94
// 00a2e151  b98c49cd00           mov ecx, 0xcd498c
// 00a2e156  e88584d0ff           call 0x7365e0
// 00a2e15b  6890f1a300           push 0xa3f190
// 00a2e160  e8f8cfddff           call 0x80b15d
// 00a2e165  59                   pop ecx
// 00a2e166  c3                   ret 

extern int g_00a2e140_1;
extern int g_00a2e140_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a2e140(void*);
struct O_00a2e140 { int m(int, void*, void*, int); };
extern O_00a2e140 g_obj_00a2e140;
extern int g_tail_00a2e140;
void func_00a2e140()
{
    g_obj_00a2e140.m(148, (void*)&g_00a2e140_1, (void*)&g_00a2e140_2, 0);
    tail_fn_00a2e140(&g_tail_00a2e140);
}