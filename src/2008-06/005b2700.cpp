// from server: 100% by king_originala
// roc 2008-06 005b2700  unit: RBX::Accoutrement  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b2700
//
// 005b2700  83ec30               sub esp, 0x30
// 005b2703  56                   push esi
// 005b2704  8bf1                 mov esi, ecx
// 005b2706  8d8658010000         lea eax, [esi + 0x158]
// 005b270c  50                   push eax
// 005b270d  8d4c2408             lea ecx, [esp + 8]
// 005b2711  e80a0bf6ff           call 0x513220
// 005b2716  8b442438             mov eax, dword ptr [esp + 0x38]
// 005b271a  d900                 fld dword ptr [eax]
// 005b271c  8d4c2404             lea ecx, [esp + 4]
// 005b2720  d95c2428             fstp dword ptr [esp + 0x28]
// 005b2724  51                   push ecx
// 005b2725  d94004               fld dword ptr [eax + 4]
// 005b2728  8bce                 mov ecx, esi
// 005b272a  d95c2430             fstp dword ptr [esp + 0x30]
// 005b272e  d94008               fld dword ptr [eax + 8]
// 005b2731  d95c2434             fstp dword ptr [esp + 0x34]
// 005b2735  e836ffffff           call 0x5b2670
// 005b273a  5e                   pop esi
// 005b273b  83c430               add esp, 0x30
// 005b273e  c20400               ret 4

struct Vector {
    float x, y, z;
};

struct Rotation {
    float data[9];
    Rotation(const Rotation&);
};

struct Frame {
    Rotation rotation;
    Vector position;
};

struct S {
    char padding[0x158];
    Rotation rotation;

    void set(const Frame&);
    void f(const Vector&);
};

void S::f(const Vector& position)
{
    Frame frame = { rotation, { position.x, position.y, position.z } };
    set(frame);
}
