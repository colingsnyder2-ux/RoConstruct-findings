// roc 2009-06 00467400  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00467400
//
// 00467400  b8dcc58b00           mov eax, 0x8bc5dc
// 00467405  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00467400()
{
    return &G;
}
