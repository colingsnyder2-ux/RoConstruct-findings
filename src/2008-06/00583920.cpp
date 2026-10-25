// from server: 100% by king_originala
// roc 2008-06 00583920  unit: RBX::VModelInstance::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583920
//
// 00583920  b801000000           mov eax, 1
// 00583925  840584559700         test byte ptr [0x975584], al
// 0058392b  754c                 jne 0x583979
// 0058392d  090584559700         or dword ptr [0x975584], eax
// 00583933  e828d0f8ff           call 0x510960
// 00583938  d900                 fld dword ptr [eax]
// 0058393a  d91d6c559700         fstp dword ptr [0x97556c]
// 00583940  d94004               fld dword ptr [eax + 4]
// 00583943  d91d70559700         fstp dword ptr [0x975570]
// 00583949  d94008               fld dword ptr [eax + 8]
// 0058394c  d91d74559700         fstp dword ptr [0x975574]
// 00583952  e809d0f8ff           call 0x510960
// 00583957  d94004               fld dword ptr [eax + 4]
// 0058395a  d9e0                 fchs 
// 0058395c  d94008               fld dword ptr [eax + 8]
// 0058395f  d9e0                 fchs 
// 00583961  d900                 fld dword ptr [eax]
// 00583963  d9e0                 fchs 
// 00583965  d91d78559700         fstp dword ptr [0x975578]
// 0058396b  d9c9                 fxch st(1)
// 0058396d  d91d7c559700         fstp dword ptr [0x97557c]
// 00583973  d91d80559700         fstp dword ptr [0x975580]
// 00583979  b86c559700           mov eax, 0x97556c
// 0058397e  c3                   ret 

struct Vector
{
    float x, y, z;

    __forceinline Vector(double a, double b, double c) throw();
    __forceinline Vector(const Vector& v) throw();
    __forceinline Vector operator-() const throw();
};

__forceinline Vector::Vector(double a, double b, double c) throw()
    : x((float)a), y((float)b), z((float)c)
{
}

__forceinline Vector::Vector(const Vector& v) throw()
    : x(v.x), y(v.y), z(v.z)
{
}

__forceinline Vector Vector::operator-() const throw()
{
    return Vector(-(double)x, -(double)y, -(double)z);
}

extern const Vector& __cdecl getVector() throw();

struct Bounds
{
    Vector first;
    Vector second;

    __forceinline Bounds() throw();
};

__forceinline Bounds::Bounds() throw()
    : first(getVector()), second(-getVector())
{
}

Bounds* __cdecl getBounds()
{
    static Bounds bounds;
    return &bounds;
}
