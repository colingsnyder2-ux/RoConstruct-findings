// roc 2008-06 00720010  unit: CXTPMenuBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720010
//
// 00720010  b8a48d9600           mov eax, 0x968da4
// 00720015  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00720010()
{
    return &G;
}
