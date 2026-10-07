// roc 2011-06 005c5090  unit: RBX::Legacy::W4SurfaceConstraint::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5090
//
// 005c5090  b88cddc300           mov eax, 0xc3dd8c
// 005c5095  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c5090()
{
    return &G;
}
