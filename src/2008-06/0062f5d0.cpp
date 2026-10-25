// from server: 100% by king_originala
// roc 2008-06 0062f5d0  unit: RBX::VExplosion::?$BoundPropGetSet  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f5d0
//
// 0062f5d0  8b442408             mov eax, dword ptr [esp + 8]
// 0062f5d4  85c0                 test eax, eax
// 0062f5d6  7405                 je 0x62f5dd
// 0062f5d8  83c0ec               add eax, -0x14
// 0062f5db  eb02                 jmp 0x62f5df
// 0062f5dd  33c0                 xor eax, eax
// 0062f5df  8b4908               mov ecx, dword ptr [ecx + 8]
// 0062f5e2  d90401               fld dword ptr [ecx + eax]
// 0062f5e5  03c8                 add ecx, eax
// 0062f5e7  8b442404             mov eax, dword ptr [esp + 4]
// 0062f5eb  d918                 fstp dword ptr [eax]
// 0062f5ed  d94104               fld dword ptr [ecx + 4]
// 0062f5f0  d95804               fstp dword ptr [eax + 4]
// 0062f5f3  d94108               fld dword ptr [ecx + 8]
// 0062f5f6  d95808               fstp dword ptr [eax + 8]
// 0062f5f9  c20800               ret 8

struct Vector3 {
    float x, y, z;
};

struct S {
    char padding[8];
    int offset;
    Vector3 get(void* object);
};

Vector3 S::get(void* object)
{
    char* base = object ? static_cast<char*>(object) - 20 : 0;
    const float* source = reinterpret_cast<const float*>(base + offset);
    Vector3 result;
    result.x = source[0];
    result.y = source[1];
    result.z = source[2];
    return result;
}
