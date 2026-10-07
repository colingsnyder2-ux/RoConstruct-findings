// roc 2007-08 0067d820  unit: CXTPControlToolbars  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d820
//
// 0067d820  b8306b8b00           mov eax, 0x8b6b30
// 0067d825  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067d820()
{
    return &G;
}
