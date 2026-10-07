// roc 2007-08 0067da10  unit: CXTPControlRadioButton  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0067da10
//
// 0067da10  b8f46b8b00           mov eax, 0x8b6bf4
// 0067da15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067da10()
{
    return &G;
}
