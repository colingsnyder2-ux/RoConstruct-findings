// roc 2010-06 00476040  unit: CSettingsDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00476040
//
// 00476040  b8681da100           mov eax, 0xa11d68
// 00476045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00476040()
{
    return &G;
}
