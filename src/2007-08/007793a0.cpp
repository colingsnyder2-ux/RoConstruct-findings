// roc 2007-08 007793a0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007793a0
//
// 007793a0  b9b00d8c00           mov ecx, 0x8c0db0
// 007793a5  e966e2c9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_007793a0 { void m(); };
extern T_func_007793a0 G1_func_007793a0;
void func_007793a0()
{
    G1_func_007793a0.m();
}
