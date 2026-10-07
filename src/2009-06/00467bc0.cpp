// roc 2009-06 00467bc0  unit: CSettingsDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00467bc0
//
// 00467bc0  b8d0c98b00           mov eax, 0x8bc9d0
// 00467bc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00467bc0()
{
    return &G;
}
