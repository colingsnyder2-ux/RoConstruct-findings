// from server: 100% by king_originala
// roc 2008-06 005dddc0  unit: RBX::Message  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dddc0
//
// 005dddc0  83ec34               sub esp, 0x34
// 005dddc3  56                   push esi
// 005dddc4  e85760f3ff           call 0x513e20
// 005dddc9  50                   push eax
// 005dddca  8d4c2418             lea ecx, [esp + 0x18]
// 005dddce  e84d54f3ff           call 0x513220
// 005dddd3  d9442444             fld dword ptr [esp + 0x44]
// 005dddd7  d9c0                 fld st(0)
// 005dddd9  8d442408             lea eax, [esp + 8]
// 005ddddd  d9fe                 fsin 
// 005ddddf  50                   push eax
// 005ddde0  6a00                 push 0
// 005ddde2  8d4c241c             lea ecx, [esp + 0x1c]
// 005ddde6  d954244c             fst dword ptr [esp + 0x4c]
// 005dddea  d9c9                 fxch st(1)
// 005dddec  d9ff                 fcos 
// 005dddee  d954240c             fst dword ptr [esp + 0xc]
// 005dddf2  d95c2410             fstp dword ptr [esp + 0x10]
// 005dddf6  d95c2414             fstp dword ptr [esp + 0x14]
// 005dddfa  d9ee                 fldz 
// 005dddfc  d95c2418             fstp dword ptr [esp + 0x18]
// 005dde00  e85b54f3ff           call 0x513260
// 005dde05  d9442444             fld dword ptr [esp + 0x44]
// 005dde09  d9e0                 fchs 
// 005dde0b  8d4c2408             lea ecx, [esp + 8]
// 005dde0f  d95c2408             fstp dword ptr [esp + 8]
// 005dde13  51                   push ecx
// 005dde14  d9442408             fld dword ptr [esp + 8]
// 005dde18  6a01                 push 1
// 005dde1a  d95c2414             fstp dword ptr [esp + 0x14]
// 005dde1e  8d4c241c             lea ecx, [esp + 0x1c]
// 005dde22  d9ee                 fldz 
// 005dde24  d95c2418             fstp dword ptr [esp + 0x18]
// 005dde28  e83354f3ff           call 0x513260
// 005dde2d  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005dde31  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005dde35  8d542414             lea edx, [esp + 0x14]
// 005dde39  52                   push edx
// 005dde3a  56                   push esi
// 005dde3b  e81055f3ff           call 0x513350
// 005dde40  8bc6                 mov eax, esi
// 005dde42  5e                   pop esi
// 005dde43  83c434               add esp, 0x34
// 005dde46  c3                   ret 

extern "C" double __cdecl sin(double);
extern "C" double __cdecl cos(double);
#pragma intrinsic(sin, cos)
#pragma float_control(precise, off)

struct Vector {
    float x, y, z;
};

struct Matrix {
    float elements[9];

    Matrix(const Matrix&);
    static const Matrix& __cdecl identity();
    void setColumn(int, const Vector&);
    Matrix operator*(const Matrix&) const;
};

Matrix __cdecl rotate(const Matrix& source, float angle)
{
    Matrix rotation(Matrix::identity());

    float s = (float)sin(angle);
    float c = (float)cos(angle);

    Vector column = { c, s, 0.0f };
    rotation.setColumn(0, column);

    column.x = -s;
    column.y = c;
    column.z = 0.0f;
    rotation.setColumn(1, column);

    return source * rotation;
}
