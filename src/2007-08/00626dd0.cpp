// roc 2007-08 00626dd0  unit: RBX::Jumping  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00626dd0
//
// 00626dd0  e98bffffff           jmp 0x626d60
// auto-matched from its assembly shape

extern void G1_func_00626dd0();
void func_00626dd0()
{
    G1_func_00626dd0();
}
