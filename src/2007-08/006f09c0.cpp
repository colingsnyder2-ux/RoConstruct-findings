// roc 2007-08 006f09c0  unit: CXTPShadowsManager::CShadowWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f09c0
//
// 006f09c0  b8a4b17d00           mov eax, 0x7db1a4
// 006f09c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f09c0()
{
    return &G;
}
