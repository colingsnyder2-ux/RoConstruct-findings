// roc 2009-06 00467880  unit: CSettingsDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00467880
//
// 00467880  b860c68b00           mov eax, 0x8bc660
// 00467885  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00467880()
{
    return &G;
}
