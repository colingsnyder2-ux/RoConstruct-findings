// roc 2010-06 004763c0  unit: CSettingsDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004763c0
//
// 004763c0  b8d820a100           mov eax, 0xa120d8
// 004763c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004763c0()
{
    return &G;
}
