// roc 2012-06 0044bbe0  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044bbe0
//
// 0044bbe0  b86c2fb500           mov eax, 0xb52f6c
// 0044bbe5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044bbe0()
{
    return &G;
}
