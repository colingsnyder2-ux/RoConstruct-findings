// roc 2012-06 00462230  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462230
//
// 00462230  b8a474b500           mov eax, 0xb574a4
// 00462235  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00462230()
{
    return &G;
}
