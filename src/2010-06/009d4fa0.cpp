// from server: 100% by colin
// roc 2010-06 009d4fa0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d4fa0
//
// 009d4fa0  6a01                 push 1
// 009d4fa2  6a00                 push 0
// 009d4fa4  68188ea100           push 0xa18e18
// 009d4fa9  688c9fa200           push 0xa29f8c
// 009d4fae  68a0000000           push 0xa0
// 009d4fb3  b9a4f1c100           mov ecx, 0xc1f1a4
// 009d4fb8  e833c8cdff           call 0x6b17f0
// 009d4fbd  6890629e00           push 0x9e6290
// 009d4fc2  e89c3addff           call 0x7a8a63
// 009d4fc7  59                   pop ecx
// 009d4fc8  c3                   ret 

extern int g_009d4fa0_1;
extern int g_009d4fa0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d4fa0(void*);
struct O_009d4fa0 { int m(int, void*, void*, int, int); };
extern O_009d4fa0 g_obj_009d4fa0;
extern int g_tail_009d4fa0;
void func_009d4fa0()
{
    g_obj_009d4fa0.m(160, (void*)&g_009d4fa0_1, (void*)&g_009d4fa0_2, 0, 1);
    tail_fn_009d4fa0(&g_tail_009d4fa0);
}