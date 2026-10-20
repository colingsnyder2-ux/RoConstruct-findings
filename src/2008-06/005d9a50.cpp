// from server: 98% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 94% by king_originala
// roc 2008-06 005d9a50  unit: RBX::Humanoid  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9a50
//
// 005d9a50  d9ee                 fldz 
// 005d9a52  83ec18               sub esp, 0x18
// 005d9a55  56                   push esi
// 005d9a56  b801000000           mov eax, 1
// 005d9a5b  57                   push edi
// 005d9a5c  8bf9                 mov edi, ecx
// 005d9a5e  840550f09600         test byte ptr [0x96f050], al
// 005d9a64  751a                 jne 0x5d9a80
// 005d9a66  090550f09600         or dword ptr [0x96f050], eax
// 005d9a6c  d91544f09600         fst dword ptr [0x96f044]
// 005d9a72  d91548f09600         fst dword ptr [0x96f048]
// 005d9a78  d91d4cf09600         fstp dword ptr [0x96f04c]
// 005d9a7e  eb02                 jmp 0x5d9a82
// 005d9a80  ddd8                 fstp st(0)
// 005d9a82  8b742424             mov esi, dword ptr [esp + 0x24]
// 005d9a86  d90544f09600         fld dword ptr [0x96f044]
// 005d9a8c  8b87b8010000         mov eax, dword ptr [edi + 0x1b8]
// 005d9a92  d91e                 fstp dword ptr [esi]
// 005d9a94  d90548f09600         fld dword ptr [0x96f048]
// 005d9a9a  d95e04               fstp dword ptr [esi + 4]
// 005d9a9d  d9054cf09600         fld dword ptr [0x96f04c]
// 005d9aa3  d95e08               fstp dword ptr [esi + 8]
// 005d9aa6  83f803               cmp eax, 3
// 005d9aa9  7524                 jne 0x5d9acf
// 005d9aab  d987d0010000         fld dword ptr [edi + 0x1d0]
// 005d9ab1  8bc6                 mov eax, esi
// 005d9ab3  d91e                 fstp dword ptr [esi]
// 005d9ab5  d987d4010000         fld dword ptr [edi + 0x1d4]
// 005d9abb  d95e04               fstp dword ptr [esi + 4]
// 005d9abe  d987d8010000         fld dword ptr [edi + 0x1d8]
// 005d9ac4  5f                   pop edi
// 005d9ac5  d95e08               fstp dword ptr [esi + 8]
// 005d9ac8  5e                   pop esi
// 005d9ac9  83c418               add esp, 0x18
// 005d9acc  c20800               ret 8
// 005d9acf  83f802               cmp eax, 2
// 005d9ad2  0f85bf000000         jne 0x5d9b97
// 005d9ad8  53                   push ebx
// 005d9ad9  e832f0ffff           call 0x5d8b10
// 005d9ade  d9ee                 fldz 
// 005d9ae0  d954240c             fst dword ptr [esp + 0xc]
// 005d9ae4  8bd8                 mov ebx, eax
// 005d9ae6  d9542410             fst dword ptr [esp + 0x10]
// 005d9aea  d95c2414             fstp dword ptr [esp + 0x14]
// 005d9aee  85db                 test ebx, ebx
// 005d9af0  0f84a0000000         je 0x5d9b96
// 005d9af6  8d44240c             lea eax, [esp + 0xc]
// 005d9afa  50                   push eax
// 005d9afb  8bcf                 mov ecx, edi
// 005d9afd  e8aedeffff           call 0x5d79b0
// 005d9b02  84c0                 test al, al
// 005d9b04  0f848c000000         je 0x5d9b96
// 005d9b0a  8bcb                 mov ecx, ebx
// 005d9b0c  e89ff1fbff           call 0x598cb0
// 005d9b11  d944240c             fld dword ptr [esp + 0xc]
// 005d9b15  d86024               fsub dword ptr [eax + 0x24]
// 005d9b18  83c024               add eax, 0x24
// 005d9b1b  d9442410             fld dword ptr [esp + 0x10]
// 005d9b1f  d86004               fsub dword ptr [eax + 4]
// 005d9b22  d9442414             fld dword ptr [esp + 0x14]
// 005d9b26  d86008               fsub dword ptr [eax + 8]
// 005d9b29  d9ca                 fxch st(2)
// 005d9b2b  d954240c             fst dword ptr [esp + 0xc]
// 005d9b2f  d9c9                 fxch st(1)
// 005d9b31  d80580e38100         fadd dword ptr [0x81e380]
// 005d9b37  d9ca                 fxch st(2)
// 005d9b39  d9542414             fst dword ptr [esp + 0x14]
// 005d9b3d  dcc8                 fmul st(0), st(0)
// 005d9b3f  d9c1                 fld st(1)
// 005d9b41  deca                 fmulp st(2)
// 005d9b43  dec1                 faddp st(1)
// 005d9b45  d9c1                 fld st(1)
// 005d9b47  deca                 fmulp st(2)
// 005d9b49  dec1                 faddp st(1)
// 005d9b4b  d9ee                 fldz 
// 005d9b4d  d95c2410             fstp dword ptr [esp + 0x10]
// 005d9b51  d9fa                 fsqrt 
// 005d9b53  d81d34c48100         fcomp dword ptr [0x81c434]
// 005d9b59  dfe0                 fnstsw ax
// 005d9b5b  f6c405               test ah, 5
// 005d9b5e  7a18                 jp 0x5d9b78
// 005d9b60  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 005d9b65  740a                 je 0x5d9b71
// 005d9b67  c787b801000003000000 mov dword ptr [edi + 0x1b8], 3
// 005d9b71  e82ae7e9ff           call 0x4782a0
// 005d9b76  eb0e                 jmp 0x5d9b86
// 005d9b78  8d4c2418             lea ecx, [esp + 0x18]
// 005d9b7c  51                   push ecx
// 005d9b7d  8d4c2410             lea ecx, [esp + 0x10]
// 005d9b81  e8ea0ff2ff           call 0x4fab70
// 005d9b86  d900                 fld dword ptr [eax]
// 005d9b88  d91e                 fstp dword ptr [esi]
// 005d9b8a  d94004               fld dword ptr [eax + 4]
// 005d9b8d  d95e04               fstp dword ptr [esi + 4]
// 005d9b90  d94008               fld dword ptr [eax + 8]
// 005d9b93  d95e08               fstp dword ptr [esi + 8]
// 005d9b96  5b                   pop ebx
// 005d9b97  5f                   pop edi
// 005d9b98  8bc6                 mov eax, esi
// 005d9b9a  5e                   pop esi
// 005d9b9b  83c418               add esp, 0x18
// 005d9b9e  c20800               ret 8

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off, push)

extern const float threshold;
struct Vector3
{
    float x, y, z;

    Vector3(float a = 0.0f, float b = 0.0f, float c = 0.0f)
        : x(a), y(b), z(c) {}

    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}

    Vector3& operator=(const Vector3& v)
    {
        x = v.x;
        y = v.y;
        z = v.z;
        return *this;
    }

    static const Vector3& zero();
    Vector3 unit() const;
};

inline const Vector3& Vector3::zero()
{
    static const Vector3 value;
    return value;
}

struct Transform
{
    float rotation[9];
    Vector3 position;
};

struct Part
{
    const Transform& getTransform() const;
};

struct Humanoid
{
    char padding0[0x1b8];
    int mode;
    char padding1[0x14];
    Vector3 direction;

    Part* getPart();
    bool getTarget(Vector3& target);
    Vector3 getDirection(bool update);
};

Vector3 Humanoid::getDirection(bool update)
{
    Vector3 result = Vector3::zero();

    if (mode == 3)
    {
        result = direction;
        return result;
    }

    if (mode == 2)
    {
        Part* part = getPart();
        Vector3 target;

        if (part && getTarget(target))
        {
            const Vector3& position = part->getTransform().position;
            target = Vector3(target.x - position.x,
                             target.y - position.y,
                             target.z - position.z);

            target.y += 3.0f;
            float sum = target.y * target.y; sum += target.z * target.z; sum += target.x * target.x;
 target.y = 0.0f;
 float distance = static_cast<float>(sqrt(sum));

            if (distance < threshold)
            {
                if (update)
                    mode = 3;
                result = Vector3::zero();
            }
            else
            {
                result = target.unit();
            }
        }
    }

    return result;
}

#pragma float_control(pop)
