// roc 2011-06 008795d0  unit: CXTPPropertyGridItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008795d0
//
// 008795d0  b8fcdcac00           mov eax, 0xacdcfc
// 008795d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008795d0()
{
    return &G;
}
