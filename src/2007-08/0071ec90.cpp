// roc 2007-08 0071ec90  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071ec90
//
// 0071ec90  b8c8157e00           mov eax, 0x7e15c8
// 0071ec95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0071ec90()
{
    return &G;
}
