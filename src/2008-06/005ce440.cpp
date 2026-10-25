// from server: 100% by tester
// roc 2008-06 005ce440  unit: RBX::Camera  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ce440
//
// 005ce440  8b542404             mov edx, dword ptr [esp + 4]
// 005ce444  53                   push ebx
// 005ce445  8bd9                 mov ebx, ecx
// 005ce447  56                   push esi
// 005ce448  8d8374010000         lea eax, [ebx + 0x174]
// 005ce44e  57                   push edi
// 005ce44f  8bf2                 mov esi, edx
// 005ce451  8bf8                 mov edi, eax
// 005ce453  b909000000           mov ecx, 9
// 005ce458  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005ce45a  d94224               fld dword ptr [edx + 0x24]
// 005ce45d  d95824               fstp dword ptr [eax + 0x24]
// 005ce460  d94228               fld dword ptr [edx + 0x28]
// 005ce463  d95828               fstp dword ptr [eax + 0x28]
// 005ce466  d9422c               fld dword ptr [edx + 0x2c]
// 005ce469  d9582c               fstp dword ptr [eax + 0x2c]
// 005ce46c  8bcb                 mov ecx, ebx
// 005ce46e  e8fdfaffff           call 0x5cdf70
// 005ce473  5f                   pop edi
// 005ce474  5e                   pop esi
// 005ce475  5b                   pop ebx
// 005ce476  c20400               ret 4

struct Matrix3 { float m[9]; };
struct Vector3 {
    float x, y, z;
    Vector3& operator=(const Vector3& v) { x = v.x; y = v.y; z = v.z; return *this; }
};
struct CF {
    Matrix3 rotation; Vector3 translation;
    CF& operator=(const CF& c) { rotation = c.rotation; translation = c.translation; return *this; }
};
struct Cam {
    char pad[0x174];
    CF cf;
    void changed();
    CF& frame() { return cf; }
    void setCameraCoordinateFrameNoLerp(const CF& c);
};
void Cam::setCameraCoordinateFrameNoLerp(const CF& c) {
    frame() = c;
    changed();
}
