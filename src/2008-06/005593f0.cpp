// from server: 100% by auto
// roc 2008-06 005593f0  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005593f0
//
// 005593f0  b8a03a9400           mov eax, 0x943aa0
// 005593f5  c3                   ret 

extern char G;

char* func_005593f0()
{
    return &G;
}
