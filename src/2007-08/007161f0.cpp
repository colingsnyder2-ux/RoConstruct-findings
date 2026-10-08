// roc 2007-08 007161f0  unit: CXTPRibbonTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007161f0
//
// 007161f0  b860f27d00           mov eax, 0x7df260
// 007161f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007161f0()
{
    return &G;
}
