// roc 2007-08 00682a60  unit: CXTPPropertyGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682a60
//
// 00682a60  b8b4ed7c00           mov eax, 0x7cedb4
// 00682a65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00682a60()
{
    return &G;
}
