// roc 2010-06 005900d0  unit: RBX::Time::W4SampleMethod::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005900d0
//
// 005900d0  b8cccbb900           mov eax, 0xb9cbcc
// 005900d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005900d0()
{
    return &G;
}
