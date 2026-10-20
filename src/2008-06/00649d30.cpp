// from server: 100% by colin
// roc 2008-06 00649d30  unit: RBX::Ball  size: 348 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649d30
//
// 00649d30  d9054cb08400         fld dword ptr [0x84b04c]
// 00649d36  8b542404             mov edx, dword ptr [esp + 4]
// 00649d3a  53                   push ebx
// 00649d3b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00649d3f  56                   push esi
// 00649d40  8b742410             mov esi, dword ptr [esp + 0x10]
// 00649d44  57                   push edi
// 00649d45  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00649d49  d91f                 fstp dword ptr [edi]
// 00649d4b  d90548b08400         fld dword ptr [0x84b048]
// 00649d51  d91b                 fstp dword ptr [ebx]
// 00649d53  d901                 fld dword ptr [ecx]
// 00649d55  d822                 fsub dword ptr [edx]
// 00649d57  d94104               fld dword ptr [ecx + 4]
// 00649d5a  d86204               fsub dword ptr [edx + 4]
// 00649d5d  d94108               fld dword ptr [ecx + 8]
// 00649d60  d86208               fsub dword ptr [edx + 8]
// 00649d63  d906                 fld dword ptr [esi]
// 00649d65  decb                 fmulp st(3)
// 00649d67  d9c9                 fxch st(1)
// 00649d69  d84e04               fmul dword ptr [esi + 4]
// 00649d6c  dec2                 faddp st(2)
// 00649d6e  d84e08               fmul dword ptr [esi + 8]
// 00649d71  dec1                 faddp st(1)
// 00649d73  d9542418             fst dword ptr [esp + 0x18]
// 00649d77  d817                 fcom dword ptr [edi]
// 00649d79  dfe0                 fnstsw ax
// 00649d7b  f6c405               test ah, 5
// 00649d7e  8d442418             lea eax, [esp + 0x18]
// 00649d82  7b02                 jnp 0x649d86
// 00649d84  8bc7                 mov eax, edi
// 00649d86  d900                 fld dword ptr [eax]
// 00649d88  d91f                 fstp dword ptr [edi]
// 00649d8a  d81b                 fcomp dword ptr [ebx]
// 00649d8c  dfe0                 fnstsw ax
// 00649d8e  f6c441               test ah, 0x41
// 00649d91  8d442418             lea eax, [esp + 0x18]
// 00649d95  7402                 je 0x649d99
// 00649d97  8bc3                 mov eax, ebx
// 00649d99  d900                 fld dword ptr [eax]
// 00649d9b  d91b                 fstp dword ptr [ebx]
// 00649d9d  d9410c               fld dword ptr [ecx + 0xc]
// 00649da0  d822                 fsub dword ptr [edx]
// 00649da2  d94110               fld dword ptr [ecx + 0x10]
// 00649da5  d86204               fsub dword ptr [edx + 4]
// 00649da8  d94114               fld dword ptr [ecx + 0x14]
// 00649dab  d86208               fsub dword ptr [edx + 8]
// 00649dae  d906                 fld dword ptr [esi]
// 00649db0  decb                 fmulp st(3)
// 00649db2  d9c9                 fxch st(1)
// 00649db4  d84e04               fmul dword ptr [esi + 4]
// 00649db7  dec2                 faddp st(2)
// 00649db9  d84e08               fmul dword ptr [esi + 8]
// 00649dbc  dec1                 faddp st(1)
// 00649dbe  d9542418             fst dword ptr [esp + 0x18]
// 00649dc2  d817                 fcom dword ptr [edi]
// 00649dc4  dfe0                 fnstsw ax
// 00649dc6  f6c405               test ah, 5
// 00649dc9  8d442418             lea eax, [esp + 0x18]
// 00649dcd  7b02                 jnp 0x649dd1
// 00649dcf  8bc7                 mov eax, edi
// 00649dd1  d900                 fld dword ptr [eax]
// 00649dd3  d91f                 fstp dword ptr [edi]
// 00649dd5  d81b                 fcomp dword ptr [ebx]
// 00649dd7  dfe0                 fnstsw ax
// 00649dd9  f6c441               test ah, 0x41
// 00649ddc  8d442418             lea eax, [esp + 0x18]
// 00649de0  7402                 je 0x649de4
// 00649de2  8bc3                 mov eax, ebx
// 00649de4  d900                 fld dword ptr [eax]
// 00649de6  d91b                 fstp dword ptr [ebx]
// 00649de8  d94118               fld dword ptr [ecx + 0x18]
// 00649deb  d822                 fsub dword ptr [edx]
// 00649ded  d9411c               fld dword ptr [ecx + 0x1c]
// 00649df0  d86204               fsub dword ptr [edx + 4]
// 00649df3  d94120               fld dword ptr [ecx + 0x20]
// 00649df6  d86208               fsub dword ptr [edx + 8]
// 00649df9  d906                 fld dword ptr [esi]
// 00649dfb  decb                 fmulp st(3)
// 00649dfd  d9c9                 fxch st(1)
// 00649dff  d84e04               fmul dword ptr [esi + 4]
// 00649e02  dec2                 faddp st(2)
// 00649e04  d84e08               fmul dword ptr [esi + 8]
// 00649e07  dec1                 faddp st(1)
// 00649e09  d9542418             fst dword ptr [esp + 0x18]
// 00649e0d  d817                 fcom dword ptr [edi]
// 00649e0f  dfe0                 fnstsw ax
// 00649e11  f6c405               test ah, 5
// 00649e14  8d442418             lea eax, [esp + 0x18]
// 00649e18  7b02                 jnp 0x649e1c
// 00649e1a  8bc7                 mov eax, edi
// 00649e1c  d900                 fld dword ptr [eax]
// 00649e1e  d91f                 fstp dword ptr [edi]
// 00649e20  d81b                 fcomp dword ptr [ebx]
// 00649e22  dfe0                 fnstsw ax
// 00649e24  f6c441               test ah, 0x41
// 00649e27  8d442418             lea eax, [esp + 0x18]
// 00649e2b  7402                 je 0x649e2f
// 00649e2d  8bc3                 mov eax, ebx
// 00649e2f  d900                 fld dword ptr [eax]
// 00649e31  d91b                 fstp dword ptr [ebx]
// 00649e33  d94124               fld dword ptr [ecx + 0x24]
// 00649e36  d822                 fsub dword ptr [edx]
// 00649e38  d94128               fld dword ptr [ecx + 0x28]
// 00649e3b  d86204               fsub dword ptr [edx + 4]
// 00649e3e  d9412c               fld dword ptr [ecx + 0x2c]
// 00649e41  d86208               fsub dword ptr [edx + 8]
// 00649e44  d906                 fld dword ptr [esi]
// 00649e46  decb                 fmulp st(3)
// 00649e48  d9c9                 fxch st(1)
// 00649e4a  d84e04               fmul dword ptr [esi + 4]
// 00649e4d  dec2                 faddp st(2)
// 00649e4f  d84e08               fmul dword ptr [esi + 8]
// 00649e52  dec1                 faddp st(1)
// 00649e54  d9542418             fst dword ptr [esp + 0x18]
// 00649e58  d817                 fcom dword ptr [edi]
// 00649e5a  dfe0                 fnstsw ax
// 00649e5c  f6c405               test ah, 5
// 00649e5f  8d442418             lea eax, [esp + 0x18]
// 00649e63  7b02                 jnp 0x649e67
// 00649e65  8bc7                 mov eax, edi
// 00649e67  d900                 fld dword ptr [eax]
// 00649e69  d91f                 fstp dword ptr [edi]
// 00649e6b  d81b                 fcomp dword ptr [ebx]
// 00649e6d  dfe0                 fnstsw ax
// 00649e6f  f6c441               test ah, 0x41
// 00649e72  750e                 jne 0x649e82
// 00649e74  8d442418             lea eax, [esp + 0x18]
// 00649e78  d900                 fld dword ptr [eax]
// 00649e7a  5f                   pop edi
// 00649e7b  5e                   pop esi
// 00649e7c  d91b                 fstp dword ptr [ebx]
// 00649e7e  5b                   pop ebx
// 00649e7f  c21000               ret 0x10
// 00649e82  d903                 fld dword ptr [ebx]
// 00649e84  5f                   pop edi
// 00649e85  5e                   pop esi
// 00649e86  d91b                 fstp dword ptr [ebx]
// 00649e88  5b                   pop ebx
// 00649e89  c21000               ret 0x10

// from server: 96% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast

namespace std {
template <class T> inline const T& min(const T& l, const T& r) { return r < l ? r : l; }
template <class T> inline const T& max(const T& l, const T& r) { return l < r ? r : l; }
}

namespace G3D {
template <class T> inline T min(const T& x, const T& y) { return std::min<T>(x, y); }
template <class T> inline T max(const T& x, const T& y) { return std::max<T>(x, y); }

class Vector3 {
public:
    float x, y, z;
    inline Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
    inline Vector3(float fX, float fY, float fZ) : x(fX), y(fY), z(fZ) {}
    inline Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
    inline Vector3 operator-(const Vector3& v) const { return Vector3(x - v.x, y - v.y, z - v.z); }
    inline float dot(const Vector3& v) const { float r = x * v.x; r += y * v.y; r += z * v.z; return r; }
};
}

namespace RBX {
class Face {
public:
    G3D::Vector3 c0, c1, c2, c3;
    const G3D::Vector3& operator[](int i) const { return (&c0)[i]; }
    void minMax(const G3D::Vector3& point, const G3D::Vector3& normal, float& min, float& max) const;
};

void Face::minMax(const G3D::Vector3& point, const G3D::Vector3& normal, float& min, float& max) const
{
    min = 1.0e10;
    max = -1.0e10;
    for (int i = 0; i < 4; ++i)
    {
        const G3D::Vector3& v = (*this)[i];
        float temp = (v - point).dot(normal);
        min = G3D::min(min, temp);
        max = G3D::max(max, temp);
    }
}
}
