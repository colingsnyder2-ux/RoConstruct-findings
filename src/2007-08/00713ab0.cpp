// roc 2007-08 00713ab0  unit: CXTCaptionThemeFactory  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00713ab0
//
// 00713ab0  b840ea7d00           mov eax, 0x7dea40
// 00713ab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00713ab0()
{
    return &G;
}
