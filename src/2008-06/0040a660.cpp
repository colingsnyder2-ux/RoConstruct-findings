// from server: 100% by king_originala
// roc 2008-06 0040a660  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a660
//
// 0040a660  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0040a663  8b01                 mov eax, dword ptr [ecx]
// 0040a665  8b542404             mov edx, dword ptr [esp + 4]
// 0040a669  8b4008               mov eax, dword ptr [eax + 8]
// 0040a66c  53                   push ebx
// 0040a66d  56                   push esi
// 0040a66e  52                   push edx
// 0040a66f  ffd0                 call eax
// 0040a671  8ad8                 mov bl, al
// 0040a673  e8b8251600           call 0x56cc30
// 0040a678  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040a67c  6a08                 push 8
// 0040a67e  8901                 mov dword ptr [ecx], eax
// 0040a680  8d7104               lea esi, [ecx + 4]
// 0040a683  e898622900           call 0x6a0920
// 0040a688  83c404               add esp, 4
// 0040a68b  85c0                 test eax, eax
// 0040a68d  740b                 je 0x40a69a
// 0040a68f  c70084ba8000         mov dword ptr [eax], 0x80ba84
// 0040a695  885804               mov byte ptr [eax + 4], bl
// 0040a698  eb02                 jmp 0x40a69c
// 0040a69a  33c0                 xor eax, eax
// 0040a69c  8d54240c             lea edx, [esp + 0xc]
// 0040a6a0  8bc8                 mov ecx, eax
// 0040a6a2  3bd6                 cmp edx, esi
// 0040a6a4  7404                 je 0x40a6aa
// 0040a6a6  8b0e                 mov ecx, dword ptr [esi]
// 0040a6a8  8906                 mov dword ptr [esi], eax
// 0040a6aa  5e                   pop esi
// 0040a6ab  5b                   pop ebx
// 0040a6ac  85c9                 test ecx, ecx
// 0040a6ae  7408                 je 0x40a6b8
// 0040a6b0  8b01                 mov eax, dword ptr [ecx]
// 0040a6b2  8b10                 mov edx, dword ptr [eax]
// 0040a6b4  6a01                 push 1
// 0040a6b6  ffd2                 call edx
// 0040a6b8  c20800               ret 8

struct Accessor;
struct Holder;

typedef bool (__thiscall *Getter)(Accessor*, void*);
typedef void (__thiscall *Disposer)(Holder*, unsigned int);

struct AccessorTable {
    void* slots[2];
    Getter get;
};

struct Accessor {
    AccessorTable* table;
};

struct HolderTable {
    Disposer dispose;
};

struct Holder {
    HolderTable* table;
    bool value;
};

struct Result {
    void* type;
    Holder* value;
};

extern HolderTable boolHolderTable;
extern void* __cdecl getBoolType();
extern void* __cdecl allocate(unsigned int);

struct S {
    unsigned char padding[24];
    Accessor* accessor;
    void f(void* object, Result* result);
};

void S::f(void* object, Result* result)
{
    bool value = accessor->table->get(accessor, object);
    result->type = getBoolType();
    Holder** destination = &result->value;

    Holder* holder = static_cast<Holder*>(allocate(sizeof(Holder)));
    if (holder) {
        holder->table = &boolHolderTable;
        holder->value = value;
    } else {
        holder = 0;
    }

    object = holder;
    if (&object != reinterpret_cast<void**>(destination)) {
        object = *destination;
        *destination = holder;
    }

    if (object) {
        Holder* old = static_cast<Holder*>(object);
        old->table->dispose(old, 1);
    }
}
