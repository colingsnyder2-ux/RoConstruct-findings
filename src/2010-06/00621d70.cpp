// roc 2010-06 00621d70  unit: RBX::Soundscape::VSoundId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00621d70
//
// 00621d70  b8100abb00           mov eax, 0xbb0a10
// 00621d75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00621d70()
{
    return &G;
}
