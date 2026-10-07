// roc 2007-08 0057b490  unit: RBX::RootInstance  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b490
//
// 0057b490  e93bcbfeff           jmp 0x567fd0
// auto-matched from its assembly shape

extern void G1_func_0057b490();
void func_0057b490()
{
    G1_func_0057b490();
}
