// from server: 100% by king_originala
// roc 2008-06 00599df0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599df0
//
// 00599df0  8bc1                 mov eax, ecx
// 00599df2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00599df6  83ec0c               sub esp, 0xc
// 00599df9  85c9                 test ecx, ecx
// 00599dfb  7405                 je 0x599e02
// 00599dfd  83c1ec               add ecx, -0x14
// 00599e00  eb02                 jmp 0x599e04
// 00599e02  33c9                 xor ecx, ecx
// 00599e04  56                   push esi
// 00599e05  8b7010               mov esi, dword ptr [eax + 0x10]
// 00599e08  8d542404             lea edx, [esp + 4]
// 00599e0c  52                   push edx
// 00599e0d  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 00599e13  8b1432               mov edx, dword ptr [edx + esi]
// 00599e16  03500c               add edx, dword ptr [eax + 0xc]
// 00599e19  8b4008               mov eax, dword ptr [eax + 8]
// 00599e1c  8d8c0a34010000       lea ecx, [edx + ecx + 0x134]
// 00599e23  ffd0                 call eax
// 00599e25  d900                 fld dword ptr [eax]
// 00599e27  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00599e2b  d919                 fstp dword ptr [ecx]
// 00599e2d  5e                   pop esi
// 00599e2e  d94004               fld dword ptr [eax + 4]
// 00599e31  d95904               fstp dword ptr [ecx + 4]
// 00599e34  d94008               fld dword ptr [eax + 8]
// 00599e37  8bc1                 mov eax, ecx
// 00599e39  d95908               fstp dword ptr [ecx + 8]
// 00599e3c  83c40c               add esp, 0xc
// 00599e3f  c20800               ret 8

struct Vector3 {
    float x, y, z;

    Vector3();
    Vector3(const Vector3 &other);
};

inline Vector3::Vector3() {
}

inline Vector3::Vector3(const Vector3 &other)
    : x(other.x), y(other.y), z(other.z) {
}

typedef Vector3 *(__thiscall *Getter)(void *, Vector3 *);

struct S {
    char padding[8];
    Getter getter;
    int adjustment;
    int tableOffset;

    Vector3 get(void *object) const;
};

Vector3 S::get(void *object) const {
    char *base = object ? static_cast<char *>(object) - 0x14 : 0;
    Vector3 result;
    return *getter(
        base +
        (*reinterpret_cast<int *>(
            reinterpret_cast<char *>(
                *reinterpret_cast<int **>(base + 0x134)) +
            tableOffset) + adjustment) +
        0x134,
        &result);
}
