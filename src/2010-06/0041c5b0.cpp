// roc 2010-06 0041c5b0  unit: CSettingsExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041c5b0
//
// 0041c5b0  b8e43ba000           mov eax, 0xa03be4
// 0041c5b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041c5b0()
{
    return &G;
}
