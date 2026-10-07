// roc 2012-06 004a1ea0  unit: CScriptDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a1ea0
//
// 004a1ea0  b87c0cb600           mov eax, 0xb60c7c
// 004a1ea5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a1ea0()
{
    return &G;
}
