// roc 2010-06 005b1f80  unit: RBX::W4SurfaceType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b1f80
//
// 005b1f80  b8581aba00           mov eax, 0xba1a58
// 005b1f85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b1f80()
{
    return &G;
}
