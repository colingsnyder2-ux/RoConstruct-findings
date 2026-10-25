// from server: 100% by colin
// roc 2011-06 00a28b80  unit: seg_00a20000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a28b80
//
// 00a28b80  6a00                 push 0
// 00a28b82  6a02                 push 2
// 00a28b84  6894020000           push 0x294
// 00a28b89  688064a900           push 0xa96480
// 00a28b8e  686440aa00           push 0xaa4064
// 00a28b93  b90003cd00           mov ecx, 0xcd0300
// 00a28b98  e8032cc8ff           call 0x6ab7a0
// 00a28b9d  68a0c3a300           push 0xa3c3a0
// 00a28ba2  e8b625deff           call 0x80b15d
// 00a28ba7  59                   pop ecx
// 00a28ba8  c3                   ret 

extern int g_00a28b80_0;
extern int g_00a28b80_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a28b80(void*);
struct O_00a28b80 { int m(void*, void*, int, int, int); };
extern O_00a28b80 g_obj_00a28b80;
extern int g_tail_00a28b80;
void func_00a28b80()
{
    g_obj_00a28b80.m((void*)&g_00a28b80_0, (void*)&g_00a28b80_1, 660, 2, 0);
    tail_fn_00a28b80(&g_tail_00a28b80);
}