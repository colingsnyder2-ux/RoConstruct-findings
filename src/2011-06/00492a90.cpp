// roc 2011-06 00492a90  unit: CSettingsDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00492a90
//
// 00492a90  b8f851a700           mov eax, 0xa751f8
// 00492a95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00492a90()
{
    return &G;
}
