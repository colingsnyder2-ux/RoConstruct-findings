// roc 2007-08 0041ecd0  unit: CSettingsExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041ecd0
//
// 0041ecd0  b87c817800           mov eax, 0x78817c
// 0041ecd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041ecd0()
{
    return &G;
}
