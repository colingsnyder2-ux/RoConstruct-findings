// roc 2010-06 007fc630  unit: CXTPControlWindowList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc630
//
// 007fc630  b8607abe00           mov eax, 0xbe7a60
// 007fc635  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007fc630()
{
    return &G;
}
