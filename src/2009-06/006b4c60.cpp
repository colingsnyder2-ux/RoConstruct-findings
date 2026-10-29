// roc 2009-06 006b4c60  unit: RBX::BlockBlockContact  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b4c60
//
// 006b4c60  83ec0c               sub esp, 0xc
// 006b4c63  56                   push esi
// 006b4c64  8b742418             mov esi, dword ptr [esp + 0x18]
// 006b4c68  837e0400             cmp dword ptr [esi + 4], 0
// 006b4c6c  7547                 jne 0x6b4cb5
// 006b4c6e  f605f8c6a30001       test byte ptr [0xa3c6f8], 1
// 006b4c75  751b                 jne 0x6b4c92
// 006b4c77  d9ee                 fldz 
// 006b4c79  830df8c6a30001       or dword ptr [0xa3c6f8], 1
// 006b4c80  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 006b4c86  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 006b4c8c  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 006b4c92  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b4c96  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 006b4c9c  d918                 fstp dword ptr [eax]
// 006b4c9e  5e                   pop esi
// 006b4c9f  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 006b4ca5  d95804               fstp dword ptr [eax + 4]
// 006b4ca8  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 006b4cae  d95808               fstp dword ptr [eax + 8]
// 006b4cb1  83c40c               add esp, 0xc
// 006b4cb4  c3                   ret 
// 006b4cb5  8b0df8c6a300         mov ecx, dword ptr [0xa3c6f8]
// 006b4cbb  d9ee                 fldz 
// 006b4cbd  f6c101               test cl, 1
// 006b4cc0  7523                 jne 0x6b4ce5
// 006b4cc2  d9c0                 fld st(0)
// 006b4cc4  83c901               or ecx, 1
// 006b4cc7  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 006b4ccd  890df8c6a300         mov dword ptr [0xa3c6f8], ecx
// 006b4cd3  d9c1                 fld st(1)
// 006b4cd5  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 006b4cdb  d9c2                 fld st(2)
// 006b4cdd  d915f4c6a300         fst dword ptr [0xa3c6f4]
// 006b4ce3  eb14                 jmp 0x6b4cf9
// 006b4ce5  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 006b4ceb  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 006b4cf1  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 006b4cf7  d9ca                 fxch st(2)
// 006b4cf9  d9ca                 fxch st(2)
// 006b4cfb  d9542404             fst dword ptr [esp + 4]
// 006b4cff  d9c9                 fxch st(1)
// 006b4d01  d9542408             fst dword ptr [esp + 8]
// 006b4d05  d9ca                 fxch st(2)
// 006b4d07  d954240c             fst dword ptr [esp + 0xc]
// 006b4d0b  f6c101               test cl, 1
// 006b4d0e  752d                 jne 0x6b4d3d
// 006b4d10  ddd9                 fstp st(1)
// 006b4d12  83c901               or ecx, 1
// 006b4d15  ddd9                 fstp st(1)
// 006b4d17  890df8c6a300         mov dword ptr [0xa3c6f8], ecx
// 006b4d1d  ddd8                 fstp st(0)
// 006b4d1f  d9c0                 fld st(0)
// 006b4d21  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 006b4d27  d9c1                 fld st(1)
// 006b4d29  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 006b4d2f  d9c2                 fld st(2)
// 006b4d31  d915f4c6a300         fst dword ptr [0xa3c6f4]
// 006b4d37  d9c9                 fxch st(1)
// 006b4d39  d9ca                 fxch st(2)
// 006b4d3b  d9c9                 fxch st(1)
// 006b4d3d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006b4d41  d9c9                 fxch st(1)
// 006b4d43  d81a                 fcomp dword ptr [edx]
// 006b4d45  dfe0                 fnstsw ax
// 006b4d47  f6c444               test ah, 0x44
// 006b4d4a  7a35                 jp 0x6b4d81
// 006b4d4c  d9c9                 fxch st(1)
// 006b4d4e  d85a04               fcomp dword ptr [edx + 4]
// 006b4d51  dfe0                 fnstsw ax
// 006b4d53  f6c444               test ah, 0x44
// 006b4d56  7a2b                 jp 0x6b4d83
// 006b4d58  d85a08               fcomp dword ptr [edx + 8]
// 006b4d5b  dfe0                 fnstsw ax
// 006b4d5d  f6c444               test ah, 0x44
// 006b4d60  7a23                 jp 0x6b4d85
// 006b4d62  ddd8                 fstp st(0)
// 006b4d64  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b4d68  d9442404             fld dword ptr [esp + 4]
// 006b4d6c  d918                 fstp dword ptr [eax]
// 006b4d6e  5e                   pop esi
// 006b4d6f  d9442404             fld dword ptr [esp + 4]
// 006b4d73  d95804               fstp dword ptr [eax + 4]
// 006b4d76  d9442408             fld dword ptr [esp + 8]
// 006b4d7a  d95808               fstp dword ptr [eax + 8]
// 006b4d7d  83c40c               add esp, 0xc
// 006b4d80  c3                   ret 
// 006b4d81  ddd9                 fstp st(1)
// 006b4d83  ddd8                 fstp st(0)
// 006b4d85  f6c101               test cl, 1
// 006b4d88  751d                 jne 0x6b4da7
// 006b4d8a  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 006b4d90  83c901               or ecx, 1
// 006b4d93  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 006b4d99  890df8c6a300         mov dword ptr [0xa3c6f8], ecx
// 006b4d9f  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 006b4da5  eb02                 jmp 0x6b4da9
// 006b4da7  ddd8                 fstp st(0)
// 006b4da9  8b442420             mov eax, dword ptr [esp + 0x20]
// 006b4dad  50                   push eax
// 006b4dae  8d4c2408             lea ecx, [esp + 8]
// 006b4db2  51                   push ecx
// 006b4db3  52                   push edx
// 006b4db4  68ecc6a300           push 0xa3c6ec
// 006b4db9  56                   push esi
// 006b4dba  e861fdffff           call 0x6b4b20
// 006b4dbf  83c414               add esp, 0x14
// 006b4dc2  eba0                 jmp 0x6b4d64
// copied from an identical function in another client (function ?reconstruct@@YA?AUVector@@PAUData@@ABU1@I@Z)

// from server: 91% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vector
{
    float x, y, z;

    Vector(float, float, float);
    Vector(const Vector&);
    bool operator!=(const Vector&) const;
    static const Vector& zero();
};

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

inline Vector::Vector(const Vector& v)
    : x(v.x), y(v.y), z(v.z)
{
}

inline bool Vector::operator!=(const Vector& v) const
{
    return x != v.x || y != v.y || z != v.z;
}

inline const Vector& Vector::zero()
{
    static const Vector value(0.0f, 0.0f, 0.0f);
    return value;
}

struct Data
{
    unsigned int unused;
    unsigned int count;
};

extern void __cdecl calculate(
    Data*, const Vector*, const Vector*, Vector*, unsigned int);

Vector __cdecl reconstruct(
    Data* data, const Vector& target, unsigned int parameter)
{
    if (data->count == 0)
        return Vector::zero();

    Vector result(Vector::zero());
    if (target != Vector::zero())
        calculate(data, &Vector::zero(), &target, &result, parameter);

    return result;
}