// from server: 100% by colin
// roc 2010-06 009c64c0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c64c0
//
// 009c64c0  6a01                 push 1
// 009c64c2  6a00                 push 0
// 009c64c4  68208fa100           push 0xa18f20
// 009c64c9  68108fa100           push 0xa18f10
// 009c64ce  6824010000           push 0x124
// 009c64d3  b9ec45c000           mov ecx, 0xc045ec
// 009c64d8  e8b314afff           call 0x4b7990
// 009c64dd  68f0c39d00           push 0x9dc3f0
// 009c64e2  e87c25deff           call 0x7a8a63
// 009c64e7  59                   pop ecx
// 009c64e8  c3                   ret 

extern int g_009c64c0_1;
extern int g_009c64c0_2;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c64c0(void*);
struct O_009c64c0 { int m(int, void*, void*, int, int); };
extern O_009c64c0 g_obj_009c64c0;
extern int g_tail_009c64c0;
void func_009c64c0()
{
    g_obj_009c64c0.m(292, (void*)&g_009c64c0_1, (void*)&g_009c64c0_2, 0, 1);
    tail_fn_009c64c0(&g_tail_009c64c0);
}