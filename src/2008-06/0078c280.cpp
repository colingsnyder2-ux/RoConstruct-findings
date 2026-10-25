// from server: 100% by auto
// roc 2008-06 0078c280  unit: CXTSplitterWndThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c280
//
// 0078c280  b844a78600           mov eax, 0x86a744
// 0078c285  c3                   ret 

extern char G;

char* func_0078c280()
{
    return &G;
}
