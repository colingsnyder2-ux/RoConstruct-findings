// roc 2011-06 00a2ee90  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ee90
//
// 00a2ee90  e83b24e1ff           call 0x8412d0
// 00a2ee95  50                   push eax
// 00a2ee96  e883bbddff           call 0x80aa1e
// 00a2ee9b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ee90();
extern int __stdcall G2_func_00a2ee90(int);
int func_00a2ee90()
{
    return G2_func_00a2ee90(G1_func_00a2ee90());
}
