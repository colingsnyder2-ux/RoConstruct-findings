// roc 2009-06 00410dd0  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00410dd0
//
// 00410dd0  b838f08a00           mov eax, 0x8af038
// 00410dd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00410dd0()
{
    return &G;
}
