// roc 2010-06 007f4830  unit: CXTPCustomizeCommandsPage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f4830
//
// 007f4830  b864dba500           mov eax, 0xa5db64
// 007f4835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f4830()
{
    return &G;
}
