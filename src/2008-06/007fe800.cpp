// roc 2008-06 007fe800  unit: seg_007f0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe800
//
// 007fe800  b9207c9700           mov ecx, 0x977c20
// 007fe805  e9b6c3c0ff           jmp 0x40abc0
// auto-matched from its assembly shape

struct T_func_007fe800 { void m(); };
extern T_func_007fe800 G1_func_007fe800;
void func_007fe800()
{
    G1_func_007fe800.m();
}
