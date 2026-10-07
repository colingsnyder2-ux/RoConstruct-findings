// roc 2007-08 0066aac0  unit: CXTPFrameWnd  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0066aac0
//
// 0066aac0  b85ca87c00           mov eax, 0x7ca85c
// 0066aac5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0066aac0()
{
    return &G;
}
