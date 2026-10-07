// roc 2008-06 006e9190  unit: CXTPControlPopupColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9190
//
// 006e9190  b804749600           mov eax, 0x967404
// 006e9195  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006e9190()
{
    return &G;
}
