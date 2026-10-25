// from server: 100% by colin
// roc 2010-06 009c3700  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c3700
//
// 009c3700  6a00                 push 0
// 009c3702  6a0f                 push 0xf
// 009c3704  6898000000           push 0x98
// 009c3709  68e4ada000           push 0xa0ade4
// 009c370e  6808aea000           push 0xa0ae08
// 009c3713  b9ec0ac000           mov ecx, 0xc00aec
// 009c3718  e8e30ba8ff           call 0x444300
// 009c371d  68a0b39d00           push 0x9db3a0
// 009c3722  e83c53deff           call 0x7a8a63
// 009c3727  59                   pop ecx
// 009c3728  c3                   ret 

extern int g_009c3700_0;
extern int g_009c3700_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c3700(void*);
struct O_009c3700 { int m(void*, void*, int, int, int); };
extern O_009c3700 g_obj_009c3700;
extern int g_tail_009c3700;
void func_009c3700()
{
    g_obj_009c3700.m((void*)&g_009c3700_0, (void*)&g_009c3700_1, 152, 15, 0);
    tail_fn_009c3700(&g_tail_009c3700);
}