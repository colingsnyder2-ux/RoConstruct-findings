// roc 2011-06 008bf4f0  unit: CXTPDockingPaneKeyboardHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bf4f0
//
// 008bf4f0  b8285aad00           mov eax, 0xad5a28
// 008bf4f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008bf4f0()
{
    return &G;
}
