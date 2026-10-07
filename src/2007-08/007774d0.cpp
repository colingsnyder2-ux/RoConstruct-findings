// roc 2007-08 007774d0  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007774d0
//
// 007774d0  b948b08b00           mov ecx, 0x8bb048
// 007774d5  e9960fcaff           jmp 0x418470
// auto-matched from its assembly shape

struct T_func_007774d0 { void m(); };
extern T_func_007774d0 G1_func_007774d0;
void func_007774d0()
{
    G1_func_007774d0.m();
}
