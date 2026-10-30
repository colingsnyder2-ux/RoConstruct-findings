// roc 2009-06 006d5620  unit: RBX::Body  size: 348 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d5620
//
// 006d5620  d905f4ec8b00         fld dword ptr [0x8becf4]
// 006d5626  8b542404             mov edx, dword ptr [esp + 4]
// 006d562a  53                   push ebx
// 006d562b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006d562f  56                   push esi
// 006d5630  8b742410             mov esi, dword ptr [esp + 0x10]
// 006d5634  57                   push edi
// 006d5635  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006d5639  d91f                 fstp dword ptr [edi]
// 006d563b  d90558cf8e00         fld dword ptr [0x8ecf58]
// 006d5641  d91b                 fstp dword ptr [ebx]
// 006d5643  d901                 fld dword ptr [ecx]
// 006d5645  d822                 fsub dword ptr [edx]
// 006d5647  d94104               fld dword ptr [ecx + 4]
// 006d564a  d86204               fsub dword ptr [edx + 4]
// 006d564d  d94108               fld dword ptr [ecx + 8]
// 006d5650  d86208               fsub dword ptr [edx + 8]
// 006d5653  d906                 fld dword ptr [esi]
// 006d5655  decb                 fmulp st(3)
// 006d5657  d9c9                 fxch st(1)
// 006d5659  d84e04               fmul dword ptr [esi + 4]
// 006d565c  dec2                 faddp st(2)
// 006d565e  d84e08               fmul dword ptr [esi + 8]
// 006d5661  dec1                 faddp st(1)
// 006d5663  d9542418             fst dword ptr [esp + 0x18]
// 006d5667  d817                 fcom dword ptr [edi]
// 006d5669  dfe0                 fnstsw ax
// 006d566b  f6c405               test ah, 5
// 006d566e  8d442418             lea eax, [esp + 0x18]
// 006d5672  7b02                 jnp 0x6d5676
// 006d5674  8bc7                 mov eax, edi
// 006d5676  d900                 fld dword ptr [eax]
// 006d5678  d91f                 fstp dword ptr [edi]
// 006d567a  d81b                 fcomp dword ptr [ebx]
// 006d567c  dfe0                 fnstsw ax
// 006d567e  f6c441               test ah, 0x41
// 006d5681  8d442418             lea eax, [esp + 0x18]
// 006d5685  7402                 je 0x6d5689
// 006d5687  8bc3                 mov eax, ebx
// 006d5689  d900                 fld dword ptr [eax]
// 006d568b  d91b                 fstp dword ptr [ebx]
// 006d568d  d9410c               fld dword ptr [ecx + 0xc]
// 006d5690  d822                 fsub dword ptr [edx]
// 006d5692  d94110               fld dword ptr [ecx + 0x10]
// 006d5695  d86204               fsub dword ptr [edx + 4]
// 006d5698  d94114               fld dword ptr [ecx + 0x14]
// 006d569b  d86208               fsub dword ptr [edx + 8]
// 006d569e  d906                 fld dword ptr [esi]
// 006d56a0  decb                 fmulp st(3)
// 006d56a2  d9c9                 fxch st(1)
// 006d56a4  d84e04               fmul dword ptr [esi + 4]
// 006d56a7  dec2                 faddp st(2)
// 006d56a9  d84e08               fmul dword ptr [esi + 8]
// 006d56ac  dec1                 faddp st(1)
// 006d56ae  d9542418             fst dword ptr [esp + 0x18]
// 006d56b2  d817                 fcom dword ptr [edi]
// 006d56b4  dfe0                 fnstsw ax
// 006d56b6  f6c405               test ah, 5
// 006d56b9  8d442418             lea eax, [esp + 0x18]
// 006d56bd  7b02                 jnp 0x6d56c1
// 006d56bf  8bc7                 mov eax, edi
// 006d56c1  d900                 fld dword ptr [eax]
// 006d56c3  d91f                 fstp dword ptr [edi]
// 006d56c5  d81b                 fcomp dword ptr [ebx]
// 006d56c7  dfe0                 fnstsw ax
// 006d56c9  f6c441               test ah, 0x41
// 006d56cc  8d442418             lea eax, [esp + 0x18]
// 006d56d0  7402                 je 0x6d56d4
// 006d56d2  8bc3                 mov eax, ebx
// 006d56d4  d900                 fld dword ptr [eax]
// 006d56d6  d91b                 fstp dword ptr [ebx]
// 006d56d8  d94118               fld dword ptr [ecx + 0x18]
// 006d56db  d822                 fsub dword ptr [edx]
// 006d56dd  d9411c               fld dword ptr [ecx + 0x1c]
// 006d56e0  d86204               fsub dword ptr [edx + 4]
// 006d56e3  d94120               fld dword ptr [ecx + 0x20]
// 006d56e6  d86208               fsub dword ptr [edx + 8]
// 006d56e9  d906                 fld dword ptr [esi]
// 006d56eb  decb                 fmulp st(3)
// 006d56ed  d9c9                 fxch st(1)
// 006d56ef  d84e04               fmul dword ptr [esi + 4]
// 006d56f2  dec2                 faddp st(2)
// 006d56f4  d84e08               fmul dword ptr [esi + 8]
// 006d56f7  dec1                 faddp st(1)
// 006d56f9  d9542418             fst dword ptr [esp + 0x18]
// 006d56fd  d817                 fcom dword ptr [edi]
// 006d56ff  dfe0                 fnstsw ax
// 006d5701  f6c405               test ah, 5
// 006d5704  8d442418             lea eax, [esp + 0x18]
// 006d5708  7b02                 jnp 0x6d570c
// 006d570a  8bc7                 mov eax, edi
// 006d570c  d900                 fld dword ptr [eax]
// 006d570e  d91f                 fstp dword ptr [edi]
// 006d5710  d81b                 fcomp dword ptr [ebx]
// 006d5712  dfe0                 fnstsw ax
// 006d5714  f6c441               test ah, 0x41
// 006d5717  8d442418             lea eax, [esp + 0x18]
// 006d571b  7402                 je 0x6d571f
// 006d571d  8bc3                 mov eax, ebx
// 006d571f  d900                 fld dword ptr [eax]
// 006d5721  d91b                 fstp dword ptr [ebx]
// 006d5723  d94124               fld dword ptr [ecx + 0x24]
// 006d5726  d822                 fsub dword ptr [edx]
// 006d5728  d94128               fld dword ptr [ecx + 0x28]
// 006d572b  d86204               fsub dword ptr [edx + 4]
// 006d572e  d9412c               fld dword ptr [ecx + 0x2c]
// 006d5731  d86208               fsub dword ptr [edx + 8]
// 006d5734  d906                 fld dword ptr [esi]
// 006d5736  decb                 fmulp st(3)
// 006d5738  d9c9                 fxch st(1)
// 006d573a  d84e04               fmul dword ptr [esi + 4]
// 006d573d  dec2                 faddp st(2)
// 006d573f  d84e08               fmul dword ptr [esi + 8]
// 006d5742  dec1                 faddp st(1)
// 006d5744  d9542418             fst dword ptr [esp + 0x18]
// 006d5748  d817                 fcom dword ptr [edi]
// 006d574a  dfe0                 fnstsw ax
// 006d574c  f6c405               test ah, 5
// 006d574f  8d442418             lea eax, [esp + 0x18]
// 006d5753  7b02                 jnp 0x6d5757
// 006d5755  8bc7                 mov eax, edi
// 006d5757  d900                 fld dword ptr [eax]
// 006d5759  d91f                 fstp dword ptr [edi]
// 006d575b  d81b                 fcomp dword ptr [ebx]
// 006d575d  dfe0                 fnstsw ax
// 006d575f  f6c441               test ah, 0x41
// 006d5762  750e                 jne 0x6d5772
// 006d5764  8d442418             lea eax, [esp + 0x18]
// 006d5768  d900                 fld dword ptr [eax]
// 006d576a  5f                   pop edi
// 006d576b  5e                   pop esi
// 006d576c  d91b                 fstp dword ptr [ebx]
// 006d576e  5b                   pop ebx
// 006d576f  c21000               ret 0x10
// 006d5772  d903                 fld dword ptr [ebx]
// 006d5774  5f                   pop edi
// 006d5775  5e                   pop esi
// 006d5776  d91b                 fstp dword ptr [ebx]
// 006d5778  5b                   pop ebx
// 006d5779  c21000               ret 0x10
// copied from an identical function in another client (function ?minMax@Face@RBX@@QBEXABVVector3@G3D@@0AAM1@Z)

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