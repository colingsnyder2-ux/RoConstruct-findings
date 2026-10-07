// roc 2011-06 005e6350  unit: boost::io::too_many_args  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6350
//
// 005e6350  b8200ea900           mov eax, 0xa90e20
// 005e6355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005e6350()
{
    return &G;
}
