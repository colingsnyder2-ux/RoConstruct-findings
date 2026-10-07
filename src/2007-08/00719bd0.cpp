// roc 2007-08 00719bd0  unit: CXTPRibbonControlSystemRecentFileList  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00719bd0
//
// 00719bd0  b850a78b00           mov eax, 0x8ba750
// 00719bd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00719bd0()
{
    return &G;
}
