// roc 2007-08 00776ef0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776ef0
//
// 00776ef0  e82be5f7ff           call 0x6f5420
// 00776ef5  50                   push eax
// 00776ef6  e8f595ebff           call 0x6304f0
// 00776efb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776ef0();
extern int __stdcall G2_func_00776ef0(int);
int func_00776ef0()
{
    return G2_func_00776ef0(G1_func_00776ef0());
}
