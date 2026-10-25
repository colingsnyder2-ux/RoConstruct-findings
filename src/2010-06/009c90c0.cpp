// from server: 100% by colin
// roc 2010-06 009c90c0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c90c0
//
// 009c90c0  6a00                 push 0
// 009c90c2  6a0f                 push 0xf
// 009c90c4  68a5000000           push 0xa5
// 009c90c9  685c99a200           push 0xa2995c
// 009c90ce  684899a200           push 0xa29948
// 009c90d3  b9f0a9c000           mov ecx, 0xc0a9f0
// 009c90d8  e87382bcff           call 0x591350
// 009c90dd  6880e89d00           push 0x9de880
// 009c90e2  e87cf9ddff           call 0x7a8a63
// 009c90e7  59                   pop ecx
// 009c90e8  c3                   ret 

extern int g_009c90c0_0;
extern int g_009c90c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c90c0(void*);
struct O_009c90c0 { int m(void*, void*, int, int, int); };
extern O_009c90c0 g_obj_009c90c0;
extern int g_tail_009c90c0;
void func_009c90c0()
{
    g_obj_009c90c0.m((void*)&g_009c90c0_0, (void*)&g_009c90c0_1, 165, 15, 0);
    tail_fn_009c90c0(&g_tail_009c90c0);
}