// roc 2010-06 00591fa0  unit: RBX::EThrottle::W4EThrottleType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00591fa0
//
// 00591fa0  b8a8cfb900           mov eax, 0xb9cfa8
// 00591fa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00591fa0()
{
    return &G;
}
