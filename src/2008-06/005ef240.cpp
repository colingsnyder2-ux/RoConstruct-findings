// from server: 100% by colin
// roc 2008-06 005ef240  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef240
//
// 005ef240  64a100000000         mov eax, dword ptr fs:[0]
// 005ef246  6aff                 push -1
// 005ef248  68a8257d00           push 0x7d25a8
// 005ef24d  50                   push eax
// 005ef24e  64892500000000       mov dword ptr fs:[0], esp
// 005ef255  83ec08               sub esp, 8
// 005ef258  56                   push esi
// 005ef259  8bf1                 mov esi, ecx
// 005ef25b  8b06                 mov eax, dword ptr [esi]
// 005ef25d  8b4008               mov eax, dword ptr [eax + 8]
// 005ef260  50                   push eax
// 005ef261  b9005e9500           mov ecx, 0x955e00
// 005ef266  ff1578288000         call dword ptr [0x802878]
// 005ef26c  84c0                 test al, al
// 005ef26e  741e                 je 0x5ef28e
// 005ef270  83c604               add esi, 4
// 005ef273  56                   push esi
// 005ef274  e8f7e4ffff           call 0x5ed770
// 005ef279  8b00                 mov eax, dword ptr [eax]
// 005ef27b  83c404               add esp, 4
// 005ef27e  5e                   pop esi
// 005ef27f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef283  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef28a  83c414               add esp, 0x14
// 005ef28d  c3                   ret 
// 005ef28e  8b0e                 mov ecx, dword ptr [esi]
// 005ef290  894c2404             mov dword ptr [esp + 4], ecx
// 005ef294  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ef297  85c9                 test ecx, ecx
// 005ef299  7409                 je 0x5ef2a4
// 005ef29b  8b11                 mov edx, dword ptr [ecx]
// 005ef29d  8b4208               mov eax, dword ptr [edx + 8]
// 005ef2a0  ffd0                 call eax
// 005ef2a2  eb02                 jmp 0x5ef2a6
// 005ef2a4  33c0                 xor eax, eax
// 005ef2a6  89442408             mov dword ptr [esp + 8], eax
// 005ef2aa  8d4c2404             lea ecx, [esp + 4]
// 005ef2ae  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ef2b6  e865fcffff           call 0x5eef20
// 005ef2bb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef2bf  8b30                 mov esi, dword ptr [eax]
// 005ef2c1  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005ef2c9  85c9                 test ecx, ecx
// 005ef2cb  7408                 je 0x5ef2d5
// 005ef2cd  8b11                 mov edx, dword ptr [ecx]
// 005ef2cf  8b02                 mov eax, dword ptr [edx]
// 005ef2d1  6a01                 push 1
// 005ef2d3  ffd0                 call eax
// 005ef2d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ef2d9  8bc6                 mov eax, esi
// 005ef2db  5e                   pop esi
// 005ef2dc  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef2e3  83c414               add esp, 0x14
// 005ef2e6  c3                   ret 

// from server: 92% by king_originala
struct TypeInfo {};

typedef bool (__thiscall *TypeEqual)(const TypeInfo *, const TypeInfo *);
extern TypeEqual typeEqual;
extern TypeInfo surfaceType;

struct Metadata {
    void *reserved[2];
    const TypeInfo *type;
};

struct Holder {
    virtual ~Holder();
    virtual void reserved();
    virtual Holder *clone();
};

struct S {
    Metadata *metadata;
    Holder *holder;

    S(const S &other);
    ~S();
    Holder *copyHolder() const;
    int *convert();
    int value();
};

extern int *__cdecl getValue(Holder **);

inline Holder *S::copyHolder() const
{
    Holder *p = holder;
    if (p)
        return p->clone();
    return 0;
}

inline S::S(const S &other)
    : metadata(other.metadata), holder(other.copyHolder())
{
}

inline S::~S()
{
    if (holder)
        delete holder;
}

int S::value()
{
    const TypeInfo* t = metadata->type;
    if (typeEqual(&surfaceType, t))
        return *getValue(&holder);

    S copy(*this);
    return *copy.convert();
}
