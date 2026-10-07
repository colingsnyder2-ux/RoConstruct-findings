// roc 2007-08 0077aa60  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077aa60
//
// 0077aa60  b9a8398c00           mov ecx, 0x8c39a8
// 0077aa65  e956c2c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077aa60 { void m(); };
extern T_func_0077aa60 G1_func_0077aa60;
void func_0077aa60()
{
    G1_func_0077aa60.m();
}
