// roc 2007-08 00661cd0  unit: CInstanceRecord  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661cd0
//
// 00661cd0  b8fc628b00           mov eax, 0x8b62fc
// 00661cd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00661cd0()
{
    return &G;
}
