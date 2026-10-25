// from server: 100% by auto
// roc 2008-06 005acd00  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005acd00
//
// 005acd00  b860bf9200           mov eax, 0x92bf60
// 005acd05  c3                   ret 

extern char G;

char* func_005acd00()
{
    return &G;
}
