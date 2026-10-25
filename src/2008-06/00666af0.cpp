// from server: 100% by auto
// roc 2008-06 00666af0  unit: RBX::HUMAN::Landed  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666af0
//
// 00666af0  e95bffffff           jmp 0x666a50

extern void G1_func_00666af0();
void func_00666af0()
{
    G1_func_00666af0();
}
