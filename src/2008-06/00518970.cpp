// from server: 100% by king_originala
// roc 2008-06 00518970  unit: G3D::TextInput::WrongSymbol  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518970
//
// 00518970  83ec40               sub esp, 0x40
// 00518973  56                   push esi
// 00518974  57                   push edi
// 00518975  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00518979  8d442424             lea eax, [esp + 0x24]
// 0051897d  50                   push eax
// 0051897e  8bf1                 mov esi, ecx
// 00518980  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00518988  e883abffff           call 0x513510
// 0051898d  d94008               fld dword ptr [eax + 8]
// 00518990  d84f18               fmul dword ptr [edi + 0x18]
// 00518993  8d4c240c             lea ecx, [esp + 0xc]
// 00518997  d94004               fld dword ptr [eax + 4]
// 0051899a  51                   push ecx
// 0051899b  d84f14               fmul dword ptr [edi + 0x14]
// 0051899e  8d54241c             lea edx, [esp + 0x1c]
// 005189a2  52                   push edx
// 005189a3  dec1                 faddp st(1)
// 005189a5  d900                 fld dword ptr [eax]
// 005189a7  d84f10               fmul dword ptr [edi + 0x10]
// 005189aa  dec1                 faddp st(1)
// 005189ac  d95c2414             fstp dword ptr [esp + 0x14]
// 005189b0  d94014               fld dword ptr [eax + 0x14]
// 005189b3  d84f18               fmul dword ptr [edi + 0x18]
// 005189b6  d94010               fld dword ptr [eax + 0x10]
// 005189b9  d84f14               fmul dword ptr [edi + 0x14]
// 005189bc  dec1                 faddp st(1)
// 005189be  d9400c               fld dword ptr [eax + 0xc]
// 005189c1  d84f10               fmul dword ptr [edi + 0x10]
// 005189c4  dec1                 faddp st(1)
// 005189c6  d95c2418             fstp dword ptr [esp + 0x18]
// 005189ca  d94020               fld dword ptr [eax + 0x20]
// 005189cd  d84f18               fmul dword ptr [edi + 0x18]
// 005189d0  d9401c               fld dword ptr [eax + 0x1c]
// 005189d3  d84f14               fmul dword ptr [edi + 0x14]
// 005189d6  dec1                 faddp st(1)
// 005189d8  d94018               fld dword ptr [eax + 0x18]
// 005189db  d84f10               fmul dword ptr [edi + 0x10]
// 005189de  dec1                 faddp st(1)
// 005189e0  d95c241c             fstp dword ptr [esp + 0x1c]
// 005189e4  d94704               fld dword ptr [edi + 4]
// 005189e7  d86624               fsub dword ptr [esi + 0x24]
// 005189ea  d94708               fld dword ptr [edi + 8]
// 005189ed  d86628               fsub dword ptr [esi + 0x28]
// 005189f0  d9470c               fld dword ptr [edi + 0xc]
// 005189f3  d8662c               fsub dword ptr [esi + 0x2c]
// 005189f6  d94618               fld dword ptr [esi + 0x18]
// 005189f9  d8c9                 fmul st(1)
// 005189fb  d9460c               fld dword ptr [esi + 0xc]
// 005189fe  d8cb                 fmul st(3)
// 00518a00  dec1                 faddp st(1)
// 00518a02  d906                 fld dword ptr [esi]
// 00518a04  d8cc                 fmul st(4)
// 00518a06  dec1                 faddp st(1)
// 00518a08  d95c2420             fstp dword ptr [esp + 0x20]
// 00518a0c  d9461c               fld dword ptr [esi + 0x1c]
// 00518a0f  d8c9                 fmul st(1)
// 00518a11  d94610               fld dword ptr [esi + 0x10]
// 00518a14  d8cb                 fmul st(3)
// 00518a16  dec1                 faddp st(1)
// 00518a18  d94604               fld dword ptr [esi + 4]
// 00518a1b  d8cc                 fmul st(4)
// 00518a1d  dec1                 faddp st(1)
// 00518a1f  d95c2424             fstp dword ptr [esp + 0x24]
// 00518a23  d84e20               fmul dword ptr [esi + 0x20]
// 00518a26  d94614               fld dword ptr [esi + 0x14]
// 00518a29  deca                 fmulp st(2)
// 00518a2b  dec1                 faddp st(1)
// 00518a2d  d94608               fld dword ptr [esi + 8]
// 00518a30  8b742454             mov esi, dword ptr [esp + 0x54]
// 00518a34  deca                 fmulp st(2)
// 00518a36  56                   push esi
// 00518a37  dec1                 faddp st(1)
// 00518a39  d95c242c             fstp dword ptr [esp + 0x2c]
// 00518a3d  e8eefdffff           call 0x518830
// 00518a42  83c40c               add esp, 0xc
// 00518a45  5f                   pop edi
// 00518a46  8bc6                 mov eax, esi
// 00518a48  5e                   pop esi
// 00518a49  83c440               add esp, 0x40
// 00518a4c  c20800               ret 8

struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[3][3];
};

struct Ray {
    unsigned int tag;
    Vector3 origin;
    Vector3 direction;
};

Ray* __cdecl makeRay(Ray* result, const Vector3* origin,
                    const Vector3* direction);

inline void multiply(Vector3& r, const Matrix3& a, const Vector3& v) {
    r.x = a.m[0][0] * v.x
        + (a.m[0][1] * v.y + a.m[0][2] * v.z);
    r.y = a.m[1][0] * v.x
        + (a.m[1][1] * v.y + a.m[1][2] * v.z);
    r.z = a.m[2][0] * v.x
        + (a.m[2][1] * v.y + a.m[2][2] * v.z);
}

struct S {
    float m[3][3];
    Vector3 translation;

    Matrix3* transpose(Matrix3* result) const;
    Ray* transform(Ray* result, const Ray& ray) const;
};

Ray* S::transform(Ray* result, const Ray& ray) const {
    volatile int zero = 0;
    Matrix3 storage;
    Vector3 direction;
    multiply(direction, *transpose(&storage), ray.direction);

    double x = double(ray.origin.x) - translation.x;
    double y = double(ray.origin.y) - translation.y;
    double z = double(ray.origin.z) - translation.z;

    Vector3 origin;
    origin.x = float(m[2][0] * z + m[1][0] * y + m[0][0] * x);
    origin.y = float(m[2][1] * z + m[1][1] * y + m[0][1] * x);
    origin.z = float(m[2][2] * z + m[1][2] * y + m[0][2] * x);

    makeRay(result, &origin, &direction);
    return result;
}
