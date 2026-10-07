// roc 2009-06 00431040  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00431040
//
// 00431040  b8083b8b00           mov eax, 0x8b3b08
// 00431045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00431040()
{
    return &G;
}
