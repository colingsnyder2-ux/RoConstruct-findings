// roc 2007-08 0067d9d0  unit: CXTPControlCheckBox  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d9d0
//
// 0067d9d0  b8d86b8b00           mov eax, 0x8b6bd8
// 0067d9d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067d9d0()
{
    return &G;
}
