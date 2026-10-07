// roc 2007-08 0066aae0  unit: CXTPMDIFrameWnd  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0066aae0
//
// 0066aae0  b878a87c00           mov eax, 0x7ca878
// 0066aae5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0066aae0()
{
    return &G;
}
