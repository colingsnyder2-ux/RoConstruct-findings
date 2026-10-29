// roc 2009-06 006f34d0  unit: RBX::HUMAN::Running  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f34d0
//
// 006f34d0  b801000000           mov eax, 1
// 006f34d5  84059401a500         test byte ptr [0xa50194], al
// 006f34db  7520                 jne 0x6f34fd
// 006f34dd  d9058ce58e00         fld dword ptr [0x8ee58c]
// 006f34e3  09059401a500         or dword ptr [0xa50194], eax
// 006f34e9  d9158801a500         fst dword ptr [0xa50188]
// 006f34ef  d9ee                 fldz 
// 006f34f1  d91d8c01a500         fstp dword ptr [0xa5018c]
// 006f34f7  d91d9001a500         fstp dword ptr [0xa50190]
// 006f34fd  8b442404             mov eax, dword ptr [esp + 4]
// 006f3501  d9058801a500         fld dword ptr [0xa50188]
// 006f3507  d918                 fstp dword ptr [eax]
// 006f3509  d9058c01a500         fld dword ptr [0xa5018c]
// 006f350f  d95804               fstp dword ptr [eax + 4]
// 006f3512  d9059001a500         fld dword ptr [0xa50190]
// 006f3518  d95808               fstp dword ptr [eax + 8]
// 006f351b  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YA?AUVector@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern const float initialValue;

struct Vector
{
    float x, y, z;
    Vector(float value);
    Vector(const Vector& other);
};

inline Vector::Vector(float value)
    : x(value), y(0.0f), z(value)
{
}

inline Vector::Vector(const Vector& other)
    : x(other.x), y(other.y), z(other.z)
{
}

Vector func_006663a0()
{
    static Vector value(initialValue);
    return value;
}