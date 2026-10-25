// from server: 100% by colin
// roc 2010-06 009c7ab0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c7ab0
//
// 009c7ab0  6a00                 push 0
// 009c7ab2  6a0f                 push 0xf
// 009c7ab4  68c8000000           push 0xc8
// 009c7ab9  688ca4a100           push 0xa1a48c
// 009c7abe  68a4a4a100           push 0xa1a4a4
// 009c7ac3  b92460c000           mov ecx, 0xc06024
// 009c7ac8  e8f3f5b0ff           call 0x4d70c0
// 009c7acd  68e0d19d00           push 0x9dd1e0
// 009c7ad2  e88c0fdeff           call 0x7a8a63
// 009c7ad7  59                   pop ecx
// 009c7ad8  c3                   ret 

extern int g_009c7ab0_0;
extern int g_009c7ab0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c7ab0(void*);
struct O_009c7ab0 { int m(void*, void*, int, int, int); };
extern O_009c7ab0 g_obj_009c7ab0;
extern int g_tail_009c7ab0;
void func_009c7ab0()
{
    g_obj_009c7ab0.m((void*)&g_009c7ab0_0, (void*)&g_009c7ab0_1, 200, 15, 0);
    tail_fn_009c7ab0(&g_tail_009c7ab0);
}