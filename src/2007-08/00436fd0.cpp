// roc 2007-08 00436fd0  unit: CStandardOutputView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00436fd0
//
// 00436fd0  b864cd7800           mov eax, 0x78cd64
// 00436fd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00436fd0()
{
    return &G;
}
