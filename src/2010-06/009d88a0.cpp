// from server: 100% by colin
// roc 2010-06 009d88a0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d88a0
//
// 009d88a0  6a00                 push 0
// 009d88a2  6a02                 push 2
// 009d88a4  68f8000000           push 0xf8
// 009d88a9  6840ffa200           push 0xa2ff40
// 009d88ae  687050a400           push 0xa45070
// 009d88b3  b91020c200           mov ecx, 0xc22010
// 009d88b8  e81305d2ff           call 0x6f8dd0
// 009d88bd  68e0829e00           push 0x9e82e0
// 009d88c2  e89c01ddff           call 0x7a8a63
// 009d88c7  59                   pop ecx
// 009d88c8  c3                   ret 

extern int g_009d88a0_0;
extern int g_009d88a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d88a0(void*);
struct O_009d88a0 { int m(void*, void*, int, int, int); };
extern O_009d88a0 g_obj_009d88a0;
extern int g_tail_009d88a0;
void func_009d88a0()
{
    g_obj_009d88a0.m((void*)&g_009d88a0_0, (void*)&g_009d88a0_1, 248, 2, 0);
    tail_fn_009d88a0(&g_tail_009d88a0);
}