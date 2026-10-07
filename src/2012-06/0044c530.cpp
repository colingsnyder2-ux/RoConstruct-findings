// roc 2012-06 0044c530  unit: CStandardOutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044c530
//
// 0044c530  b84c30b500           mov eax, 0xb5304c
// 0044c535  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044c530()
{
    return &G;
}
