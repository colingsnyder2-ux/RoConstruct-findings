// roc 2010-06 007e8e50  unit: CXTTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e8e50
//
// 007e8e50  b84ca9a500           mov eax, 0xa5a94c
// 007e8e55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e8e50()
{
    return &G;
}
