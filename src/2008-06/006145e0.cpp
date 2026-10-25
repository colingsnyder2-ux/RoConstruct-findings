// from server: 100% by king_originala
// roc 2008-06 006145e0  unit: RBX::RevoluteLink  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006145e0
//
// 006145e0  83ec58               sub esp, 0x58
// 006145e3  56                   push esi
// 006145e4  8bf1                 mov esi, ecx
// 006145e6  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006145e9  85c9                 test ecx, ecx
// 006145eb  7407                 je 0x6145f4
// 006145ed  e81eb90400           call 0x65ff10
// 006145f2  eb06                 jmp 0x6145fa
// 006145f4  d9868c000000         fld dword ptr [esi + 0x8c]
// 006145fa  8bce                 mov ecx, esi
// 006145fc  d95c2404             fstp dword ptr [esp + 4]
// 00614600  e85b4df8ff           call 0x599360
// 00614605  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00614608  85c9                 test ecx, ecx
// 0061460a  7407                 je 0x614613
// 0061460c  e85fbb0400           call 0x660170
// 00614611  eb03                 jmp 0x614616
// 00614613  8d4668               lea eax, [esi + 0x68]
// 00614616  50                   push eax
// 00614617  8d4c2418             lea ecx, [esp + 0x18]
// 0061461b  e800ecefff           call 0x513220
// 00614620  8d8694000000         lea eax, [esi + 0x94]
// 00614626  50                   push eax
// 00614627  8d4c2418             lea ecx, [esp + 0x18]
// 0061462b  51                   push ecx
// 0061462c  8d542440             lea edx, [esp + 0x40]
// 00614630  52                   push edx
// 00614631  e83a95fcff           call 0x5ddb70
// 00614636  d9442410             fld dword ptr [esp + 0x10]
// 0061463a  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0061463e  d95c2408             fstp dword ptr [esp + 8]
// 00614642  83c408               add esp, 8
// 00614645  8d44243c             lea eax, [esp + 0x3c]
// 00614649  50                   push eax
// 0061464a  51                   push ecx
// 0061464b  8d542414             lea edx, [esp + 0x14]
// 0061464f  52                   push edx
// 00614650  8bce                 mov ecx, esi
// 00614652  e829feffff           call 0x614480
// 00614657  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0061465b  50                   push eax
// 0061465c  56                   push esi
// 0061465d  e80e94fcff           call 0x5dda70
// 00614662  83c414               add esp, 0x14
// 00614665  8bc6                 mov eax, esi
// 00614667  5e                   pop esi
// 00614668  83c458               add esp, 0x58
// 0061466b  c20800               ret 8

struct Vector3 {
    float x, y, z;
};

struct Matrix {
    float elements[9];
    Matrix(const Matrix& value);
};

struct Source {
    float angle();
    const Matrix& rotation();
};

extern Matrix __cdecl multiply(const Matrix&, const Matrix&);
extern void __cdecl calculate(Vector3*, const Vector3*, const void*,
                              const Matrix*, float);

struct Link {
    char reserved0[0x28];
    Source* source;
    char reserved1[0x3c];
    Matrix localRotation;
    float localAngle;
    char reserved2[4];
    Matrix offsetRotation;

    const void* get();
    Vector3* getCofmInBody(Vector3* result);
    Vector3* evaluate(Vector3* result, const void* value);
};

Vector3* Link::evaluate(Vector3* result, const void* value)
{
    float angle = source ? source->angle() : localAngle;
    get();

    Matrix rotation(source ? source->rotation() : localRotation);
    Matrix transformed = multiply(rotation, offsetRotation);
    Vector3 center;

    calculate(result, getCofmInBody(&center), value, &transformed, angle);
    return result;
}
