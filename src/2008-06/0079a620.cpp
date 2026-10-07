// roc 2008-06 0079a620  unit: CXTPRibbonControlSystemButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a620
//
// 0079a620  b83cb99600           mov eax, 0x96b93c
// 0079a625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0079a620()
{
    return &G;
}
