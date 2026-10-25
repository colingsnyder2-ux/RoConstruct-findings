// from server: 100% by king_originala
// roc 2008-06 0066fac0  unit: RBX::AdornRbxGfx  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066fac0
//
// 0066fac0  8b542404             mov edx, dword ptr [esp + 4]
// 0066fac4  56                   push esi
// 0066fac5  8d8114010000         lea eax, [ecx + 0x114]
// 0066facb  57                   push edi
// 0066facc  b909000000           mov ecx, 9
// 0066fad1  8bf2                 mov esi, edx
// 0066fad3  8bf8                 mov edi, eax
// 0066fad5  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0066fad7  d94224               fld dword ptr [edx + 0x24]
// 0066fada  d95824               fstp dword ptr [eax + 0x24]
// 0066fadd  d94228               fld dword ptr [edx + 0x28]
// 0066fae0  d95828               fstp dword ptr [eax + 0x28]
// 0066fae3  d9422c               fld dword ptr [edx + 0x2c]
// 0066fae6  d9582c               fstp dword ptr [eax + 0x2c]
// 0066fae9  5f                   pop edi
// 0066faea  5e                   pop esi
// 0066faeb  c20400               ret 4

struct Matrix {
    float elements[9];
};

struct Transform {
    Matrix rotation;
    float x, y, z;
    Transform& operator=(const Transform& value);
};

inline Transform& Transform::operator=(const Transform& value)
{
    rotation = value.rotation;
    x = value.x;
    y = value.y;
    z = value.z;
    return *this;
}

struct S {
    char padding[0x114];
    Transform transform;
    void setTransform(const Transform& value);
};

void S::setTransform(const Transform& value)
{
    transform = value;
}
