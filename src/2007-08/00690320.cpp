// roc 2007-08 00690320  unit: CXTSplitterWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00690320
//
// 00690320  b8a4057d00           mov eax, 0x7d05a4
// 00690325  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00690320()
{
    return &G;
}
