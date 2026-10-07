// roc 2012-06 00477c00  unit: CRobloxControlColorSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00477c00
//
// 00477c00  b81cd4d600           mov eax, 0xd6d41c
// 00477c05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00477c00()
{
    return &G;
}
