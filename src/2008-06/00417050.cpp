// roc 2008-06 00417050  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417050
//
// 00417050  b8f8be9200           mov eax, 0x92bef8
// 00417055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00417050()
{
    return &G;
}
