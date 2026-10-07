// roc 2008-06 007a16e0  unit: CXTButtonThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a16e0
//
// 007a16e0  b874f18600           mov eax, 0x86f174
// 007a16e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007a16e0()
{
    return &G;
}
