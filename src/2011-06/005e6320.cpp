// roc 2011-06 005e6320  unit: boost::io::format_error  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6320
//
// 005e6320  b8400da900           mov eax, 0xa90d40
// 005e6325  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005e6320()
{
    return &G;
}
