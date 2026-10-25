// from server: 100% by colin
// roc 2010-06 009c3670  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c3670
//
// 009c3670  6a00                 push 0
// 009c3672  6a0f                 push 0xf
// 009c3674  6894000000           push 0x94
// 009c3679  68e4ada000           push 0xa0ade4
// 009c367e  68d8ada000           push 0xa0add8
// 009c3683  b98c0ac000           mov ecx, 0xc00a8c
// 009c3688  e8a30ba8ff           call 0x444230
// 009c368d  6840b39d00           push 0x9db340
// 009c3692  e8cc53deff           call 0x7a8a63
// 009c3697  59                   pop ecx
// 009c3698  c3                   ret 

extern int g_009c3670_0;
extern int g_009c3670_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c3670(void*);
struct O_009c3670 { int m(void*, void*, int, int, int); };
extern O_009c3670 g_obj_009c3670;
extern int g_tail_009c3670;
void func_009c3670()
{
    g_obj_009c3670.m((void*)&g_009c3670_0, (void*)&g_009c3670_1, 148, 15, 0);
    tail_fn_009c3670(&g_tail_009c3670);
}