// roc 2007-08 007762b0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007762b0
//
// 007762b0  e8ab3cecff           call 0x639f60
// 007762b5  50                   push eax
// 007762b6  e835a2ebff           call 0x6304f0
// 007762bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007762b0();
extern int __stdcall G2_func_007762b0(int);
int func_007762b0()
{
    return G2_func_007762b0(G1_func_007762b0());
}
