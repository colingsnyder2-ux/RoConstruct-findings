// roc 2012-06 004153e0  unit: CPlayBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004153e0
//
// 004153e0  b8c450b400           mov eax, 0xb450c4
// 004153e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004153e0()
{
    return &G;
}
