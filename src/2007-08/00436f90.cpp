// roc 2007-08 00436f90  unit: CMemberTreeView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00436f90
//
// 00436f90  b860cc7800           mov eax, 0x78cc60
// 00436f95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00436f90()
{
    return &G;
}
