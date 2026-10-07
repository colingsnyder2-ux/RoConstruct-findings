// roc 2010-06 00893820  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893820
//
// 00893820  b888fda600           mov eax, 0xa6fd88
// 00893825  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00893820()
{
    return &G;
}
