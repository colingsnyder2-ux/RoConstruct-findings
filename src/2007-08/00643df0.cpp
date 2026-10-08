// roc 2007-08 00643df0  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643df0
//
// 00643df0  b8e4667c00           mov eax, 0x7c66e4
// 00643df5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00643df0()
{
    return &G;
}
