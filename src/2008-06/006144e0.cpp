// from server: 100% by king_originala
// roc 2008-06 006144e0  unit: RBX::RevoluteLink  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006144e0
//
// 006144e0  83ec0c               sub esp, 0xc
// 006144e3  56                   push esi
// 006144e4  57                   push edi
// 006144e5  8bf1                 mov esi, ecx
// 006144e7  e8744ef8ff           call 0x599360
// 006144ec  8d442408             lea eax, [esp + 8]
// 006144f0  50                   push eax
// 006144f1  8bce                 mov ecx, esi
// 006144f3  e888ffffff           call 0x614480
// 006144f8  81c694000000         add esi, 0x94
// 006144fe  56                   push esi
// 006144ff  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00614503  8bce                 mov ecx, esi
// 00614505  8bf8                 mov edi, eax
// 00614507  e814edefff           call 0x513220
// 0061450c  d907                 fld dword ptr [edi]
// 0061450e  d95e24               fstp dword ptr [esi + 0x24]
// 00614511  8bc6                 mov eax, esi
// 00614513  d94704               fld dword ptr [edi + 4]
// 00614516  d95e28               fstp dword ptr [esi + 0x28]
// 00614519  d94708               fld dword ptr [edi + 8]
// 0061451c  5f                   pop edi
// 0061451d  d95e2c               fstp dword ptr [esi + 0x2c]
// 00614520  5e                   pop esi
// 00614521  83c40c               add esp, 0xc
// 00614524  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct Rotation {
    float data[9];
};

struct Frame {
    Rotation rotation;
    Vector3 translation;
    Frame(const Rotation&);
};

struct S {
    char reserved[0x94];
    Rotation rotation;

    const void* get();
    const Vector3& getCofmInBody(Vector3&) const;
    Frame f();
};

Frame S::f()
{
    get();
    Vector3 temporary;
    const Vector3& position = getCofmInBody(temporary);
    Frame result(rotation);
    result.translation.x = position.x;
    result.translation.y = position.y;
    result.translation.z = position.z;
    return result;
}
