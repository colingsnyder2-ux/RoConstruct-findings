// roc 2011-06 005e6340  unit: boost::io::too_few_args  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6340
//
// 005e6340  b8c00da900           mov eax, 0xa90dc0
// 005e6345  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005e6340()
{
    return &G;
}
