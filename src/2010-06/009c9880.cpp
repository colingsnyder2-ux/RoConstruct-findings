// from server: 100% by colin
// roc 2010-06 009c9880  unit: seg_009c0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9880
//
// 009c9880  6a01                 push 1
// 009c9882  6a00                 push 0
// 009c9884  68389fa200           push 0xa29f38
// 009c9889  68409fa200           push 0xa29f40
// 009c988e  6a7c                 push 0x7c
// 009c9890  b944b6c000           mov ecx, 0xc0b644
// 009c9895  e806e8bcff           call 0x5980a0
// 009c989a  6810ec9d00           push 0x9dec10
// 009c989f  e8bff1ddff           call 0x7a8a63
// 009c98a4  59                   pop ecx
// 009c98a5  c3                   ret 

extern int g_009c9880_1;
extern int g_009c9880_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c9880(void*);
struct O_009c9880 { int m(int, void*, void*, int, int); };
extern O_009c9880 g_obj_009c9880;
extern int g_tail_009c9880;
void func_009c9880()
{
    g_obj_009c9880.m(124, (void*)&g_009c9880_1, (void*)&g_009c9880_2, 0, 1);
    tail_fn_009c9880(&g_tail_009c9880);
}