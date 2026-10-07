// roc 2011-06 008fe8b0  unit: CXTPRibbonControlSystemRecentFileList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fe8b0
//
// 008fe8b0  b8a0b2c900           mov eax, 0xc9b2a0
// 008fe8b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008fe8b0()
{
    return &G;
}
