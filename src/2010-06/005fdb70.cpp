// roc 2010-06 005fdb70  unit: RBX::VProtectedString::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fdb70
//
// 005fdb70  b878dfba00           mov eax, 0xbadf78
// 005fdb75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005fdb70()
{
    return &G;
}
