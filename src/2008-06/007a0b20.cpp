// from server: 100% by auto
// roc 2008-06 007a0b20  unit: CXTColorSelectorCtrlThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0b20
//
// 007a0b20  b88cef8600           mov eax, 0x86ef8c
// 007a0b25  c3                   ret 

extern char G;

char* func_007a0b20()
{
    return &G;
}
