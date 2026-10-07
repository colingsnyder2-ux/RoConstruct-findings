// roc 2011-06 005c3b10  unit: RBX::Camera::W4CameraType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c3b10
//
// 005c3b10  b82cd8c300           mov eax, 0xc3d82c
// 005c3b15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c3b10()
{
    return &G;
}
