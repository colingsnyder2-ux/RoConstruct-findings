// roc 2010-06 005aebe0  unit: RBX::Feature::W4InOut::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005aebe0
//
// 005aebe0  b85c0eba00           mov eax, 0xba0e5c
// 005aebe5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005aebe0()
{
    return &G;
}
