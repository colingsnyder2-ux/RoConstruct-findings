// from server: 100% by atomic.potato
// roc 2009-06 0065b2c0  unit: RBX::Camera  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065b2c0
//
// 0065b2c0  8b542404             mov edx, dword ptr [esp + 4]
// 0065b2c4  53                   push ebx
// 0065b2c5  8bd9                 mov ebx, ecx
// 0065b2c7  56                   push esi
// 0065b2c8  8d83dc000000         lea eax, [ebx + 0xdc]
// 0065b2ce  57                   push edi
// 0065b2cf  8bf2                 mov esi, edx
// 0065b2d1  8bf8                 mov edi, eax
// 0065b2d3  b909000000           mov ecx, 9
// 0065b2d8  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0065b2da  d94224               fld dword ptr [edx + 0x24]
// 0065b2dd  d95824               fstp dword ptr [eax + 0x24]
// 0065b2e0  d94228               fld dword ptr [edx + 0x28]
// 0065b2e3  d95828               fstp dword ptr [eax + 0x28]
// 0065b2e6  d9422c               fld dword ptr [edx + 0x2c]
// 0065b2e9  d9582c               fstp dword ptr [eax + 0x2c]
// 0065b2ec  8bcb                 mov ecx, ebx
// 0065b2ee  e81dfcffff           call 0x65af10
// 0065b2f3  5f                   pop edi
// 0065b2f4  5e                   pop esi
// 0065b2f5  5b                   pop ebx
// 0065b2f6  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[9];
};

struct CoordinateFrame {
    Matrix3 rotation;
    Vector3 translation;
};

struct Camera {
    char pad[0xdc];
    CoordinateFrame cf;
    void setCoordinateFrame(const CoordinateFrame& other);
    void update();
};

void Camera::setCoordinateFrame(const CoordinateFrame& other) {
    CoordinateFrame* dst = &cf;
    dst->rotation = other.rotation;
    dst->translation.x = other.translation.x;
    dst->translation.y = other.translation.y;
    dst->translation.z = other.translation.z;
    update();
}
