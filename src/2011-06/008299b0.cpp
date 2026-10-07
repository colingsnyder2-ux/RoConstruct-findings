// roc 2011-06 008299b0  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008299b0
//
// 008299b0  b8dc39ac00           mov eax, 0xac39dc
// 008299b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008299b0()
{
    return &G;
}
