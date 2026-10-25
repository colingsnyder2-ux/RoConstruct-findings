// from server: 100% by king_originala
// roc 2008-06 005fd880  unit: RBX::P8Tool::?$GetSetImpl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd880
//
// 005fd880  8bc1                 mov eax, ecx
// 005fd882  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd886  83ec0c               sub esp, 0xc
// 005fd889  85c9                 test ecx, ecx
// 005fd88b  7405                 je 0x5fd892
// 005fd88d  83c1ec               add ecx, -0x14
// 005fd890  eb02                 jmp 0x5fd894
// 005fd892  33c9                 xor ecx, ecx
// 005fd894  56                   push esi
// 005fd895  8b7010               mov esi, dword ptr [eax + 0x10]
// 005fd898  8d542404             lea edx, [esp + 4]
// 005fd89c  52                   push edx
// 005fd89d  8b91c0010000         mov edx, dword ptr [ecx + 0x1c0]
// 005fd8a3  8b1432               mov edx, dword ptr [edx + esi]
// 005fd8a6  03500c               add edx, dword ptr [eax + 0xc]
// 005fd8a9  8b4008               mov eax, dword ptr [eax + 8]
// 005fd8ac  8d8c0ac0010000       lea ecx, [edx + ecx + 0x1c0]
// 005fd8b3  ffd0                 call eax
// 005fd8b5  d900                 fld dword ptr [eax]
// 005fd8b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fd8bb  d919                 fstp dword ptr [ecx]
// 005fd8bd  5e                   pop esi
// 005fd8be  d94004               fld dword ptr [eax + 4]
// 005fd8c1  d95904               fstp dword ptr [ecx + 4]
// 005fd8c4  d94008               fld dword ptr [eax + 8]
// 005fd8c7  8bc1                 mov eax, ecx
// 005fd8c9  d95908               fstp dword ptr [ecx + 8]
// 005fd8cc  83c40c               add esp, 0xc
// 005fd8cf  c20800               ret 8

struct Vector3 {
    float x, y, z;
    Vector3();
    Vector3(const Vector3 &other);
};

inline Vector3::Vector3()
{
}

inline Vector3::Vector3(const Vector3 &other)
    : x(other.x), y(other.y), z(other.z)
{
}

typedef Vector3 &(__thiscall *Getter)(void *, Vector3 *);

struct S {
    char padding[8];
    Getter getter;
    int adjustment;
    int virtualOffset;
    Vector3 f(void *object);
};

Vector3 S::f(void *object)
{
    Vector3 temporary;
    char *base = object ? (char *)object - 20 : 0;
    return getter(base + 448 +
                  (*(int *)((char *)*(int **)(base + 448) + virtualOffset)
                   + adjustment), &temporary);
}
