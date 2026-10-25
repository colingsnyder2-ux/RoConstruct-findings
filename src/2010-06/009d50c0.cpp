// from server: 100% by colin
// roc 2010-06 009d50c0  unit: seg_009d0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d50c0
//
// 009d50c0  6a00                 push 0
// 009d50c2  6a0f                 push 0xf
// 009d50c4  689c000000           push 0x9c
// 009d50c9  685c8ea100           push 0xa18e5c
// 009d50ce  68fc16a400           push 0xa416fc
// 009d50d3  b984f1c100           mov ecx, 0xc1f184
// 009d50d8  e8438ccdff           call 0x6add20
// 009d50dd  68105f9e00           push 0x9e5f10
// 009d50e2  e87c39ddff           call 0x7a8a63
// 009d50e7  59                   pop ecx
// 009d50e8  c3                   ret 

extern int g_009d50c0_0;
extern int g_009d50c0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009d50c0(void*);
struct O_009d50c0 { int m(void*, void*, int, int, int); };
extern O_009d50c0 g_obj_009d50c0;
extern int g_tail_009d50c0;
void func_009d50c0()
{
    g_obj_009d50c0.m((void*)&g_009d50c0_0, (void*)&g_009d50c0_1, 156, 15, 0);
    tail_fn_009d50c0(&g_tail_009d50c0);
}