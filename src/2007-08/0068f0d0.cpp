// roc 2007-08 0068f0d0  unit: CXTColorDialog  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f0d0
//
// 0068f0d0  b8e4037d00           mov eax, 0x7d03e4
// 0068f0d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0068f0d0()
{
    return &G;
}
