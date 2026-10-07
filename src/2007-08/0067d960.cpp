// roc 2007-08 0067d960  unit: CXTPControlLabel  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d960
//
// 0067d960  b8bc6b8b00           mov eax, 0x8b6bbc
// 0067d965  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067d960()
{
    return &G;
}
