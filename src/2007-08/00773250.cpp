// roc 2007-08 00773250  unit: seg_00770000  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00773250
//
// 00773250  e90b34e2ff           jmp 0x596660
// auto-matched from its assembly shape

extern void G1_func_00773250();
void func_00773250()
{
    G1_func_00773250();
}
