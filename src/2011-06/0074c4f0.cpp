// roc 2011-06 0074c4f0  unit: RBX::BallBallContact  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074c4f0
//
// 0074c4f0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0074c4f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0074c4f8  53                   push ebx
// 0074c4f9  55                   push ebp
// 0074c4fa  56                   push esi
// 0074c4fb  8d420c               lea eax, [edx + 0xc]
// 0074c4fe  8b5808               mov ebx, dword ptr [eax + 8]
// 0074c501  57                   push edi
// 0074c502  83c10c               add ecx, 0xc
// 0074c505  3b5908               cmp ebx, dword ptr [ecx + 8]
// 0074c508  8d7808               lea edi, [eax + 8]
// 0074c50b  8d7108               lea esi, [ecx + 8]
// 0074c50e  7c02                 jl 0x74c512
// 0074c510  8bf7                 mov esi, edi
// 0074c512  8b7804               mov edi, dword ptr [eax + 4]
// 0074c515  3b7904               cmp edi, dword ptr [ecx + 4]
// 0074c518  8d6804               lea ebp, [eax + 4]
// 0074c51b  8d5904               lea ebx, [ecx + 4]
// 0074c51e  7d02                 jge 0x74c522
// 0074c520  8beb                 mov ebp, ebx
// 0074c522  8b38                 mov edi, dword ptr [eax]
// 0074c524  3b39                 cmp edi, dword ptr [ecx]
// 0074c526  7d02                 jge 0x74c52a
// 0074c528  8bc1                 mov eax, ecx
// 0074c52a  8b18                 mov ebx, dword ptr [eax]
// 0074c52c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0074c530  8b3e                 mov edi, dword ptr [esi]
// 0074c532  8b7008               mov esi, dword ptr [eax + 8]
// 0074c535  8b6d00               mov ebp, dword ptr [ebp]
// 0074c538  83c008               add eax, 8
// 0074c53b  3b7208               cmp esi, dword ptr [edx + 8]
// 0074c53e  8d4a08               lea ecx, [edx + 8]
// 0074c541  8944241c             mov dword ptr [esp + 0x1c], eax
// 0074c545  7c04                 jl 0x74c54b
// 0074c547  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0074c54b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0074c54f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0074c552  83c604               add esi, 4
// 0074c555  3b4a04               cmp ecx, dword ptr [edx + 4]
// 0074c558  8d4204               lea eax, [edx + 4]
// 0074c55b  7c02                 jl 0x74c55f
// 0074c55d  8bf0                 mov esi, eax
// 0074c55f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0074c563  8b08                 mov ecx, dword ptr [eax]
// 0074c565  3b0a                 cmp ecx, dword ptr [edx]
// 0074c567  7d02                 jge 0x74c56b
// 0074c569  8bd0                 mov edx, eax
// 0074c56b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0074c56f  8b08                 mov ecx, dword ptr [eax]
// 0074c571  8b442414             mov eax, dword ptr [esp + 0x14]
// 0074c575  8b12                 mov edx, dword ptr [edx]
// 0074c577  8b36                 mov esi, dword ptr [esi]
// 0074c579  89580c               mov dword ptr [eax + 0xc], ebx
// 0074c57c  896810               mov dword ptr [eax + 0x10], ebp
// 0074c57f  8910                 mov dword ptr [eax], edx
// 0074c581  897814               mov dword ptr [eax + 0x14], edi
// 0074c584  5f                   pop edi
// 0074c585  897004               mov dword ptr [eax + 4], esi
// 0074c588  5e                   pop esi
// 0074c589  5d                   pop ebp
// 0074c58a  894808               mov dword ptr [eax + 8], ecx
// 0074c58d  5b                   pop ebx
// 0074c58e  c3                   ret 
// copied from an identical function in another client (function ?intersect@@YA?AUBounds@@ABU1@0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 73% by king_originala
// roc 2008-06 006595d0  unit: RBX::BallBallContact  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006595d0
//
// 006595d0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006595d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006595d8  53                   push ebx
// 006595d9  55                   push ebp
// 006595da  56                   push esi
// 006595db  8d420c               lea eax, [edx + 0xc]
// 006595de  8b5808               mov ebx, dword ptr [eax + 8]
// 006595e1  57                   push edi
// 006595e2  83c10c               add ecx, 0xc
// 006595e5  3b5908               cmp ebx, dword ptr [ecx + 8]
// 006595e8  8d7808               lea edi, [eax + 8]
// 006595eb  8d7108               lea esi, [ecx + 8]
// 006595ee  7c02                 jl 0x6595f2
// 006595f0  8bf7                 mov esi, edi
// 006595f2  8b7804               mov edi, dword ptr [eax + 4]
// 006595f5  3b7904               cmp edi, dword ptr [ecx + 4]
// 006595f8  8d6804               lea ebp, [eax + 4]
// 006595fb  8d5904               lea ebx, [ecx + 4]
// 006595fe  7d02                 jge 0x659602
// 00659600  8beb                 mov ebp, ebx
// 00659602  8b38                 mov edi, dword ptr [eax]
// 00659604  3b39                 cmp edi, dword ptr [ecx]
// 00659606  7d02                 jge 0x65960a
// 00659608  8bc1                 mov eax, ecx
// 0065960a  8b18                 mov ebx, dword ptr [eax]
// 0065960c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00659610  8b3e                 mov edi, dword ptr [esi]
// 00659612  8b7008               mov esi, dword ptr [eax + 8]
// 00659615  8b6d00               mov ebp, dword ptr [ebp]
// 00659618  83c008               add eax, 8
// 0065961b  3b7208               cmp esi, dword ptr [edx + 8]
// 0065961e  8d4a08               lea ecx, [edx + 8]
// 00659621  8944241c             mov dword ptr [esp + 0x1c], eax
// 00659625  7c04                 jl 0x65962b
// 00659627  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0065962b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065962f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00659632  83c604               add esi, 4
// 00659635  3b4a04               cmp ecx, dword ptr [edx + 4]
// 00659638  8d4204               lea eax, [edx + 4]
// 0065963b  7c02                 jl 0x65963f
// 0065963d  8bf0                 mov esi, eax
// 0065963f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00659643  8b08                 mov ecx, dword ptr [eax]
// 00659645  3b0a                 cmp ecx, dword ptr [edx]
// 00659647  7d02                 jge 0x65964b
// 00659649  8bd0                 mov edx, eax
// 0065964b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0065964f  8b08                 mov ecx, dword ptr [eax]
// 00659651  8b442414             mov eax, dword ptr [esp + 0x14]
// 00659655  8b12                 mov edx, dword ptr [edx]
// 00659657  8b36                 mov esi, dword ptr [esi]
// 00659659  89580c               mov dword ptr [eax + 0xc], ebx
// 0065965c  896810               mov dword ptr [eax + 0x10], ebp
// 0065965f  8910                 mov dword ptr [eax], edx
// 00659661  897814               mov dword ptr [eax + 0x14], edi
// 00659664  5f                   pop edi
// 00659665  897004               mov dword ptr [eax + 4], esi
// 00659668  5e                   pop esi
// 00659669  5d                   pop ebp
// 0065966a  894808               mov dword ptr [eax + 8], ecx
// 0065966d  5b                   pop ebx
// 0065966e  c3                   ret 

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