// roc 2011-06 0085caf0  unit: CXTPPrintOptions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085caf0
//
// 0085caf0  b818a5ac00           mov eax, 0xaca518
// 0085caf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085caf0()
{
    return &G;
}
