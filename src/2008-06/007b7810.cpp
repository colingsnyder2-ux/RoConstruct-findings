// from server: 100% by king_originala
// roc 2008-06 007b7810  unit: RBX::RenderNew::Material::Level  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b7810
//
// 007b7810  51                   push ecx
// 007b7811  56                   push esi
// 007b7812  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b7816  c70600000000         mov dword ptr [esi], 0
// 007b781c  8b410c               mov eax, dword ptr [ecx + 0xc]
// 007b781f  50                   push eax
// 007b7820  8bce                 mov ecx, esi
// 007b7822  c744240800000000     mov dword ptr [esp + 8], 0
// 007b782a  e87117deff           call 0x598fa0
// 007b782f  8bc6                 mov eax, esi
// 007b7831  5e                   pop esi
// 007b7832  59                   pop ecx
// 007b7833  c20400               ret 4

struct Ptr {
    void* value;
    Ptr(const Ptr& p);
    ~Ptr();
    void reset(void* p);
};

inline Ptr::Ptr(const Ptr& p)
{
    value = 0;
    reset(p.value);
}

struct S {
    char pad[12];
    Ptr value;
    Ptr f();
};

Ptr S::f()
{
    return Ptr(value);
}
