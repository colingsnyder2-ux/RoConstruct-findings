// roc 2010-06 00654460  unit: RBX::ExtrudedPartInstance  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00654460
//
// 00654460  b8349cbb00           mov eax, 0xbb9c34
// 00654465  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00654460()
{
    return &G;
}
