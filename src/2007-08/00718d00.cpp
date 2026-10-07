// roc 2007-08 00718d00  unit: CXTPRibbonControls  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00718d00
//
// 00718d00  b888f87d00           mov eax, 0x7df888
// 00718d05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00718d00()
{
    return &G;
}
