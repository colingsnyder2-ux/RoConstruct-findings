// from server: 100% by king_originala
// roc 2008-06 00599ce0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599ce0
//
// 00599ce0  8bc1                 mov eax, ecx
// 00599ce2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00599ce6  85c9                 test ecx, ecx
// 00599ce8  7405                 je 0x599cef
// 00599cea  83c1ec               add ecx, -0x14
// 00599ced  eb02                 jmp 0x599cf1
// 00599cef  33c9                 xor ecx, ecx
// 00599cf1  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 00599cf7  56                   push esi
// 00599cf8  8b7010               mov esi, dword ptr [eax + 0x10]
// 00599cfb  8b1432               mov edx, dword ptr [edx + esi]
// 00599cfe  03500c               add edx, dword ptr [eax + 0xc]
// 00599d01  8b4008               mov eax, dword ptr [eax + 8]
// 00599d04  8d8c0a34010000       lea ecx, [edx + ecx + 0x134]
// 00599d0b  ffd0                 call eax
// 00599d0d  d900                 fld dword ptr [eax]
// 00599d0f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00599d13  d919                 fstp dword ptr [ecx]
// 00599d15  5e                   pop esi
// 00599d16  d94004               fld dword ptr [eax + 4]
// 00599d19  d95904               fstp dword ptr [ecx + 4]
// 00599d1c  d94008               fld dword ptr [eax + 8]
// 00599d1f  8bc1                 mov eax, ecx
// 00599d21  d95908               fstp dword ptr [ecx + 8]
// 00599d24  c20800               ret 8

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3 &other);
};

inline Vector3::Vector3(const Vector3 &other)
    : x(other.x), y(other.y), z(other.z) {
}

typedef const Vector3 *(__thiscall *Getter)(void *);

struct S {
    char padding[8];
    Getter getter;
    int adjustment;
    int tableOffset;

    Vector3 get(void *object) const;
};

Vector3 S::get(void *object) const {
    char *base = object ? static_cast<char *>(object) - 0x14 : 0;
    return *getter(
        base +
        (*reinterpret_cast<int *>(
            reinterpret_cast<char *>(
                *reinterpret_cast<int **>(base + 0x134)) +
            tableOffset) + adjustment) +
        0x134);
}
