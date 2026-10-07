// roc 2009-06 005d09f0  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d09f0
//
// 005d09f0  b808f39f00           mov eax, 0x9ff308
// 005d09f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005d09f0()
{
    return &G;
}
