// roc 2010-06 0040ccf0  unit: CBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040ccf0
//
// 0040ccf0  b8a814a000           mov eax, 0xa014a8
// 0040ccf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040ccf0()
{
    return &G;
}
