// roc 2007-08 00719970  unit: CXTPRibbonControlSystemButton  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00719970
//
// 00719970  b8c4a68b00           mov eax, 0x8ba6c4
// 00719975  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00719970()
{
    return &G;
}
