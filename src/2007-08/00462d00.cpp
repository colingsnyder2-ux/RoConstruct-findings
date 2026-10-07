// roc 2007-08 00462d00  unit: CSettingsDialog  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00462d00
//
// 00462d00  b838557900           mov eax, 0x795538
// 00462d05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00462d00()
{
    return &G;
}
