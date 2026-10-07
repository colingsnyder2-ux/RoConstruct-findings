// roc 2011-06 0085fa80  unit: CXTPPropExchangeArchive  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085fa80
//
// 0085fa80  b868a8ac00           mov eax, 0xaca868
// 0085fa85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085fa80()
{
    return &G;
}
