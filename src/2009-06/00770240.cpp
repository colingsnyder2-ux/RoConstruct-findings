// roc 2009-06 00770240  unit: CXTPPrintOptions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00770240
//
// 00770240  b8c0b48f00           mov eax, 0x8fb4c0
// 00770245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00770240()
{
    return &G;
}
