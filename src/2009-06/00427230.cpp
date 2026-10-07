// roc 2009-06 00427230  unit: MyXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427230
//
// 00427230  b8540d8b00           mov eax, 0x8b0d54
// 00427235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00427230()
{
    return &G;
}
