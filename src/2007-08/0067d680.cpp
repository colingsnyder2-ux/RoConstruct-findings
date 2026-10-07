// roc 2007-08 0067d680  unit: CXTPControlWindowList  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d680
//
// 0067d680  b8146b8b00           mov eax, 0x8b6b14
// 0067d685  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067d680()
{
    return &G;
}
