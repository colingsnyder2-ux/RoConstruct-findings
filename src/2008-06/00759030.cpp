// roc 2008-06 00759030  unit: CXTPDockingPaneWindowSelect  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00759030
//
// 00759030  b864568600           mov eax, 0x865664
// 00759035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00759030()
{
    return &G;
}
