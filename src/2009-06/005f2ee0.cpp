// roc 2009-06 005f2ee0  unit: RBX::PartInstance  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f2ee0
//
// 005f2ee0  b83f000000           mov eax, 0x3f
// 005f2ee5  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_005f2ee0()
{
    return 0x3fu;
}
