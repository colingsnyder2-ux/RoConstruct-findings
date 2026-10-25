// from server: 100% by king_originala
// roc 2008-06 005b0c30  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0c30
//
// 005b0c30  8bc1                 mov eax, ecx
// 005b0c32  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b0c36  83ec0c               sub esp, 0xc
// 005b0c39  85c9                 test ecx, ecx
// 005b0c3b  7405                 je 0x5b0c42
// 005b0c3d  83c1ec               add ecx, -0x14
// 005b0c40  eb02                 jmp 0x5b0c44
// 005b0c42  33c9                 xor ecx, ecx
// 005b0c44  56                   push esi
// 005b0c45  8b7010               mov esi, dword ptr [eax + 0x10]
// 005b0c48  8d542404             lea edx, [esp + 4]
// 005b0c4c  52                   push edx
// 005b0c4d  8b9150010000         mov edx, dword ptr [ecx + 0x150]
// 005b0c53  8b1432               mov edx, dword ptr [edx + esi]
// 005b0c56  03500c               add edx, dword ptr [eax + 0xc]
// 005b0c59  8b4008               mov eax, dword ptr [eax + 8]
// 005b0c5c  8d8c0a50010000       lea ecx, [edx + ecx + 0x150]
// 005b0c63  ffd0                 call eax
// 005b0c65  d900                 fld dword ptr [eax]
// 005b0c67  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b0c6b  d919                 fstp dword ptr [ecx]
// 005b0c6d  5e                   pop esi
// 005b0c6e  d94004               fld dword ptr [eax + 4]
// 005b0c71  d95904               fstp dword ptr [ecx + 4]
// 005b0c74  d94008               fld dword ptr [eax + 8]
// 005b0c77  8bc1                 mov eax, ecx
// 005b0c79  d95908               fstp dword ptr [ecx + 8]
// 005b0c7c  83c40c               add esp, 0xc
// 005b0c7f  c20800               ret 8

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
                *reinterpret_cast<int **>(base + 0x150)) +
            tableOffset) + adjustment) +
        0x150,
        &result);
}
