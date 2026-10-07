// roc 2010-06 005b0770  unit: RBX::KeyframeSequence::W4Priority::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b0770
//
// 005b0770  b86c14ba00           mov eax, 0xba146c
// 005b0775  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b0770()
{
    return &G;
}
