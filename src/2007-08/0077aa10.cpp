// roc 2007-08 0077aa10  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aa10
//
// 0077aa10  b9b8478c00           mov ecx, 0x8c47b8
// 0077aa15  e9a6c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aa10 { void m(); };
extern T_func_0077aa10 G1_func_0077aa10;
void func_0077aa10()
{
    G1_func_0077aa10.m();
}
