// roc 2010-06 00476060  unit: CSettingsExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00476060
//
// 00476060  b8841da100           mov eax, 0xa11d84
// 00476065  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00476060()
{
    return &G;
}
