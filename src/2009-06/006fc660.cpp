// roc 2009-06 006fc660  unit: RBX::AdornRbxGfx  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fc660
//
// 006fc660  8b542404             mov edx, dword ptr [esp + 4]
// 006fc664  56                   push esi
// 006fc665  8d8114010000         lea eax, [ecx + 0x114]
// 006fc66b  57                   push edi
// 006fc66c  b909000000           mov ecx, 9
// 006fc671  8bf2                 mov esi, edx
// 006fc673  8bf8                 mov edi, eax
// 006fc675  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006fc677  d94224               fld dword ptr [edx + 0x24]
// 006fc67a  d95824               fstp dword ptr [eax + 0x24]
// 006fc67d  d94228               fld dword ptr [edx + 0x28]
// 006fc680  d95828               fstp dword ptr [eax + 0x28]
// 006fc683  d9422c               fld dword ptr [edx + 0x2c]
// 006fc686  d9582c               fstp dword ptr [eax + 0x2c]
// 006fc689  5f                   pop edi
// 006fc68a  5e                   pop esi
// 006fc68b  c20400               ret 4
// copied from an identical function in another client (function ?setTransform@S@@QAEXABUTransform@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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