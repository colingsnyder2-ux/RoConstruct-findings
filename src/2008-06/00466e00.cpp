// roc 2008-06 00466e00  unit: CSettingsDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466e00
//
// 00466e00  b820c18100           mov eax, 0x81c120
// 00466e05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00466e00()
{
    return &G;
}
