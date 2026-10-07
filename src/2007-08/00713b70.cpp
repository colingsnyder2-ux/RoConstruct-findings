// roc 2007-08 00713b70  unit: CXTCaptionButtonThemeFactory  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00713b70
//
// 00713b70  b85cea7d00           mov eax, 0x7dea5c
// 00713b75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00713b70()
{
    return &G;
}
