// from server: 100% by auto
// roc 2008-06 006492d0  unit: RBX::Ball  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006492d0
//
// 006492d0  b813000000           mov eax, 0x13
// 006492d5  c3                   ret 

unsigned int func_006492d0()
{
    return 0x13u;
}
