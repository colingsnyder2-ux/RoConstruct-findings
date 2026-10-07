// roc 2008-06 00707830  unit: CXTPDockingPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707830
//
// 00707830  b8d8be8500           mov eax, 0x85bed8
// 00707835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00707830()
{
    return &G;
}
