// roc 2009-06 007815b0  unit: CXTPStatusBar::CStatusCmdUI  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007815b0
//
// 007815b0  b8f8cf8f00           mov eax, 0x8fcff8
// 007815b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007815b0()
{
    return &G;
}
