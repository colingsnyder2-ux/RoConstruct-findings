// roc 2008-06 00466b80  unit: CSettingsExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466b80
//
// 00466b80  b8acbd8100           mov eax, 0x81bdac
// 00466b85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00466b80()
{
    return &G;
}
