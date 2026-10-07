// roc 2010-06 009da840  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da840
//
// 009da840  b93cfabf00           mov ecx, 0xbffa3c
// 009da845  e956e7a8ff           jmp 0x468fa0
// auto-matched from its assembly shape

struct T_func_009da840 { void m(); };
extern T_func_009da840 G1_func_009da840;
void func_009da840()
{
    G1_func_009da840.m();
}
