// roc 2010-06 008620a0  unit: CXTPDockingPaneKeyboardHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008620a0
//
// 008620a0  b818b0a600           mov eax, 0xa6b018
// 008620a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008620a0()
{
    return &G;
}
