// roc 2008-06 0075ac30  unit: CXTPDockingPaneKeyboardHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ac30
//
// 0075ac30  b888588600           mov eax, 0x865888
// 0075ac35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0075ac30()
{
    return &G;
}
