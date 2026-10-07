// roc 2010-06 005afa90  unit: RBX::Legacy::W4SurfaceConstraint::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005afa90
//
// 005afa90  b89c11ba00           mov eax, 0xba119c
// 005afa95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005afa90()
{
    return &G;
}
