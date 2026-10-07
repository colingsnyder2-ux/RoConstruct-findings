// roc 2011-06 00a35460  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35460
//
// 00a35460  b978d7cb00           mov ecx, 0xcbd778
// 00a35465  e9567ca7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a35460 { void m(); };
extern T_func_00a35460 G1_func_00a35460;
void func_00a35460()
{
    G1_func_00a35460.m();
}
