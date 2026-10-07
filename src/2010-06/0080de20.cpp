// roc 2010-06 0080de20  unit: CXTPTabClientWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080de20
//
// 0080de20  b8e011a600           mov eax, 0xa611e0
// 0080de25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080de20()
{
    return &G;
}
