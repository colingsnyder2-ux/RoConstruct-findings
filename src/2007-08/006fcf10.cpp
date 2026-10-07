// roc 2007-08 006fcf10  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006fcf10
//
// 006fcf10  b8e4cc7d00           mov eax, 0x7dcce4
// 006fcf15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006fcf10()
{
    return &G;
}
