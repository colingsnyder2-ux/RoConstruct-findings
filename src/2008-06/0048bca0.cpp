// from server: 100% by king_originala
// roc 2008-06 0048bca0  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048bca0
//
// 0048bca0  56                   push esi
// 0048bca1  57                   push edi
// 0048bca2  8bf9                 mov edi, ecx
// 0048bca4  e877140e00           call 0x56d120
// 0048bca9  6a08                 push 8
// 0048bcab  8907                 mov dword ptr [edi], eax
// 0048bcad  8d7704               lea esi, [edi + 4]
// 0048bcb0  e86b4c2100           call 0x6a0920
// 0048bcb5  83c404               add esp, 4
// 0048bcb8  85c0                 test eax, eax
// 0048bcba  7411                 je 0x48bccd
// 0048bcbc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048bcc0  c700c4168200         mov dword ptr [eax], 0x8216c4
// 0048bcc6  8b11                 mov edx, dword ptr [ecx]
// 0048bcc8  895004               mov dword ptr [eax + 4], edx
// 0048bccb  eb02                 jmp 0x48bccf
// 0048bccd  33c0                 xor eax, eax
// 0048bccf  8d54240c             lea edx, [esp + 0xc]
// 0048bcd3  8bc8                 mov ecx, eax
// 0048bcd5  3bd6                 cmp edx, esi
// 0048bcd7  7404                 je 0x48bcdd
// 0048bcd9  8b0e                 mov ecx, dword ptr [esi]
// 0048bcdb  8906                 mov dword ptr [esi], eax
// 0048bcdd  85c9                 test ecx, ecx
// 0048bcdf  7408                 je 0x48bce9
// 0048bce1  8b01                 mov eax, dword ptr [ecx]
// 0048bce3  8b10                 mov edx, dword ptr [eax]
// 0048bce5  6a01                 push 1
// 0048bce7  ffd2                 call edx
// 0048bce9  8bc7                 mov eax, edi
// 0048bceb  5f                   pop edi
// 0048bcec  5e                   pop esi
// 0048bced  c20400               ret 4

struct Holder;
typedef void (__thiscall *Destroy)(Holder*, unsigned int);

struct Holder {
    Destroy* table;
    unsigned int value;
};

extern Destroy holderTable[];
extern void* __cdecl getType();
extern void* __cdecl allocate(unsigned int);

struct S {
    void* type;
    Holder* holder;
    S* assign(const unsigned int* value);
};

S* S::assign(const unsigned int* value)
{
    type = getType();
    Holder** destination = &holder;
    Holder* fresh = static_cast<Holder*>(allocate(8));
    if (fresh) {
        fresh->table = holderTable;
        fresh->value = *value;
    } else {
        fresh = 0;
    }

    Holder* previous = fresh;
    if (static_cast<void*>(&value) != static_cast<void*>(destination)) {
        previous = *destination;
        *destination = fresh;
    }
    if (previous)
        previous->table[0](previous, 1);
    return this;
}
