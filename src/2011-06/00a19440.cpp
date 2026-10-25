// from server: 100% by colin
// roc 2011-06 00a19440  unit: seg_00a10000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a19440
//
// 00a19440  6a00                 push 0
// 00a19442  6a1f                 push 0x1f
// 00a19444  68d4000000           push 0xd4
// 00a19449  6818a2a700           push 0xa7a218
// 00a1944e  68f0a3a700           push 0xa7a3f0
// 00a19453  b9987bcb00           mov ecx, 0xcb7b98
// 00a19458  e8339facff           call 0x4e3390
// 00a1945d  684035a300           push 0xa33540
// 00a19462  e8f61cdfff           call 0x80b15d
// 00a19467  59                   pop ecx
// 00a19468  c3                   ret 

extern int g_00a19440_0;
extern int g_00a19440_1;
// roc-flags: /O2 /GS- /EHsc /MD /Ob2 /Oy /GF
extern "C" void tail_fn_00a19440(void*);
struct O_00a19440 { int m(void*, void*, int, int, int); };
extern O_00a19440 g_obj_00a19440;
extern int g_tail_00a19440;
void func_00a19440()
{
    g_obj_00a19440.m((void*)&g_00a19440_0, (void*)&g_00a19440_1, 212, 31, 0);
    tail_fn_00a19440(&g_tail_00a19440);
}