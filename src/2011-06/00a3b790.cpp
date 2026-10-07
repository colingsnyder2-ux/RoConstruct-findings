// roc 2011-06 00a3b790  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b790
//
// 00a3b790  b9a0edcc00           mov ecx, 0xcceda0
// 00a3b795  e9b64ec4ff           jmp 0x680650
// auto-matched from its assembly shape

struct T_func_00a3b790 { void m(); };
extern T_func_00a3b790 G1_func_00a3b790;
void func_00a3b790()
{
    G1_func_00a3b790.m();
}
