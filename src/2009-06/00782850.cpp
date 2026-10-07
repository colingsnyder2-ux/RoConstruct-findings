// roc 2009-06 00782850  unit: CXTSplitterWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00782850
//
// 00782850  b84cd38f00           mov eax, 0x8fd34c
// 00782855  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00782850()
{
    return &G;
}
