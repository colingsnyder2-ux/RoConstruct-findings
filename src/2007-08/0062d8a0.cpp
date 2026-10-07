// roc 2007-08 0062d8a0  unit: RBX::Flying  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0062d8a0
//
// 0062d8a0  e98bffffff           jmp 0x62d830
// auto-matched from its assembly shape

extern void G1_func_0062d8a0();
void func_0062d8a0()
{
    G1_func_0062d8a0();
}
