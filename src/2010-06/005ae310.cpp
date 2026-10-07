// roc 2010-06 005ae310  unit: RBX::PlayerCamera::W4CameraType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ae310
//
// 005ae310  b8280cba00           mov eax, 0xba0c28
// 005ae315  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005ae310()
{
    return &G;
}
