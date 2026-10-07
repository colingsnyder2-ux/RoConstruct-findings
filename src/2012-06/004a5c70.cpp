// roc 2012-06 004a5c70  unit: CSettingsExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a5c70
//
// 004a5c70  b8a81db600           mov eax, 0xb61da8
// 004a5c75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5c70()
{
    return &G;
}
