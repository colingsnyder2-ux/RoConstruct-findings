// roc 2011-06 005e6330  unit: boost::io::bad_format_string  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e6330
//
// 005e6330  b8780da900           mov eax, 0xa90d78
// 005e6335  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005e6330()
{
    return &G;
}
