// roc 2012-06 004493f0  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004493f0
//
// 004493f0  b8a424b500           mov eax, 0xb524a4
// 004493f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004493f0()
{
    return &G;
}
