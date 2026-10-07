// roc 2007-08 00401020  unit: seg_00400000  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00401020
//
// 00401020  e9cbbb0400           jmp 0x44cbf0
// auto-matched from its assembly shape

extern void G1_func_00401020();
void func_00401020()
{
    G1_func_00401020();
}
