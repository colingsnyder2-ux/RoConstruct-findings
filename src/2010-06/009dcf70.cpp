// roc 2010-06 009dcf70  unit: seg_009d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcf70
//
// 009dcf70  b94056c000           mov ecx, 0xc05640
// 009dcf75  e906d6a2ff           jmp 0x40a580
// auto-matched from its assembly shape

struct T_func_009dcf70 { void m(); };
extern T_func_009dcf70 G1_func_009dcf70;
void func_009dcf70()
{
    G1_func_009dcf70.m();
}
