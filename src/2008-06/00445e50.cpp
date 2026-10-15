// from server: 100% by colin
// roc 2008-06 00445e50  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445e50
//
// 00445e50  64a100000000         mov eax, dword ptr fs:[0]
// 00445e56  6aff                 push -1
// 00445e58  68a8257d00           push 0x7d25a8
// 00445e5d  50                   push eax
// 00445e5e  64892500000000       mov dword ptr fs:[0], esp
// 00445e65  83ec08               sub esp, 8
// 00445e68  56                   push esi
// 00445e69  8bf1                 mov esi, ecx
// 00445e6b  8b06                 mov eax, dword ptr [esi]
// 00445e6d  8b4008               mov eax, dword ptr [eax + 8]
// 00445e70  50                   push eax
// 00445e71  b934109300           mov ecx, 0x931034
// 00445e76  ff1578288000         call dword ptr [0x802878]
// 00445e7c  84c0                 test al, al
// 00445e7e  7426                 je 0x445ea6
// 00445e80  83c604               add esi, 4
// 00445e83  56                   push esi
// 00445e84  e867fbffff           call 0x4459f0
// 00445e89  8b08                 mov ecx, dword ptr [eax]
// 00445e8b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00445e8f  83c404               add esp, 4
// 00445e92  8908                 mov dword ptr [eax], ecx
// 00445e94  5e                   pop esi
// 00445e95  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445e99  64890d00000000       mov dword ptr fs:[0], ecx
// 00445ea0  83c414               add esp, 0x14
// 00445ea3  c20400               ret 4
// 00445ea6  8b4e04               mov ecx, dword ptr [esi + 4]
// 00445ea9  8b16                 mov edx, dword ptr [esi]
// 00445eab  89542404             mov dword ptr [esp + 4], edx
// 00445eaf  85c9                 test ecx, ecx
// 00445eb1  7409                 je 0x445ebc
// 00445eb3  8b01                 mov eax, dword ptr [ecx]
// 00445eb5  8b5008               mov edx, dword ptr [eax + 8]
// 00445eb8  ffd2                 call edx
// 00445eba  eb02                 jmp 0x445ebe
// 00445ebc  33c0                 xor eax, eax
// 00445ebe  89442408             mov dword ptr [esp + 8], eax
// 00445ec2  8d4c2404             lea ecx, [esp + 4]
// 00445ec6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00445ece  e8ed901200           call 0x56efc0
// 00445ed3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445ed7  8b00                 mov eax, dword ptr [eax]
// 00445ed9  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00445edd  8906                 mov dword ptr [esi], eax
// 00445edf  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00445ee7  85c9                 test ecx, ecx
// 00445ee9  7408                 je 0x445ef3
// 00445eeb  8b11                 mov edx, dword ptr [ecx]
// 00445eed  8b02                 mov eax, dword ptr [edx]
// 00445eef  6a01                 push 1
// 00445ef1  ffd0                 call eax
// 00445ef3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00445ef7  8bc6                 mov eax, esi
// 00445ef9  5e                   pop esi
// 00445efa  64890d00000000       mov dword ptr fs:[0], ecx
// 00445f01  83c414               add esp, 0x14
// 00445f04  c20400               ret 4

// from server: 92% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct TypeInfo {};
extern const TypeInfo vector_type;
extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo *);

struct Value {
    short x;
    short y;
};

struct Placeholder {
    virtual ~Placeholder();
    virtual const TypeInfo &type() const = 0;
    virtual Placeholder *clone() const = 0;
};

struct Any {
    Placeholder *content;
};

extern const Value *__cdecl cast_value(const Any *);

struct Descriptor {
    unsigned char reserved[8];
    const TypeInfo *type;
};

struct Variant {
    const Descriptor *descriptor;
    Placeholder *content;

    Variant(const Variant &other);
    ~Variant();
    const Value &convert() const;
    Value get() const;
};

inline Variant::Variant(const Variant &other)
    : descriptor(other.descriptor)
{
    Placeholder *source = other.content;
    Placeholder *copy = source ? source->clone() : 0;
    content = copy;
}

inline Variant::~Variant()
{
    if (content)
        delete content;
}

Value Variant::get() const
{
    const TypeInfo *t = descriptor->type;
    if (type_equal(&vector_type, t))
        return *cast_value(reinterpret_cast<const Any *>(&content));

    Variant temporary(*this);
    return temporary.convert();
}
