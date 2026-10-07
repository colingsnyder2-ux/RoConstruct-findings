// roc 2009-06 00409810  unit: boost::bad_any_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00409810
//
// 00409810  b85cd38a00           mov eax, 0x8ad35c
// 00409815  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00409810()
{
    return &G;
}
