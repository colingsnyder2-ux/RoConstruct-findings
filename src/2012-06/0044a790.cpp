// roc 2012-06 0044a790  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044a790
//
// 0044a790  b8142cb500           mov eax, 0xb52c14
// 0044a795  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044a790()
{
    return &G;
}
