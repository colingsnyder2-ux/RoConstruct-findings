// from server: 100% by colin
// roc 2010-06 009c9bc0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c9bc0
//
// 009c9bc0  6a00                 push 0
// 009c9bc2  6a0f                 push 0xf
// 009c9bc4  689d000000           push 0x9d
// 009c9bc9  685c8ea100           push 0xa18e5c
// 009c9bce  6808a5a200           push 0xa2a508
// 009c9bd3  b9acbcc000           mov ecx, 0xc0bcac
// 009c9bd8  e8d35abdff           call 0x59f6b0
// 009c9bdd  6850ef9d00           push 0x9def50
// 009c9be2  e87ceeddff           call 0x7a8a63
// 009c9be7  59                   pop ecx
// 009c9be8  c3                   ret 

extern int g_009c9bc0_0;
extern int g_009c9bc0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c9bc0(void*);
struct O_009c9bc0 { int m(void*, void*, int, int, int); };
extern O_009c9bc0 g_obj_009c9bc0;
extern int g_tail_009c9bc0;
void func_009c9bc0()
{
    g_obj_009c9bc0.m((void*)&g_009c9bc0_0, (void*)&g_009c9bc0_1, 157, 15, 0);
    tail_fn_009c9bc0(&g_tail_009c9bc0);
}