// roc 2012-06 004a5e10  unit: CSettingsDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a5e10
//
// 004a5e10  b88c1fb600           mov eax, 0xb61f8c
// 004a5e15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5e10()
{
    return &G;
}
