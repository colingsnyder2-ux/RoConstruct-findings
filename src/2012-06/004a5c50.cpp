// roc 2012-06 004a5c50  unit: CSettingsDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a5c50
//
// 004a5c50  b88c1db600           mov eax, 0xb61d8c
// 004a5c55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5c50()
{
    return &G;
}
