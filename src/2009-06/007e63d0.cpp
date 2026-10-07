// roc 2009-06 007e63d0  unit: CXTPShadowsManager::CShadowWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e63d0
//
// 007e63d0  b8d4849000           mov eax, 0x9084d4
// 007e63d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e63d0()
{
    return &G;
}
