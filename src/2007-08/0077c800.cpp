// roc 2007-08 0077c800  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c800
//
// 0077c800  b97c7d8c00           mov ecx, 0x8c7d7c
// 0077c805  e906aec9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077c800 { void m(); };
extern T_func_0077c800 G1_func_0077c800;
void func_0077c800()
{
    G1_func_0077c800.m();
}
