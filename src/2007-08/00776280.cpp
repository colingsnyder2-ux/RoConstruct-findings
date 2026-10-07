// roc 2007-08 00776280  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776280
//
// 00776280  e89bfaebff           call 0x635d20
// 00776285  50                   push eax
// 00776286  e865a2ebff           call 0x6304f0
// 0077628b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776280();
extern int __stdcall G2_func_00776280(int);
int func_00776280()
{
    return G2_func_00776280(G1_func_00776280());
}
