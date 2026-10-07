// roc 2009-06 0040cb70  unit: CPlayBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040cb70
//
// 0040cb70  b8a0dc8a00           mov eax, 0x8adca0
// 0040cb75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040cb70()
{
    return &G;
}
