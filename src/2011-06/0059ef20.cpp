// roc 2011-06 0059ef20  unit: RBX::Soundscape::VSoundId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059ef20
//
// 0059ef20  b8e07bc300           mov eax, 0xc37be0
// 0059ef25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0059ef20()
{
    return &G;
}
