// from server: 100% by king_originala
// roc 2008-06 006498b0  unit: RBX::Ball  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006498b0
//
// 006498b0  d944240c             fld dword ptr [esp + 0xc]
// 006498b4  53                   push ebx
// 006498b5  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006498b9  dcc8                 fmul st(0), st(0)
// 006498bb  56                   push esi
// 006498bc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006498c0  57                   push edi
// 006498c1  33ff                 xor edi, edi
// 006498c3  83c308               add ebx, 8
// 006498c6  83c608               add esi, 8
// 006498c9  33d2                 xor edx, edx
// 006498cb  8bcb                 mov ecx, ebx
// 006498cd  d946f8               fld dword ptr [esi - 8]
// 006498d0  d861f8               fsub dword ptr [ecx - 8]
// 006498d3  d946fc               fld dword ptr [esi - 4]
// 006498d6  d861fc               fsub dword ptr [ecx - 4]
// 006498d9  d906                 fld dword ptr [esi]
// 006498db  d821                 fsub dword ptr [ecx]
// 006498dd  d9c2                 fld st(2)
// 006498df  decb                 fmulp st(3)
// 006498e1  dcc8                 fmul st(0), st(0)
// 006498e3  dec2                 faddp st(2)
// 006498e5  dcc8                 fmul st(0), st(0)
// 006498e7  dec1                 faddp st(1)
// 006498e9  d8d9                 fcomp st(1)
// 006498eb  dfe0                 fnstsw ax
// 006498ed  f6c405               test ah, 5
// 006498f0  7b11                 jnp 0x649903
// 006498f2  42                   inc edx
// 006498f3  83c10c               add ecx, 0xc
// 006498f6  83fa04               cmp edx, 4
// 006498f9  7cd2                 jl 0x6498cd
// 006498fb  5f                   pop edi
// 006498fc  ddd8                 fstp st(0)
// 006498fe  5e                   pop esi
// 006498ff  32c0                 xor al, al
// 00649901  5b                   pop ebx
// 00649902  c3                   ret 
// 00649903  47                   inc edi
// 00649904  83c60c               add esi, 0xc
// 00649907  83ff04               cmp edi, 4
// 0064990a  7cbd                 jl 0x6498c9
// 0064990c  5f                   pop edi
// 0064990d  ddd8                 fstp st(0)
// 0064990f  5e                   pop esi
// 00649910  b001                 mov al, 1
// 00649912  5b                   pop ebx
// 00649913  c3                   ret 

struct Vector3 {
    float x, y, z;
};

bool __cdecl testPoints(const Vector3* a, const Vector3* b, float radius)
{
    double radiusSquared = (double)radius * radius;
    int i = 0;
    do {
        int j = 0;
        do {
            double x = (double)a[i].x - b[j].x;
            double y = (double)a[i].y - b[j].y;
            double z = (double)a[i].z - b[j].z;
            double xx = x * x;
            if (xx + z * z + y * y < radiusSquared)
                goto nextPoint;
            ++j;
        } while (j < 4);
        return false;
nextPoint:
        ++i;
    } while (i < 4);
    return true;
}
