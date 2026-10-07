// roc 2010-06 00426dc0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00426dc0
//
// 00426dc0  b850c2b700           mov eax, 0xb7c250
// 00426dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00426dc0()
{
    return &G;
}
