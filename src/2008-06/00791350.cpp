// roc 2008-06 00791350  unit: CXTCaptionThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791350
//
// 00791350  b8f8ae8600           mov eax, 0x86aef8
// 00791355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00791350()
{
    return &G;
}
