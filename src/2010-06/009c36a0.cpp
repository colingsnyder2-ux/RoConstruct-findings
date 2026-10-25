// from server: 100% by colin
// roc 2010-06 009c36a0  unit: seg_009c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c36a0
//
// 009c36a0  6a00                 push 0
// 009c36a2  6a0f                 push 0xf
// 009c36a4  6895000000           push 0x95
// 009c36a9  68e4ada000           push 0xa0ade4
// 009c36ae  68f0ada000           push 0xa0adf0
// 009c36b3  b9ac0ac000           mov ecx, 0xc00aac
// 009c36b8  e8730ba8ff           call 0x444230
// 009c36bd  6820b39d00           push 0x9db320
// 009c36c2  e89c53deff           call 0x7a8a63
// 009c36c7  59                   pop ecx
// 009c36c8  c3                   ret 

extern int g_009c36a0_0;
extern int g_009c36a0_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_009c36a0(void*);
struct O_009c36a0 { int m(void*, void*, int, int, int); };
extern O_009c36a0 g_obj_009c36a0;
extern int g_tail_009c36a0;
void func_009c36a0()
{
    g_obj_009c36a0.m((void*)&g_009c36a0_0, (void*)&g_009c36a0_1, 149, 15, 0);
    tail_fn_009c36a0(&g_tail_009c36a0);
}