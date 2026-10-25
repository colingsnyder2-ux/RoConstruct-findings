// from server: 100% by king_originala
// roc 2008-06 004fd530  unit: RBX::ViewNew::SphereBuilder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fd530
//
// 004fd530  83ec08               sub esp, 8
// 004fd533  56                   push esi
// 004fd534  8b742410             mov esi, dword ptr [esp + 0x10]
// 004fd538  8d442404             lea eax, [esp + 4]
// 004fd53c  50                   push eax
// 004fd53d  8bce                 mov ecx, esi
// 004fd53f  e8ccb00100           call 0x518610
// 004fd544  d94004               fld dword ptr [eax + 4]
// 004fd547  d900                 fld dword ptr [eax]
// 004fd549  dcc8                 fmul st(0), st(0)
// 004fd54b  d9c1                 fld st(1)
// 004fd54d  deca                 fmulp st(2)
// 004fd54f  dec1                 faddp st(1)
// 004fd551  d9fa                 fsqrt 
// 004fd553  d9e8                 fld1 
// 004fd555  def1                 fdivrp st(1)
// 004fd557  d900                 fld dword ptr [eax]
// 004fd559  d8c9                 fmul st(1)
// 004fd55b  d9c9                 fxch st(1)
// 004fd55d  d84804               fmul dword ptr [eax + 4]
// 004fd560  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fd564  d900                 fld dword ptr [eax]
// 004fd566  d8ca                 fmul st(2)
// 004fd568  d95e04               fstp dword ptr [esi + 4]
// 004fd56b  d94004               fld dword ptr [eax + 4]
// 004fd56e  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fd572  d8c9                 fmul st(1)
// 004fd574  d95e08               fstp dword ptr [esi + 8]
// 004fd577  5e                   pop esi
// 004fd578  d9ee                 fldz 
// 004fd57a  d918                 fstp dword ptr [eax]
// 004fd57c  d9c9                 fxch st(1)
// 004fd57e  d95804               fstp dword ptr [eax + 4]
// 004fd581  d95808               fstp dword ptr [eax + 8]
// 004fd584  83c408               add esp, 8
// 004fd587  c3                   ret 

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vector2 {
    float x, y;
};

struct Vector3 {
    float x, y, z;
    Vector2* yz(Vector2* result) const;
};

Vector3* __cdecl normalize(Vector3* v, Vector3* result,
                          float unused, const Vector2* scale)
{
    Vector2 temporary;
    const Vector2* p = v->yz(&temporary);
    float reciprocal = 1.0f / (float)sqrt(p->x * p->x + p->y * p->y);
    float y = p->x * reciprocal;
    float z = p->y * reciprocal;

    v->y = scale->x * y;
    v->z = scale->y * z;

    result->x = 0.0f;
    result->y = y;
    result->z = z;
    return result;
}
