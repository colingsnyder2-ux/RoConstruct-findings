// roc 2010-06 008a5cf0  unit: CXTPRibbonControlSystemRecentFileList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5cf0
//
// 008a5cf0  b880bdbe00           mov eax, 0xbebd80
// 008a5cf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a5cf0()
{
    return &G;
}
