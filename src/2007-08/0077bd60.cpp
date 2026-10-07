// roc 2007-08 0077bd60  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bd60
//
// 0077bd60  b968688c00           mov ecx, 0x8c6868
// 0077bd65  e956afc9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077bd60 { void m(); };
extern T_func_0077bd60 G1_func_0077bd60;
void func_0077bd60()
{
    G1_func_0077bd60.m();
}
