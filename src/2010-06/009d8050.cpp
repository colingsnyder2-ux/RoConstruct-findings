// from server: 100% by colin
// roc 2010-06 009d8050  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d8050
//
// 009d8050  6a01                 push 1
// 009d8052  6a00                 push 0
// 009d8054  6884e0a200           push 0xa2e084
// 009d8059  6860aaa300           push 0xa3aa60
// 009d805e  68ec000000           push 0xec
// 009d8063  b9b819c200           mov ecx, 0xc219b8
// 009d8068  e843b2d1ff           call 0x6f32b0
// 009d806d  68b07e9e00           push 0x9e7eb0
// 009d8072  e8ec09ddff           call 0x7a8a63
// 009d8077  59                   pop ecx
// 009d8078  c3                   ret 

extern int g_009d8050_1;
extern int g_009d8050_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d8050(void*);
struct O_009d8050 { int m(int, void*, void*, int, int); };
extern O_009d8050 g_obj_009d8050;
extern int g_tail_009d8050;
void func_009d8050()
{
    g_obj_009d8050.m(236, (void*)&g_009d8050_1, (void*)&g_009d8050_2, 0, 1);
    tail_fn_009d8050(&g_tail_009d8050);
}