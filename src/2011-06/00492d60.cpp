// roc 2011-06 00492d60  unit: CSettingsDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00492d60
//
// 00492d60  b8f453a700           mov eax, 0xa753f4
// 00492d65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00492d60()
{
    return &G;
}
