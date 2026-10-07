// roc 2008-06 00421e70  unit: CSettingsExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00421e70
//
// 00421e70  b87cfa8000           mov eax, 0x80fa7c
// 00421e75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00421e70()
{
    return &G;
}
