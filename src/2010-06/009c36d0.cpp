// from server: 100% by colin
// roc 2010-06 009c36d0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c36d0
//
// 009c36d0  6a00                 push 0
// 009c36d2  6a0f                 push 0xf
// 009c36d4  6896000000           push 0x96
// 009c36d9  68e4ada000           push 0xa0ade4
// 009c36de  68fcada000           push 0xa0adfc
// 009c36e3  b9cc0ac000           mov ecx, 0xc00acc
// 009c36e8  e8430ba8ff           call 0x444230
// 009c36ed  6800b39d00           push 0x9db300
// 009c36f2  e86c53deff           call 0x7a8a63
// 009c36f7  59                   pop ecx
// 009c36f8  c3                   ret 

extern int g_009c36d0_0;
extern int g_009c36d0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c36d0(void*);
struct O_009c36d0 { int m(void*, void*, int, int, int); };
extern O_009c36d0 g_obj_009c36d0;
extern int g_tail_009c36d0;
void func_009c36d0()
{
    g_obj_009c36d0.m((void*)&g_009c36d0_0, (void*)&g_009c36d0_1, 150, 15, 0);
    tail_fn_009c36d0(&g_tail_009c36d0);
}