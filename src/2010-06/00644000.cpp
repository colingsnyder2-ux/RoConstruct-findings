// roc 2010-06 00644000  unit: RBX::VAnimationId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00644000
//
// 00644000  b8f45dbb00           mov eax, 0xbb5df4
// 00644005  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00644000()
{
    return &G;
}
