// from server: 100% by colin
// roc 2010-06 009c2df0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c2df0
//
// 009c2df0  6a00                 push 0
// 009c2df2  6a0f                 push 0xf
// 009c2df4  6898000000           push 0x98
// 009c2df9  683814a000           push 0xa01438
// 009c2dfe  684414a000           push 0xa01444
// 009c2e03  b91c06c000           mov ecx, 0xc0061c
// 009c2e08  e8e379a4ff           call 0x40a7f0
// 009c2e0d  6880aa9d00           push 0x9daa80
// 009c2e12  e84c5cdeff           call 0x7a8a63
// 009c2e17  59                   pop ecx
// 009c2e18  c3                   ret 

extern int g_009c2df0_0;
extern int g_009c2df0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c2df0(void*);
struct O_009c2df0 { int m(void*, void*, int, int, int); };
extern O_009c2df0 g_obj_009c2df0;
extern int g_tail_009c2df0;
void func_009c2df0()
{
    g_obj_009c2df0.m((void*)&g_009c2df0_0, (void*)&g_009c2df0_1, 152, 15, 0);
    tail_fn_009c2df0(&g_tail_009c2df0);
}