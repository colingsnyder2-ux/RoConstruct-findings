// roc 2011-06 0040b720  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b720
//
// 0040b720  b8607bc000           mov eax, 0xc07b60
// 0040b725  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040b720()
{
    return &G;
}
