// roc 2012-06 00416bf0  unit: boost::bad_weak_ptr  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00416bf0
//
// 00416bf0  b8ec5eb400           mov eax, 0xb45eec
// 00416bf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00416bf0()
{
    return &G;
}
