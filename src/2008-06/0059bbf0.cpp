// from server: 100% by king_originala
// roc 2008-06 0059bbf0  unit: RBX::PartInstance  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059bbf0
//
// 0059bbf0  56                   push esi
// 0059bbf1  57                   push edi
// 0059bbf2  81c134feffff         add ecx, 0xfffffe34
// 0059bbf8  e8c3c60400           call 0x5e82c0
// 0059bbfd  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059bc01  8bf0                 mov esi, eax
// 0059bc03  56                   push esi
// 0059bc04  8bcf                 mov ecx, edi
// 0059bc06  e81576f7ff           call 0x513220
// 0059bc0b  d94624               fld dword ptr [esi + 0x24]
// 0059bc0e  d95f24               fstp dword ptr [edi + 0x24]
// 0059bc11  8bc7                 mov eax, edi
// 0059bc13  d94628               fld dword ptr [esi + 0x28]
// 0059bc16  d95f28               fstp dword ptr [edi + 0x28]
// 0059bc19  d9462c               fld dword ptr [esi + 0x2c]
// 0059bc1c  d95f2c               fstp dword ptr [edi + 0x2c]
// 0059bc1f  5f                   pop edi
// 0059bc20  5e                   pop esi
// 0059bc21  c20400               ret 4

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3&);
};

inline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z) {
}

struct Matrix3 {
    float values[9];
    Matrix3(const Matrix3&);
};

struct Frame {
    Matrix3 rotation;
    Vector3 translation;
};

struct Body {
    char pad[0x94];
    Vector3 value;
    void updatePV();
};

struct Primitive {
    char pad[0xa0];
    Body* body;
    const Vector3& getValue();
};

struct S {
    Frame f();
};

Frame S::f() {
    Primitive* primitive =
        reinterpret_cast<Primitive*>(reinterpret_cast<char*>(this) - 0x1cc);
    return *reinterpret_cast<const Frame*>(&primitive->getValue());
}
