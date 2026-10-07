// roc 2012-06 004948b0  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004948b0
//
// 004948b0  b8a8e8b500           mov eax, 0xb5e8a8
// 004948b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004948b0()
{
    return &G;
}
