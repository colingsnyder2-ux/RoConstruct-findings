// from server: 100% by colin
// roc 2010-06 009d8ae0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8ae0
//
// 009d8ae0  6a00                 push 0
// 009d8ae2  6a02                 push 2
// 009d8ae4  68cc010000           push 0x1cc
// 009d8ae9  6840ffa200           push 0xa2ff40
// 009d8aee  68f0b2a400           push 0xa4b2f0
// 009d8af3  b92823c200           mov ecx, 0xc22328
// 009d8af8  e8a303d2ff           call 0x6f8ea0
// 009d8afd  6820839e00           push 0x9e8320
// 009d8b02  e85cffdcff           call 0x7a8a63
// 009d8b07  59                   pop ecx
// 009d8b08  c3                   ret 

extern int g_009d8ae0_0;
extern int g_009d8ae0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8ae0(void*);
struct O_009d8ae0 { int m(void*, void*, int, int, int); };
extern O_009d8ae0 g_obj_009d8ae0;
extern int g_tail_009d8ae0;
void func_009d8ae0()
{
    g_obj_009d8ae0.m((void*)&g_009d8ae0_0, (void*)&g_009d8ae0_1, 460, 2, 0);
    tail_fn_009d8ae0(&g_tail_009d8ae0);
}