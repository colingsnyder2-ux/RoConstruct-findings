// roc 2011-06 00492ab0  unit: CSettingsExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00492ab0
//
// 00492ab0  b81452a700           mov eax, 0xa75214
// 00492ab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00492ab0()
{
    return &G;
}
