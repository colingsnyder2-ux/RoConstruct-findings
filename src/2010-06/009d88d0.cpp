// from server: 100% by colin
// roc 2010-06 009d88d0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d88d0
//
// 009d88d0  6a00                 push 0
// 009d88d2  6a02                 push 2
// 009d88d4  6820010000           push 0x120
// 009d88d9  6840ffa200           push 0xa2ff40
// 009d88de  6888b2a400           push 0xa4b288
// 009d88e3  b99022c200           mov ecx, 0xc22290
// 009d88e8  e8e304d2ff           call 0x6f8dd0
// 009d88ed  6800839e00           push 0x9e8300
// 009d88f2  e86c01ddff           call 0x7a8a63
// 009d88f7  59                   pop ecx
// 009d88f8  c3                   ret 

extern int g_009d88d0_0;
extern int g_009d88d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d88d0(void*);
struct O_009d88d0 { int m(void*, void*, int, int, int); };
extern O_009d88d0 g_obj_009d88d0;
extern int g_tail_009d88d0;
void func_009d88d0()
{
    g_obj_009d88d0.m((void*)&g_009d88d0_0, (void*)&g_009d88d0_1, 288, 2, 0);
    tail_fn_009d88d0(&g_tail_009d88d0);
}