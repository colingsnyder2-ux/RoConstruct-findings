// roc 2009-06 007d1620  unit: CXTPDockingPaneWindowSelect  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d1620
//
// 007d1620  b89c669000           mov eax, 0x90669c
// 007d1625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007d1620()
{
    return &G;
}
