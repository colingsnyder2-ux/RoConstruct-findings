// roc 2011-06 00a2ea60  unit: seg_00a20000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ea60
//
// 00a2ea60  b9475dcd00           mov ecx, 0xcd5d47
// 00a2ea65  e9b6d69fff           jmp 0x42c120
// auto-matched from its assembly shape

struct T_func_00a2ea60 { void m(); };
extern T_func_00a2ea60 G1_func_00a2ea60;
void func_00a2ea60()
{
    G1_func_00a2ea60.m();
}
