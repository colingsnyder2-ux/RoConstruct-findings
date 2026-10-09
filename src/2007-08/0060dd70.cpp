// from server: 64% by colin
// roc 2007-08 0060dd70  unit: RBX::Ball  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060dd70
//
// 0060dd70  d944240c             fld dword ptr [esp + 0xc]
// 0060dd74  53                   push ebx
// 0060dd75  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0060dd79  dcc8                 fmul st(0), st(0)
// 0060dd7b  56                   push esi
// 0060dd7c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060dd80  57                   push edi
// 0060dd81  33ff                 xor edi, edi
// 0060dd83  83c308               add ebx, 8
// 0060dd86  83c608               add esi, 8
// 0060dd89  33d2                 xor edx, edx
// 0060dd8b  8bcb                 mov ecx, ebx
// 0060dd8d  d946f8               fld dword ptr [esi - 8]
// 0060dd90  d861f8               fsub dword ptr [ecx - 8]
// 0060dd93  d946fc               fld dword ptr [esi - 4]
// 0060dd96  d861fc               fsub dword ptr [ecx - 4]
// 0060dd99  d906                 fld dword ptr [esi]
// 0060dd9b  d821                 fsub dword ptr [ecx]
// 0060dd9d  d9c2                 fld st(2)
// 0060dd9f  decb                 fmulp st(3)
// 0060dda1  dcc8                 fmul st(0), st(0)
// 0060dda3  dec2                 faddp st(2)
// 0060dda5  dcc8                 fmul st(0), st(0)
// 0060dda7  dec1                 faddp st(1)
// 0060dda9  d8d9                 fcomp st(1)
// 0060ddab  dfe0                 fnstsw ax
// 0060ddad  f6c405               test ah, 5
// 0060ddb0  7b13                 jnp 0x60ddc5
// 0060ddb2  83c201               add edx, 1
// 0060ddb5  83c10c               add ecx, 0xc
// 0060ddb8  83fa04               cmp edx, 4
// 0060ddbb  7cd0                 jl 0x60dd8d
// 0060ddbd  5f                   pop edi
// 0060ddbe  ddd8                 fstp st(0)
// 0060ddc0  5e                   pop esi
// 0060ddc1  32c0                 xor al, al
// 0060ddc3  5b                   pop ebx
// 0060ddc4  c3                   ret 
// 0060ddc5  83c701               add edi, 1
// 0060ddc8  83c60c               add esi, 0xc
// 0060ddcb  83ff04               cmp edi, 4
// 0060ddce  7cb9                 jl 0x60dd89
// 0060ddd0  5f                   pop edi
// 0060ddd1  ddd8                 fstp st(0)
// 0060ddd3  5e                   pop esi
// 0060ddd4  b001                 mov al, 1
// 0060ddd6  5b                   pop ebx
// 0060ddd7  c3                   ret 

struct Vector3 {
    float x, y, z;
};

struct Ball {
    bool overlapsSomething(const Vector3* other, float radius) const;
};

bool Ball::overlapsSomething(const Vector3* other, float radius) const {
    const Vector3* self = (const Vector3*)((const char*)this + 8);
    float r2 = radius * radius;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            float dx = self[i].x - other[j].x;
            float dy = self[i].y - other[j].y;
            float dz = self[i].z - other[j].z;
            float d2 = dx * dx + dy * dy + dz * dz;
            if (d2 <= r2) {
                return true;
            }
        }
    }
    return false;
}
