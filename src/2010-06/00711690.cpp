// roc 2010-06 00711690  unit: RBX::BallBallContact  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00711690
//
// 00711690  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00711694  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00711698  53                   push ebx
// 00711699  55                   push ebp
// 0071169a  56                   push esi
// 0071169b  8d420c               lea eax, [edx + 0xc]
// 0071169e  8b5808               mov ebx, dword ptr [eax + 8]
// 007116a1  57                   push edi
// 007116a2  83c10c               add ecx, 0xc
// 007116a5  3b5908               cmp ebx, dword ptr [ecx + 8]
// 007116a8  8d7808               lea edi, [eax + 8]
// 007116ab  8d7108               lea esi, [ecx + 8]
// 007116ae  7c02                 jl 0x7116b2
// 007116b0  8bf7                 mov esi, edi
// 007116b2  8b7804               mov edi, dword ptr [eax + 4]
// 007116b5  3b7904               cmp edi, dword ptr [ecx + 4]
// 007116b8  8d6804               lea ebp, [eax + 4]
// 007116bb  8d5904               lea ebx, [ecx + 4]
// 007116be  7d02                 jge 0x7116c2
// 007116c0  8beb                 mov ebp, ebx
// 007116c2  8b38                 mov edi, dword ptr [eax]
// 007116c4  3b39                 cmp edi, dword ptr [ecx]
// 007116c6  7d02                 jge 0x7116ca
// 007116c8  8bc1                 mov eax, ecx
// 007116ca  8b18                 mov ebx, dword ptr [eax]
// 007116cc  8b442418             mov eax, dword ptr [esp + 0x18]
// 007116d0  8b3e                 mov edi, dword ptr [esi]
// 007116d2  8b7008               mov esi, dword ptr [eax + 8]
// 007116d5  8b6d00               mov ebp, dword ptr [ebp]
// 007116d8  83c008               add eax, 8
// 007116db  3b7208               cmp esi, dword ptr [edx + 8]
// 007116de  8d4a08               lea ecx, [edx + 8]
// 007116e1  8944241c             mov dword ptr [esp + 0x1c], eax
// 007116e5  7c04                 jl 0x7116eb
// 007116e7  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007116eb  8b742418             mov esi, dword ptr [esp + 0x18]
// 007116ef  8b4e04               mov ecx, dword ptr [esi + 4]
// 007116f2  83c604               add esi, 4
// 007116f5  3b4a04               cmp ecx, dword ptr [edx + 4]
// 007116f8  8d4204               lea eax, [edx + 4]
// 007116fb  7c02                 jl 0x7116ff
// 007116fd  8bf0                 mov esi, eax
// 007116ff  8b442418             mov eax, dword ptr [esp + 0x18]
// 00711703  8b08                 mov ecx, dword ptr [eax]
// 00711705  3b0a                 cmp ecx, dword ptr [edx]
// 00711707  7d02                 jge 0x71170b
// 00711709  8bd0                 mov edx, eax
// 0071170b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0071170f  8b08                 mov ecx, dword ptr [eax]
// 00711711  8b442414             mov eax, dword ptr [esp + 0x14]
// 00711715  8b12                 mov edx, dword ptr [edx]
// 00711717  8b36                 mov esi, dword ptr [esi]
// 00711719  89580c               mov dword ptr [eax + 0xc], ebx
// 0071171c  896810               mov dword ptr [eax + 0x10], ebp
// 0071171f  8910                 mov dword ptr [eax], edx
// 00711721  897814               mov dword ptr [eax + 0x14], edi
// 00711724  5f                   pop edi
// 00711725  897004               mov dword ptr [eax + 4], esi
// 00711728  5e                   pop esi
// 00711729  5d                   pop ebp
// 0071172a  894808               mov dword ptr [eax + 8], ecx
// 0071172d  5b                   pop ebx
// 0071172e  c3                   ret 
// copied from an identical function in another client (function ?intersect@@YA?AUBounds@@ABU1@0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
template<class T>
inline const T& minimum(const T& a, const T& b)
{
    return b < a ? b : a;
}

template<class T>
inline const T& maximum(const T& a, const T& b)
{
    return b < a ? a : b;
}

struct Vector
{
    int x, y, z;
    Vector(const int&, const int&, const int&);
};

inline Vector::Vector(const int& a, const int& b, const int& c)
    : x(a), y(b), z(c)
{
}

inline Vector minimum(const Vector& a, const Vector& b)
{
    return Vector(minimum(a.x, b.x),
                  minimum(a.y, b.y),
                  minimum(a.z, b.z));
}

inline Vector maximum(const Vector& a, const Vector& b)
{
    return Vector(b.x < a.x ? a.x : b.x, b.y < a.y ? a.y : b.y, b.z < a.z ? a.z : b.z);
}

struct Bounds
{
    Vector lower, upper;
    Bounds(const Vector&, const Vector&);
};

inline Bounds::Bounds(const Vector& a, const Vector& b)
    : lower(a), upper(b)
{
}

Bounds intersect(const Bounds& a, const Bounds& b)
{
    return Bounds(minimum(b.lower, a.lower),
                  maximum(a.upper, b.upper));
}