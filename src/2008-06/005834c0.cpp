// from server: 100% by king_originala
// roc 2008-06 005834c0  unit: RBX::VerbContainer  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005834c0
//
// 005834c0  8b542404             mov edx, dword ptr [esp + 4]
// 005834c4  56                   push esi
// 005834c5  8d81b0010000         lea eax, [ecx + 0x1b0]
// 005834cb  57                   push edi
// 005834cc  b909000000           mov ecx, 9
// 005834d1  8bf2                 mov esi, edx
// 005834d3  8bf8                 mov edi, eax
// 005834d5  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005834d7  d94224               fld dword ptr [edx + 0x24]
// 005834da  d95824               fstp dword ptr [eax + 0x24]
// 005834dd  d94228               fld dword ptr [edx + 0x28]
// 005834e0  d95828               fstp dword ptr [eax + 0x28]
// 005834e3  d9422c               fld dword ptr [edx + 0x2c]
// 005834e6  d9582c               fstp dword ptr [eax + 0x2c]
// 005834e9  5f                   pop edi
// 005834ea  5e                   pop esi
// 005834eb  c20400               ret 4

struct Matrix {
    float values[9];
};

struct Transform {
    Matrix rotation;
    float x, y, z;
    Transform& operator=(const Transform& value);
};

__forceinline Transform& Transform::operator=(const Transform& value)
{
    rotation = value.rotation;
    x = value.x;
    y = value.y;
    z = value.z;
    return *this;
}

struct S_func_005834c0 {
    char pad0[432];
    Transform transform;
    void f(const Transform& value);
};

void S_func_005834c0::f(const Transform& value)
{
    transform = value;
}
