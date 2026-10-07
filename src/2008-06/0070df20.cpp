// roc 2008-06 0070df20  unit: CXTPStatusBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070df20
//
// 0070df20  b8cccf8500           mov eax, 0x85cfcc
// 0070df25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070df20()
{
    return &G;
}
