// roc 2010-06 005978f0  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005978f0
//
// 005978f0  b850e7b900           mov eax, 0xb9e750
// 005978f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005978f0()
{
    return &G;
}
