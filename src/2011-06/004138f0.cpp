// roc 2011-06 004138f0  unit: boost::bad_weak_ptr  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004138f0
//
// 004138f0  b8c4dea500           mov eax, 0xa5dec4
// 004138f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004138f0()
{
    return &G;
}
