// from server: 100% by colin
// roc 2009-06 0088e0b0  unit: seg_00880000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088e0b0
//
// 0088e0b0  6a07                 push 7
// 0088e0b2  68bc000000           push 0xbc
// 0088e0b7  68584e8c00           push 0x8c4e58
// 0088e0bc  68d4f88d00           push 0x8df8d4
// 0088e0c1  b940c5a400           mov ecx, 0xa4c540
// 0088e0c6  e8e503dcff           call 0x64e4b0
// 0088e0cb  68b0a68900           push 0x89a6b0
// 0088e0d0  e826bae8ff           call 0x719afb
// 0088e0d5  59                   pop ecx
// 0088e0d6  c3                   ret 

extern int g_0088e0b0_0;
extern int g_0088e0b0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_0088e0b0(void*);
struct O_0088e0b0 { int m(void*, void*, int, int); };
extern O_0088e0b0 g_obj_0088e0b0;
extern int g_tail_0088e0b0;
void func_0088e0b0()
{
    g_obj_0088e0b0.m((void*)&g_0088e0b0_0, (void*)&g_0088e0b0_1, 188, 7);
    tail_fn_0088e0b0(&g_tail_0088e0b0);
}