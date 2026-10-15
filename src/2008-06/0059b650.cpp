// from server: 100% by colin
// roc 2008-06 0059b650  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b650
//
// 0059b650  64a100000000         mov eax, dword ptr fs:[0]
// 0059b656  6aff                 push -1
// 0059b658  68a8257d00           push 0x7d25a8
// 0059b65d  50                   push eax
// 0059b65e  64892500000000       mov dword ptr fs:[0], esp
// 0059b665  83ec08               sub esp, 8
// 0059b668  56                   push esi
// 0059b669  8bf1                 mov esi, ecx
// 0059b66b  8b06                 mov eax, dword ptr [esi]
// 0059b66d  8b4008               mov eax, dword ptr [eax + 8]
// 0059b670  50                   push eax
// 0059b671  b9a4639400           mov ecx, 0x9463a4
// 0059b676  ff1578288000         call dword ptr [0x802878]
// 0059b67c  84c0                 test al, al
// 0059b67e  7434                 je 0x59b6b4
// 0059b680  83c604               add esi, 4
// 0059b683  56                   push esi
// 0059b684  e8f7f1ffff           call 0x59a880
// 0059b689  d900                 fld dword ptr [eax]
// 0059b68b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059b68f  d919                 fstp dword ptr [ecx]
// 0059b691  83c404               add esp, 4
// 0059b694  d94004               fld dword ptr [eax + 4]
// 0059b697  5e                   pop esi
// 0059b698  d95904               fstp dword ptr [ecx + 4]
// 0059b69b  d94008               fld dword ptr [eax + 8]
// 0059b69e  8bc1                 mov eax, ecx
// 0059b6a0  d95908               fstp dword ptr [ecx + 8]
// 0059b6a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b6a7  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b6ae  83c414               add esp, 0x14
// 0059b6b1  c20400               ret 4
// 0059b6b4  8b0e                 mov ecx, dword ptr [esi]
// 0059b6b6  894c2404             mov dword ptr [esp + 4], ecx
// 0059b6ba  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059b6bd  85c9                 test ecx, ecx
// 0059b6bf  7409                 je 0x59b6ca
// 0059b6c1  8b11                 mov edx, dword ptr [ecx]
// 0059b6c3  8b4208               mov eax, dword ptr [edx + 8]
// 0059b6c6  ffd0                 call eax
// 0059b6c8  eb02                 jmp 0x59b6cc
// 0059b6ca  33c0                 xor eax, eax
// 0059b6cc  89442408             mov dword ptr [esp + 8], eax
// 0059b6d0  8d4c2404             lea ecx, [esp + 4]
// 0059b6d4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059b6dc  e8ef38fdff           call 0x56efd0
// 0059b6e1  d900                 fld dword ptr [eax]
// 0059b6e3  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0059b6e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b6eb  d91e                 fstp dword ptr [esi]
// 0059b6ed  d94004               fld dword ptr [eax + 4]
// 0059b6f0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0059b6f8  d95e04               fstp dword ptr [esi + 4]
// 0059b6fb  d94008               fld dword ptr [eax + 8]
// 0059b6fe  d95e08               fstp dword ptr [esi + 8]
// 0059b701  85c9                 test ecx, ecx
// 0059b703  7408                 je 0x59b70d
// 0059b705  8b11                 mov edx, dword ptr [ecx]
// 0059b707  8b02                 mov eax, dword ptr [edx]
// 0059b709  6a01                 push 1
// 0059b70b  ffd0                 call eax
// 0059b70d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059b711  8bc6                 mov eax, esi
// 0059b713  5e                   pop esi
// 0059b714  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b71b  83c414               add esp, 0x14
// 0059b71e  c20400               ret 4

// from server: 93% by king_originala
struct type_info {};

extern const type_info colorType;
extern bool (__thiscall *compareType)(const type_info*, const type_info&);

struct Vector3 {
    float x, y, z;

    Vector3(float a, float b, float c);
    Vector3(const Vector3& other);
};

inline Vector3::Vector3(float a, float b, float c)
    : x(a), y(b), z(c)
{
}

inline Vector3::Vector3(const Vector3& other)
    : x(other.x), y(other.y), z(other.z)
{
}

struct TypeRecord {
    char padding[8];
    const type_info* info;
};

struct Payload {
    virtual ~Payload();
    virtual void unused();
    virtual Payload* clone();
};

inline Payload* copyPayload(Payload* source)
{
    if (source)
        return source->clone();
    return 0;
}

struct Value;

struct Temporary {
    TypeRecord* type;
    Payload* payload;

    Temporary(const Value& value);
    ~Temporary();
    const Vector3& convert();
};

extern const Vector3& __cdecl extractVector(Payload* const*);

struct Value {
    TypeRecord* type;
    Payload* payload;

    Vector3 get();
};

inline Temporary::Temporary(const Value& value)
{
    type = value.type;
    payload = copyPayload(value.payload);
}

inline Temporary::~Temporary()
{
    if (payload)
        delete payload;
}

Vector3 Value::get()
{
    const type_info* t = type->info;
    if (compareType(&colorType, *t)) {
        const Vector3& v = extractVector(&payload);
        return Vector3(v.x, v.y, v.z);
    }

    Temporary temporary(*this);
    return temporary.convert();
}
