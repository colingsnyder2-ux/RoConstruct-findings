// roc 2011-06 00871410  unit: CXTColorDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871410
//
// 00871410  b844c8ac00           mov eax, 0xacc844
// 00871415  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00871410()
{
    return &G;
}
