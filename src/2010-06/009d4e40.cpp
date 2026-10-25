// from server: 100% by colin
// roc 2010-06 009d4e40  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4e40
//
// 009d4e40  6a01                 push 1
// 009d4e42  6a00                 push 0
// 009d4e44  68188ea100           push 0xa18e18
// 009d4e49  688c9fa200           push 0xa29f8c
// 009d4e4e  68b0000000           push 0xb0
// 009d4e53  b9a4efc100           mov ecx, 0xc1efa4
// 009d4e58  e8d3c7cdff           call 0x6b1630
// 009d4e5d  6810629e00           push 0x9e6210
// 009d4e62  e8fc3bddff           call 0x7a8a63
// 009d4e67  59                   pop ecx
// 009d4e68  c3                   ret 

extern int g_009d4e40_1;
extern int g_009d4e40_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4e40(void*);
struct O_009d4e40 { int m(int, void*, void*, int, int); };
extern O_009d4e40 g_obj_009d4e40;
extern int g_tail_009d4e40;
void func_009d4e40()
{
    g_obj_009d4e40.m(176, (void*)&g_009d4e40_1, (void*)&g_009d4e40_2, 0, 1);
    tail_fn_009d4e40(&g_tail_009d4e40);
}