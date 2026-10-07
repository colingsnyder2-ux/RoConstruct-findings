// roc 2009-06 005fede0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fede0
//
// 005fede0  b868f39d00           mov eax, 0x9df368
// 005fede5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005fede0()
{
    return &G;
}
