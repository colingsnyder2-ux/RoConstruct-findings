// roc 2011-06 0084a650  unit: CXTTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a650
//
// 0084a650  b87865ac00           mov eax, 0xac6578
// 0084a655  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0084a650()
{
    return &G;
}
