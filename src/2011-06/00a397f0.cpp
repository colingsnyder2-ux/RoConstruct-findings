// roc 2011-06 00a397f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a397f0
//
// 00a397f0  b908afcc00           mov ecx, 0xccaf08
// 00a397f5  e9162da7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a397f0 { void m(); };
extern T_func_00a397f0 G1_func_00a397f0;
void func_00a397f0()
{
    G1_func_00a397f0.m();
}
