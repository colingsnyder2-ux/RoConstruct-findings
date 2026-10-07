// roc 2008-06 00501180  unit: boost::bad_lexical_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501180
//
// 00501180  b830728200           mov eax, 0x827230
// 00501185  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00501180()
{
    return &G;
}
