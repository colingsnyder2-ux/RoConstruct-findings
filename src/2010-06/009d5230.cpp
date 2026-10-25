// from server: 100% by colin
// roc 2010-06 009d5230  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d5230
//
// 009d5230  6a01                 push 1
// 009d5232  6a00                 push 0
// 009d5234  68188ea100           push 0xa18e18
// 009d5239  688c9fa200           push 0xa29f8c
// 009d523e  689c000000           push 0x9c
// 009d5243  b9c8f0c100           mov ecx, 0xc1f0c8
// 009d5248  e823c9cdff           call 0x6b1b70
// 009d524d  6890639e00           push 0x9e6390
// 009d5252  e80c38ddff           call 0x7a8a63
// 009d5257  59                   pop ecx
// 009d5258  c3                   ret 

extern int g_009d5230_1;
extern int g_009d5230_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d5230(void*);
struct O_009d5230 { int m(int, void*, void*, int, int); };
extern O_009d5230 g_obj_009d5230;
extern int g_tail_009d5230;
void func_009d5230()
{
    g_obj_009d5230.m(156, (void*)&g_009d5230_1, (void*)&g_009d5230_2, 0, 1);
    tail_fn_009d5230(&g_tail_009d5230);
}