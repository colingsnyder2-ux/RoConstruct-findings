// roc 2010-06 005aeed0  unit: RBX::Feature::W4LeftRight::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005aeed0
//
// 005aeed0  b8fc0eba00           mov eax, 0xba0efc
// 005aeed5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005aeed0()
{
    return &G;
}
