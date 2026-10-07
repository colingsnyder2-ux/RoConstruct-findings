// roc 2007-08 0040cb50  unit: boost::bad_weak_ptr  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0040cb50
//
// 0040cb50  b8b0647800           mov eax, 0x7864b0
// 0040cb55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040cb50()
{
    return &G;
}
