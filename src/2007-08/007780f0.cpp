// roc 2007-08 007780f0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007780f0
//
// 007780f0  b9f8dc8b00           mov ecx, 0x8bdcf8
// 007780f5  e9c6ebc9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_007780f0 { void m(); };
extern T_func_007780f0 G1_func_007780f0;
void func_007780f0()
{
    G1_func_007780f0.m();
}
