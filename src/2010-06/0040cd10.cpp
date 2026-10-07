// roc 2010-06 0040cd10  unit: CPlayBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040cd10
//
// 0040cd10  b8e014a000           mov eax, 0xa014e0
// 0040cd15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040cd10()
{
    return &G;
}
