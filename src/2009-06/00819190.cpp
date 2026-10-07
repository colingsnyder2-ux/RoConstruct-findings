// roc 2009-06 00819190  unit: CXTButtonThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00819190
//
// 00819190  b8b4f69000           mov eax, 0x90f6b4
// 00819195  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00819190()
{
    return &G;
}
