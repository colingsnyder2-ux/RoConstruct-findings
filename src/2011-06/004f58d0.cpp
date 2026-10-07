// roc 2011-06 004f58d0  unit: RBX::VSystemAddress::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f58d0
//
// 004f58d0  b8b4a7c200           mov eax, 0xc2a7b4
// 004f58d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004f58d0()
{
    return &G;
}
