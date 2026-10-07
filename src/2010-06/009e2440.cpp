// roc 2010-06 009e2440  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2440
//
// 009e2440  b9088ec100           mov ecx, 0xc18e08
// 009e2445  e906eed0ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009e2440 { void m(); };
extern T_func_009e2440 G1_func_009e2440;
void func_009e2440()
{
    G1_func_009e2440.m();
}
