// roc 2007-08 0057b310  unit: RBX::RootInstance  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b310
//
// 0057b310  e95bf9ffff           jmp 0x57ac70
// auto-matched from its assembly shape

extern void G1_func_0057b310();
void func_0057b310()
{
    G1_func_0057b310();
}
