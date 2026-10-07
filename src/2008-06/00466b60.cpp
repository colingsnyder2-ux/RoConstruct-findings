// roc 2008-06 00466b60  unit: CSettingsDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466b60
//
// 00466b60  b890bd8100           mov eax, 0x81bd90
// 00466b65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00466b60()
{
    return &G;
}
