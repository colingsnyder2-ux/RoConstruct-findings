// roc 2007-08 0070ed30  unit: CXTPRichRender  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ed30
//
// 0070ed30  b864e37d00           mov eax, 0x7de364
// 0070ed35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070ed30()
{
    return &G;
}
