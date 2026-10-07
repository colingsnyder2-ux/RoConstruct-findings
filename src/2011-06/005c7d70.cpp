// roc 2011-06 005c7d70  unit: RBX::W4SurfaceType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c7d70
//
// 005c7d70  b840e9c300           mov eax, 0xc3e940
// 005c7d75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c7d70()
{
    return &G;
}
