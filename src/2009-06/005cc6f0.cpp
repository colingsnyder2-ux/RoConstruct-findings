// roc 2009-06 005cc6f0  unit: RBX::Reflection::UTuple::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc6f0
//
// 005cc6f0  b8b0e29f00           mov eax, 0x9fe2b0
// 005cc6f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005cc6f0()
{
    return &G;
}
