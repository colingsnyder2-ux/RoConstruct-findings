// roc 2010-06 00426d30  unit: boost::any::M::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00426d30
//
// 00426d30  b838c2b700           mov eax, 0xb7c238
// 00426d35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00426d30()
{
    return &G;
}
