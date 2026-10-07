// roc 2008-06 00411160  unit: boost::bad_weak_ptr  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411160
//
// 00411160  b8b0df8000           mov eax, 0x80dfb0
// 00411165  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00411160()
{
    return &G;
}
