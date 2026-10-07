// roc 2012-06 00477bf0  unit: CRobloxApp  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00477bf0
//
// 00477bf0  b89cadb500           mov eax, 0xb5ad9c
// 00477bf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00477bf0()
{
    return &G;
}
