// from server: 100% by auto
// roc 2008-06 00409ff0  unit: RBX::GlobalSettings::Item  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409ff0
//
// 00409ff0  e9abfaffff           jmp 0x409aa0

extern void G1_func_00409ff0();
void func_00409ff0()
{
    G1_func_00409ff0();
}
