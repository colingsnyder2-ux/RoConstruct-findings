// roc 2007-08 00463130  unit: CSettingsDialog  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00463130
//
// 00463130  b83c5a7900           mov eax, 0x795a3c
// 00463135  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00463130()
{
    return &G;
}
