// from server: 100% by colin
// roc 2010-06 009d4c40  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4c40
//
// 009d4c40  6a01                 push 1
// 009d4c42  6a00                 push 0
// 009d4c44  68188ea100           push 0xa18e18
// 009d4c49  688c9fa200           push 0xa29f8c
// 009d4c4e  6898000000           push 0x98
// 009d4c53  b948f1c100           mov ecx, 0xc1f148
// 009d4c58  e853c6cdff           call 0x6b12b0
// 009d4c5d  6810619e00           push 0x9e6110
// 009d4c62  e8fc3dddff           call 0x7a8a63
// 009d4c67  59                   pop ecx
// 009d4c68  c3                   ret 

extern int g_009d4c40_1;
extern int g_009d4c40_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4c40(void*);
struct O_009d4c40 { int m(int, void*, void*, int, int); };
extern O_009d4c40 g_obj_009d4c40;
extern int g_tail_009d4c40;
void func_009d4c40()
{
    g_obj_009d4c40.m(152, (void*)&g_009d4c40_1, (void*)&g_009d4c40_2, 0, 1);
    tail_fn_009d4c40(&g_tail_009d4c40);
}