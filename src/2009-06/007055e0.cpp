// roc 2009-06 007055e0  unit: boost::lock_error  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007055e0
//
// 007055e0  b844f88e00           mov eax, 0x8ef844
// 007055e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007055e0()
{
    return &G;
}
