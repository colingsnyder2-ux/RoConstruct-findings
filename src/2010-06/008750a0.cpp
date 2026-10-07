// roc 2010-06 008750a0  unit: CXTPShadowsManager::CShadowWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008750a0
//
// 008750a0  b82ccca600           mov eax, 0xa6cc2c
// 008750a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008750a0()
{
    return &G;
}
