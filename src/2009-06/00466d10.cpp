// roc 2009-06 00466d10  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00466d10
//
// 00466d10  b820c48b00           mov eax, 0x8bc420
// 00466d15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00466d10()
{
    return &G;
}
