// roc 2010-06 005a13f6  unit: std::runtime_error  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a13f6
//
// 005a13f6  e9d1fdffff           jmp 0x5a11cc
// auto-matched from its assembly shape

extern void G1_func_005a13f6();
void func_005a13f6()
{
    G1_func_005a13f6();
}
