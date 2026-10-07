// roc 2011-06 004f4aa0  unit: RBX::VUDim::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4aa0
//
// 004f4aa0  b8f0aec200           mov eax, 0xc2aef0
// 004f4aa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004f4aa0()
{
    return &G;
}
