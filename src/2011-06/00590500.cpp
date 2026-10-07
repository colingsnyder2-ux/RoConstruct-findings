// roc 2011-06 00590500  unit: RBX::EThrottle::W4EThrottleType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00590500
//
// 00590500  b84053c300           mov eax, 0xc35340
// 00590505  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00590500()
{
    return &G;
}
