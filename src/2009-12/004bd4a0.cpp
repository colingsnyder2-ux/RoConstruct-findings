// roc 2009-12 004bd4a0  unit: Ogre::ManualObject  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004bd4a0
//
// 004bd4a0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004bd4a4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004bd4a8  53                   push ebx
// 004bd4a9  55                   push ebp
// 004bd4aa  56                   push esi
// 004bd4ab  8d420c               lea eax, [edx + 0xc]
// 004bd4ae  8b5808               mov ebx, dword ptr [eax + 8]
// 004bd4b1  57                   push edi
// 004bd4b2  83c10c               add ecx, 0xc
// 004bd4b5  3b5908               cmp ebx, dword ptr [ecx + 8]
// 004bd4b8  8d7808               lea edi, [eax + 8]
// 004bd4bb  8d7108               lea esi, [ecx + 8]
// 004bd4be  7c02                 jl 0x4bd4c2
// 004bd4c0  8bf7                 mov esi, edi
// 004bd4c2  8b7804               mov edi, dword ptr [eax + 4]
// 004bd4c5  3b7904               cmp edi, dword ptr [ecx + 4]
// 004bd4c8  8d6804               lea ebp, [eax + 4]
// 004bd4cb  8d5904               lea ebx, [ecx + 4]
// 004bd4ce  7d02                 jge 0x4bd4d2
// 004bd4d0  8beb                 mov ebp, ebx
// 004bd4d2  8b38                 mov edi, dword ptr [eax]
// 004bd4d4  3b39                 cmp edi, dword ptr [ecx]
// 004bd4d6  7d02                 jge 0x4bd4da
// 004bd4d8  8bc1                 mov eax, ecx
// 004bd4da  8b18                 mov ebx, dword ptr [eax]
// 004bd4dc  8b442418             mov eax, dword ptr [esp + 0x18]
// 004bd4e0  8b3e                 mov edi, dword ptr [esi]
// 004bd4e2  8b7008               mov esi, dword ptr [eax + 8]
// 004bd4e5  8b6d00               mov ebp, dword ptr [ebp]
// 004bd4e8  83c008               add eax, 8
// 004bd4eb  3b7208               cmp esi, dword ptr [edx + 8]
// 004bd4ee  8d4a08               lea ecx, [edx + 8]
// 004bd4f1  8944241c             mov dword ptr [esp + 0x1c], eax
// 004bd4f5  7c04                 jl 0x4bd4fb
// 004bd4f7  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004bd4fb  8b742418             mov esi, dword ptr [esp + 0x18]
// 004bd4ff  8b4e04               mov ecx, dword ptr [esi + 4]
// 004bd502  83c604               add esi, 4
// 004bd505  3b4a04               cmp ecx, dword ptr [edx + 4]
// 004bd508  8d4204               lea eax, [edx + 4]
// 004bd50b  7c02                 jl 0x4bd50f
// 004bd50d  8bf0                 mov esi, eax
// 004bd50f  8b442418             mov eax, dword ptr [esp + 0x18]
// 004bd513  8b08                 mov ecx, dword ptr [eax]
// 004bd515  3b0a                 cmp ecx, dword ptr [edx]
// 004bd517  7d02                 jge 0x4bd51b
// 004bd519  8bd0                 mov edx, eax
// 004bd51b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004bd51f  8b08                 mov ecx, dword ptr [eax]
// 004bd521  8b442414             mov eax, dword ptr [esp + 0x14]
// 004bd525  8b12                 mov edx, dword ptr [edx]
// 004bd527  8b36                 mov esi, dword ptr [esi]
// 004bd529  89580c               mov dword ptr [eax + 0xc], ebx
// 004bd52c  896810               mov dword ptr [eax + 0x10], ebp
// 004bd52f  8910                 mov dword ptr [eax], edx
// 004bd531  897814               mov dword ptr [eax + 0x14], edi
// 004bd534  5f                   pop edi
// 004bd535  897004               mov dword ptr [eax + 4], esi
// 004bd538  5e                   pop esi
// 004bd539  5d                   pop ebp
// 004bd53a  894808               mov dword ptr [eax + 8], ecx
// 004bd53d  5b                   pop ebx
// 004bd53e  c3                   ret 
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