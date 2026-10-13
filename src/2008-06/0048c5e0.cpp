// from server: 100% by colin
// roc 2008-06 0048c5e0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c5e0
//
// 0048c5e0  64a100000000         mov eax, dword ptr fs:[0]
// 0048c5e6  6aff                 push -1
// 0048c5e8  68a8257d00           push 0x7d25a8
// 0048c5ed  50                   push eax
// 0048c5ee  64892500000000       mov dword ptr fs:[0], esp
// 0048c5f5  83ec08               sub esp, 8
// 0048c5f8  56                   push esi
// 0048c5f9  8bf1                 mov esi, ecx
// 0048c5fb  8b06                 mov eax, dword ptr [esi]
// 0048c5fd  8b4008               mov eax, dword ptr [eax + 8]
// 0048c600  50                   push eax
// 0048c601  b998539300           mov ecx, 0x935398
// 0048c606  ff1578288000         call dword ptr [0x802878]
// 0048c60c  84c0                 test al, al
// 0048c60e  7426                 je 0x48c636
// 0048c610  83c604               add esi, 4
// 0048c613  56                   push esi
// 0048c614  e877f0ffff           call 0x48b690
// 0048c619  8b08                 mov ecx, dword ptr [eax]
// 0048c61b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0048c61f  83c404               add esp, 4
// 0048c622  8908                 mov dword ptr [eax], ecx
// 0048c624  5e                   pop esi
// 0048c625  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048c629  64890d00000000       mov dword ptr fs:[0], ecx
// 0048c630  83c414               add esp, 0x14
// 0048c633  c20400               ret 4
// 0048c636  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048c639  8b16                 mov edx, dword ptr [esi]
// 0048c63b  89542404             mov dword ptr [esp + 4], edx
// 0048c63f  85c9                 test ecx, ecx
// 0048c641  7409                 je 0x48c64c
// 0048c643  8b01                 mov eax, dword ptr [ecx]
// 0048c645  8b5008               mov edx, dword ptr [eax + 8]
// 0048c648  ffd2                 call edx
// 0048c64a  eb02                 jmp 0x48c64e
// 0048c64c  33c0                 xor eax, eax
// 0048c64e  89442408             mov dword ptr [esp + 8], eax
// 0048c652  8d4c2404             lea ecx, [esp + 4]
// 0048c656  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0048c65e  e87d290e00           call 0x56efe0
// 0048c663  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048c667  8b00                 mov eax, dword ptr [eax]
// 0048c669  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048c66d  8906                 mov dword ptr [esi], eax
// 0048c66f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048c677  85c9                 test ecx, ecx
// 0048c679  7408                 je 0x48c683
// 0048c67b  8b11                 mov edx, dword ptr [ecx]
// 0048c67d  8b02                 mov eax, dword ptr [edx]
// 0048c67f  6a01                 push 1
// 0048c681  ffd0                 call eax
// 0048c683  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048c687  8bc6                 mov eax, esi
// 0048c689  5e                   pop esi
// 0048c68a  64890d00000000       mov dword ptr fs:[0], ecx
// 0048c691  83c414               add esp, 0x14
// 0048c694  c20400               ret 4

class type_info {};

extern const type_info brickColorType;
extern bool (__thiscall *typeEqual)(const type_info*, const type_info&);

struct Descriptor {
    void* reserved0;
    void* reserved1;
    const type_info* type;
};

struct Payload {
    virtual ~Payload();
    virtual void reserved();
    virtual Payload* clone();
};

extern int* __cdecl extractColor(Payload**);

struct Temporary {
    Descriptor* descriptor;
    Payload* payload;

    Temporary(const Temporary&);
    ~Temporary();
    int* __thiscall convert();
};

inline Temporary::Temporary(const Temporary& other)
{
    descriptor = other.descriptor;
    Payload* p = other.payload;
    Payload* copy;
    if (p)
        copy = p->clone();
    else
        copy = 0;
    payload = copy;
}

inline Temporary::~Temporary()
{
    if (payload)
        delete payload;
}

struct S {
    Descriptor* descriptor;
    Payload* payload;

    int* __thiscall get(int* result);
};

int* S::get(int* result)
{
    const type_info* type = descriptor->type;
    if (typeEqual(&brickColorType, *type)) {
        *result = *extractColor(&payload);
        return result;
    }

    Temporary temporary(*reinterpret_cast<const Temporary*>(this));
    int* converted = temporary.convert();
    *result = *converted;
    return result;
}
