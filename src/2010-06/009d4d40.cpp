// from server: 100% by colin
// roc 2010-06 009d4d40  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4d40
//
// 009d4d40  6a01                 push 1
// 009d4d42  6a00                 push 0
// 009d4d44  68188ea100           push 0xa18e18
// 009d4d49  688c9fa200           push 0xa29f8c
// 009d4d4e  68b0000000           push 0xb0
// 009d4d53  b984f4c100           mov ecx, 0xc1f484
// 009d4d58  e813c7cdff           call 0x6b1470
// 009d4d5d  6890619e00           push 0x9e6190
// 009d4d62  e8fc3cddff           call 0x7a8a63
// 009d4d67  59                   pop ecx
// 009d4d68  c3                   ret 

extern int g_009d4d40_1;
extern int g_009d4d40_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4d40(void*);
struct O_009d4d40 { int m(int, void*, void*, int, int); };
extern O_009d4d40 g_obj_009d4d40;
extern int g_tail_009d4d40;
void func_009d4d40()
{
    g_obj_009d4d40.m(176, (void*)&g_009d4d40_1, (void*)&g_009d4d40_2, 0, 1);
    tail_fn_009d4d40(&g_tail_009d4d40);
}