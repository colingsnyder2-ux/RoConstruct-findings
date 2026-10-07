// roc 2009-06 004112a0  unit: boost::lock_error  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004112a0
//
// 004112a0  b8d0f28a00           mov eax, 0x8af2d0
// 004112a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004112a0()
{
    return &G;
}
