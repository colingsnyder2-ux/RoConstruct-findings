// roc 2011-06 008d2620  unit: CXTPShadowsManager::CShadowWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2620
//
// 008d2620  b83c76ad00           mov eax, 0xad763c
// 008d2625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008d2620()
{
    return &G;
}
