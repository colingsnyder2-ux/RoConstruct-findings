// from server: 100% by colin
// roc 2008-06 0059b730  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b730
//
// 0059b730  64a100000000         mov eax, dword ptr fs:[0]
// 0059b736  6aff                 push -1
// 0059b738  68a8257d00           push 0x7d25a8
// 0059b73d  50                   push eax
// 0059b73e  64892500000000       mov dword ptr fs:[0], esp
// 0059b745  83ec08               sub esp, 8
// 0059b748  56                   push esi
// 0059b749  8bf1                 mov esi, ecx
// 0059b74b  8b06                 mov eax, dword ptr [esi]
// 0059b74d  8b4008               mov eax, dword ptr [eax + 8]
// 0059b750  50                   push eax
// 0059b751  b964639400           mov ecx, 0x946364
// 0059b756  ff1578288000         call dword ptr [0x802878]
// 0059b75c  84c0                 test al, al
// 0059b75e  7434                 je 0x59b794
// 0059b760  83c604               add esi, 4
// 0059b763  56                   push esi
// 0059b764  e8a7f1ffff           call 0x59a910
// 0059b769  d900                 fld dword ptr [eax]
// 0059b76b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059b76f  d919                 fstp dword ptr [ecx]
// 0059b771  83c404               add esp, 4
// 0059b774  d94004               fld dword ptr [eax + 4]
// 0059b777  5e                   pop esi
// 0059b778  d95904               fstp dword ptr [ecx + 4]
// 0059b77b  d94008               fld dword ptr [eax + 8]
// 0059b77e  8bc1                 mov eax, ecx
// 0059b780  d95908               fstp dword ptr [ecx + 8]
// 0059b783  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b787  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b78e  83c414               add esp, 0x14
// 0059b791  c20400               ret 4
// 0059b794  8b0e                 mov ecx, dword ptr [esi]
// 0059b796  894c2404             mov dword ptr [esp + 4], ecx
// 0059b79a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059b79d  85c9                 test ecx, ecx
// 0059b79f  7409                 je 0x59b7aa
// 0059b7a1  8b11                 mov edx, dword ptr [ecx]
// 0059b7a3  8b4208               mov eax, dword ptr [edx + 8]
// 0059b7a6  ffd0                 call eax
// 0059b7a8  eb02                 jmp 0x59b7ac
// 0059b7aa  33c0                 xor eax, eax
// 0059b7ac  89442408             mov dword ptr [esp + 8], eax
// 0059b7b0  8d4c2404             lea ecx, [esp + 4]
// 0059b7b4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059b7bc  e8df37fdff           call 0x56efa0
// 0059b7c1  d900                 fld dword ptr [eax]
// 0059b7c3  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0059b7c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b7cb  d91e                 fstp dword ptr [esi]
// 0059b7cd  d94004               fld dword ptr [eax + 4]
// 0059b7d0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0059b7d8  d95e04               fstp dword ptr [esi + 4]
// 0059b7db  d94008               fld dword ptr [eax + 8]
// 0059b7de  d95e08               fstp dword ptr [esi + 8]
// 0059b7e1  85c9                 test ecx, ecx
// 0059b7e3  7408                 je 0x59b7ed
// 0059b7e5  8b11                 mov edx, dword ptr [ecx]
// 0059b7e7  8b02                 mov eax, dword ptr [edx]
// 0059b7e9  6a01                 push 1
// 0059b7eb  ffd0                 call eax
// 0059b7ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059b7f1  8bc6                 mov eax, esi
// 0059b7f3  5e                   pop esi
// 0059b7f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b7fb  83c414               add esp, 0x14
// 0059b7fe  c20400               ret 4

// from server: 93% by king_originala
class type_info {};

extern const type_info vectorType;
extern bool (__thiscall *compareType)(const type_info*, const type_info&);

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3&);
};

__forceinline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z)
{
}

struct Placeholder;

struct PlaceholderTable {
    void (__thiscall *destroy)(Placeholder*, unsigned int);
    const type_info& (__thiscall *type)(const Placeholder*);
    Placeholder* (__thiscall *clone)(const Placeholder*);
};

struct Placeholder {
    PlaceholderTable* table;
    static Placeholder* copy(const Placeholder*);
};

__forceinline Placeholder* Placeholder::copy(const Placeholder* p)
{
    if (p)
        return p->table->clone(p);
    return 0;
}

struct Type {
    unsigned long padding[2];
    const type_info* info;
};

extern const Vector3& __cdecl extractVector(Placeholder* const*);

struct Value {
    Type* descriptor;
    Placeholder* content;

    Value(const Value&);
    ~Value();
    const Vector3& convert();
    Vector3 get();
};

__forceinline Value::Value(const Value& v)
    : descriptor(v.descriptor), content(Placeholder::copy(v.content))
{
}

__forceinline Value::~Value()
{
    Placeholder* p = content;
    if (p)
        p->table->destroy(p, 1);
}

Vector3 Value::get()
{
    const type_info* t = descriptor->info;
    if (compareType(&vectorType, *t))
        return extractVector(&content);

    Value temporary(*this);
    return temporary.convert();
}
