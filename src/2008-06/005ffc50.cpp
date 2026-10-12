// from server: 93% by king_originala
// roc 2008-06 005ffc50  unit: RBX::Tool  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ffc50
//
// 005ffc50  83ec6c               sub esp, 0x6c
// 005ffc53  56                   push esi
// 005ffc54  57                   push edi
// 005ffc55  8bf9                 mov edi, ecx
// 005ffc57  8db7cc010000         lea esi, [edi + 0x1cc]
// 005ffc5d  56                   push esi
// 005ffc5e  8d4c2448             lea ecx, [esp + 0x48]
// 005ffc62  e8b935f1ff           call 0x513220
// 005ffc67  d94624               fld dword ptr [esi + 0x24]
// 005ffc6a  d95c2468             fstp dword ptr [esp + 0x68]
// 005ffc6e  6a00                 push 0
// 005ffc70  d94628               fld dword ptr [esi + 0x28]
// 005ffc73  8d44243c             lea eax, [esp + 0x3c]
// 005ffc77  d95c2470             fstp dword ptr [esp + 0x70]
// 005ffc7b  50                   push eax
// 005ffc7c  d9462c               fld dword ptr [esi + 0x2c]
// 005ffc7f  8d4c244c             lea ecx, [esp + 0x4c]
// 005ffc83  d95c2478             fstp dword ptr [esp + 0x78]
// 005ffc87  e8b435f1ff           call 0x513240
// 005ffc8c  6a01                 push 1
// 005ffc8e  8d4c2430             lea ecx, [esp + 0x30]
// 005ffc92  51                   push ecx
// 005ffc93  8d4c244c             lea ecx, [esp + 0x4c]
// 005ffc97  e8a435f1ff           call 0x513240
// 005ffc9c  8b442478             mov eax, dword ptr [esp + 0x78]
// 005ffca0  d94008               fld dword ptr [eax + 8]
// 005ffca3  51                   push ecx
// 005ffca4  d94004               fld dword ptr [eax + 4]
// 005ffca7  8d4c240c             lea ecx, [esp + 0xc]
// 005ffcab  d900                 fld dword ptr [eax]
// 005ffcad  dcc8                 fmul st(0), st(0)
// 005ffcaf  d9c1                 fld st(1)
// 005ffcb1  deca                 fmulp st(2)
// 005ffcb3  dec1                 faddp st(1)
// 005ffcb5  d9c1                 fld st(1)
// 005ffcb7  deca                 fmulp st(2)
// 005ffcb9  dec1                 faddp st(1)
// 005ffcbb  d9fa                 fsqrt 
// 005ffcbd  d9e8                 fld1 
// 005ffcbf  def1                 fdivrp st(1)
// 005ffcc1  d900                 fld dword ptr [eax]
// 005ffcc3  d8c9                 fmul st(1)
// 005ffcc5  d94004               fld dword ptr [eax + 4]
// 005ffcc8  d8ca                 fmul st(2)
// 005ffcca  d94008               fld dword ptr [eax + 8]
// 005ffccd  decb                 fmulp st(3)
// 005ffccf  d9c9                 fxch st(1)
// 005ffcd1  d9e0                 fchs 
// 005ffcd3  d9542418             fst dword ptr [esp + 0x18]
// 005ffcd7  d9c9                 fxch st(1)
// 005ffcd9  d9e0                 fchs 
// 005ffcdb  d954241c             fst dword ptr [esp + 0x1c]
// 005ffcdf  d9ca                 fxch st(2)
// 005ffce1  d9e0                 fchs 
// 005ffce3  d9542420             fst dword ptr [esp + 0x20]
// 005ffce7  d9442434             fld dword ptr [esp + 0x34]
// 005ffceb  d9c0                 fld st(0)
// 005ffced  d8ca                 fmul st(2)
// 005ffcef  d9442438             fld dword ptr [esp + 0x38]
// 005ffcf3  d9c0                 fld st(0)
// 005ffcf5  d8ce                 fmul st(6)
// 005ffcf7  deea                 fsubp st(2)
// 005ffcf9  d9c9                 fxch st(1)
// 005ffcfb  d95c240c             fstp dword ptr [esp + 0xc]
// 005ffcff  d8cb                 fmul st(3)
// 005ffd01  d9442430             fld dword ptr [esp + 0x30]
// 005ffd05  dccb                 fmul st(3), st(0)
// 005ffd07  d9c9                 fxch st(1)
// 005ffd09  dee3                 fsubrp st(3)
// 005ffd0b  d9ca                 fxch st(2)
// 005ffd0d  d95c2410             fstp dword ptr [esp + 0x10]
// 005ffd11  d9c9                 fxch st(1)
// 005ffd13  decb                 fmulp st(3)
// 005ffd15  dec9                 fmulp st(1)
// 005ffd17  dee9                 fsubp st(1)
// 005ffd19  d95c2414             fstp dword ptr [esp + 0x14]
// 005ffd1d  d905706e8200         fld dword ptr [0x826e70]
// 005ffd23  d91c24               fstp dword ptr [esp]
// 005ffd26  e84587f1ff           call 0x518470
// 005ffd2b  ddd8                 fstp st(0)
// 005ffd2d  d9442410             fld dword ptr [esp + 0x10]
// 005ffd31  d9c0                 fld st(0)
// 005ffd33  d9442418             fld dword ptr [esp + 0x18]
// 005ffd37  51                   push ecx
// 005ffd38  dcc9                 fmul st(1), st(0)
// 005ffd3a  8d4c2424             lea ecx, [esp + 0x24]
// 005ffd3e  d9442410             fld dword ptr [esp + 0x10]
// 005ffd42  d9c0                 fld st(0)
// 005ffd44  d9442420             fld dword ptr [esp + 0x20]
// 005ffd48  dcc9                 fmul st(1), st(0)
// 005ffd4a  d9cc                 fxch st(4)
// 005ffd4c  dee1                 fsubrp st(1)
// 005ffd4e  d95c2424             fstp dword ptr [esp + 0x24]
// 005ffd52  d944240c             fld dword ptr [esp + 0xc]
// 005ffd56  d9c0                 fld st(0)
// 005ffd58  decc                 fmulp st(4)
// 005ffd5a  d9442418             fld dword ptr [esp + 0x18]
// 005ffd5e  dccd                 fmul st(5), st(0)
// 005ffd60  d9cc                 fxch st(4)
// 005ffd62  dee5                 fsubrp st(5)
// 005ffd64  d9cc                 fxch st(4)
// 005ffd66  d95c2428             fstp dword ptr [esp + 0x28]
// 005ffd6a  deca                 fmulp st(2)
// 005ffd6c  deca                 fmulp st(2)
// 005ffd6e  dee1                 fsubrp st(1)
// 005ffd70  d95c242c             fstp dword ptr [esp + 0x2c]
// 005ffd74  d905706e8200         fld dword ptr [0x826e70]
// 005ffd7a  d91c24               fstp dword ptr [esp]
// 005ffd7d  e8ee86f1ff           call 0x518470
// 005ffd82  8d542408             lea edx, [esp + 8]
// 005ffd86  ddd8                 fstp st(0)
// 005ffd88  52                   push edx
// 005ffd89  6a00                 push 0
// 005ffd8b  8d4c244c             lea ecx, [esp + 0x4c]
// 005ffd8f  e8cc34f1ff           call 0x513260
// 005ffd94  8d442420             lea eax, [esp + 0x20]
// 005ffd98  50                   push eax
// 005ffd99  6a01                 push 1
// 005ffd9b  8d4c244c             lea ecx, [esp + 0x4c]
// 005ffd9f  e8bc34f1ff           call 0x513260
// 005ffda4  8d4c2414             lea ecx, [esp + 0x14]
// 005ffda8  51                   push ecx
// 005ffda9  6a02                 push 2
// 005ffdab  8d4c244c             lea ecx, [esp + 0x4c]
// 005ffdaf  e8ac34f1ff           call 0x513260
// 005ffdb4  8d542444             lea edx, [esp + 0x44]
// 005ffdb8  52                   push edx
// 005ffdb9  8bcf                 mov ecx, edi
// 005ffdbb  e8b0fdffff           call 0x5ffb70
// 005ffdc0  5f                   pop edi
// 005ffdc1  5e                   pop esi
// 005ffdc2  83c46c               add esp, 0x6c
// 005ffdc5  c20400               ret 4

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

extern const float epsilon;

struct Vector {
    float x, y, z;
    float unitize(float tolerance);
};

struct Matrix {
    float data[9];
    Matrix(const Matrix&);
    Vector column(int) const;
    void setColumn(int, const Vector&);
};

struct Frame {
    Matrix rotation;
    Vector position;
};

struct Tool {
    char padding[0x1cc];
    Frame pose;

    void apply(const Frame&);
    void orient(const Vector&);
};

void Tool::orient(const Vector& direction)
{
    const Frame& current = pose;
    Frame frame = {
        current.rotation,
        { current.position.x, current.position.y, current.position.z }
    };

    Vector oldRight = frame.rotation.column(0);
    Vector oldUp = frame.rotation.column(1);
    Vector right;

    float inverseLength = 1.0f / (float)sqrt(
        direction.x * direction.x +
        direction.y * direction.y +
        direction.z * direction.z);

    Vector normalized = {
        direction.x * inverseLength,
        direction.y * inverseLength,
        direction.z * inverseLength
    };
    Vector forward = {
        -normalized.x,
        -normalized.y,
        -normalized.z
    };

    right.x = oldUp.y * forward.z - oldUp.z * forward.y;
    right.y = oldUp.z * forward.x - oldUp.x * forward.z;
    right.z = oldUp.x * forward.y - oldUp.y * forward.x;
    right.unitize(epsilon);

    Vector up = {
        forward.y * right.z - forward.z * right.y,
        forward.z * right.x - forward.x * right.z,
        forward.x * right.y - forward.y * right.x
    };
    up.unitize(epsilon);

    frame.rotation.setColumn(0, right);
    frame.rotation.setColumn(1, up);
    frame.rotation.setColumn(2, forward);
    apply(frame);
}
