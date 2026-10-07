// roc 2009-06 00643c40  unit: RBX::Soundscape::VSoundId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00643c40
//
// 00643c40  b880daa000           mov eax, 0xa0da80
// 00643c45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00643c40()
{
    return &G;
}
