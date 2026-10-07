// roc 2011-06 0086f090  unit: CXTSplitterWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f090
//
// 0086f090  b894c3ac00           mov eax, 0xacc394
// 0086f095  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0086f090()
{
    return &G;
}
