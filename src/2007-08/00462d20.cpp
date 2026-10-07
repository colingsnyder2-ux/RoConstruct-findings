// roc 2007-08 00462d20  unit: CSettingsExplorer  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00462d20
//
// 00462d20  b854557900           mov eax, 0x795554
// 00462d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00462d20()
{
    return &G;
}
