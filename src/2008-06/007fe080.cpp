// roc 2008-06 007fe080  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe080
//
// 007fe080  b948669700           mov ecx, 0x976648
// 007fe085  e936cbc0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe080 { void m(); };
extern T_func_007fe080 G1_func_007fe080;
void func_007fe080()
{
    G1_func_007fe080.m();
}
