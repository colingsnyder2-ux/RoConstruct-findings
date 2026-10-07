// roc 2007-08 006fc850  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006fc850
//
// 006fc850  b85ccb7d00           mov eax, 0x7dcb5c
// 006fc855  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006fc850()
{
    return &G;
}
