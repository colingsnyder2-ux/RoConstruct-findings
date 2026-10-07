// roc 2012-06 0044c520  unit: COutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044c520
//
// 0044c520  b83030b500           mov eax, 0xb53030
// 0044c525  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044c520()
{
    return &G;
}
