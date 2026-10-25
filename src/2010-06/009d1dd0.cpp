// from server: 100% by colin
// roc 2010-06 009d1dd0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d1dd0
//
// 009d1dd0  6a00                 push 0
// 009d1dd2  6a02                 push 2
// 009d1dd4  6864030000           push 0x364
// 009d1dd9  6840ffa200           push 0xa2ff40
// 009d1dde  683caba300           push 0xa3ab3c
// 009d1de3  b988cac100           mov ecx, 0xc1ca88
// 009d1de8  e80307c9ff           call 0x6624f0
// 009d1ded  6820439e00           push 0x9e4320
// 009d1df2  e86c6cddff           call 0x7a8a63
// 009d1df7  59                   pop ecx
// 009d1df8  c3                   ret 

extern int g_009d1dd0_0;
extern int g_009d1dd0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d1dd0(void*);
struct O_009d1dd0 { int m(void*, void*, int, int, int); };
extern O_009d1dd0 g_obj_009d1dd0;
extern int g_tail_009d1dd0;
void func_009d1dd0()
{
    g_obj_009d1dd0.m((void*)&g_009d1dd0_0, (void*)&g_009d1dd0_1, 868, 2, 0);
    tail_fn_009d1dd0(&g_tail_009d1dd0);
}