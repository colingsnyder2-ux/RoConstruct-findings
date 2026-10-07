// roc 2009-06 00409870  unit: boost::any::_N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00409870
//
// 00409870  b804c39d00           mov eax, 0x9dc304
// 00409875  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00409870()
{
    return &G;
}
