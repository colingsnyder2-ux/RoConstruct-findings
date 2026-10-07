// roc 2011-06 00816120  unit: CXTPEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816120
//
// 00816120  b8cc1bac00           mov eax, 0xac1bcc
// 00816125  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00816120()
{
    return &G;
}
