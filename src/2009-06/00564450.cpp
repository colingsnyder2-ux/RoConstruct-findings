// roc 2009-06 00564450  unit: boost::bad_lexical_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00564450
//
// 00564450  b8c0a78c00           mov eax, 0x8ca7c0
// 00564455  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00564450()
{
    return &G;
}
