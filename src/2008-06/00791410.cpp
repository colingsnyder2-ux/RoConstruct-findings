// from server: 100% by auto
// roc 2008-06 00791410  unit: CXTCaptionButtonThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791410
//
// 00791410  b814af8600           mov eax, 0x86af14
// 00791415  c3                   ret 

extern char G;

char* func_00791410()
{
    return &G;
}
