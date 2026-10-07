// roc 2007-08 00778770  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778770
//
// 00778770  b908e68b00           mov ecx, 0x8be608
// 00778775  e9f6fcc9ff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_00778770 { void m(); };
extern T_func_00778770 G1_func_00778770;
void func_00778770()
{
    G1_func_00778770.m();
}
