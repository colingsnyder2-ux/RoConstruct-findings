// roc 2008-06 00501d00  unit: boost::bad_lexical_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501d00
//
// 00501d00  b806140000           mov eax, 0x1406
// 00501d05  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_00501d00()
{
    return 0x1406u;
}
