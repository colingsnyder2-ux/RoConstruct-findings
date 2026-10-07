// roc 2011-06 004f4ae0  unit: RBX::VRbxRay::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4ae0
//
// 004f4ae0  b860a6c200           mov eax, 0xc2a660
// 004f4ae5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004f4ae0()
{
    return &G;
}
