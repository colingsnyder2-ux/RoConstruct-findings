// roc 2011-06 008c60b0  unit: CXTPDockingPaneSplitterContainer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c60b0
//
// 008c60b0  b8a867ad00           mov eax, 0xad67a8
// 008c60b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008c60b0()
{
    return &G;
}
