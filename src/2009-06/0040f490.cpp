// roc 2009-06 0040f490  unit: boost::bad_weak_ptr  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040f490
//
// 0040f490  b8c0eb8a00           mov eax, 0x8aebc0
// 0040f495  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040f490()
{
    return &G;
}
