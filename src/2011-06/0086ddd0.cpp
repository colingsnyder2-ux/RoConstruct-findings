// roc 2011-06 0086ddd0  unit: CXTPStatusBar::CStatusCmdUI  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ddd0
//
// 0086ddd0  b840c0ac00           mov eax, 0xacc040
// 0086ddd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0086ddd0()
{
    return &G;
}
