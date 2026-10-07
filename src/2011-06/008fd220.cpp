// roc 2011-06 008fd220  unit: CXTPRibbonControlTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd220
//
// 008fd220  b8d4b1c900           mov eax, 0xc9b1d4
// 008fd225  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008fd220()
{
    return &G;
}
