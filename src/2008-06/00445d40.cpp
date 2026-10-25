// from server: 100% by king_originala
// roc 2008-06 00445d40  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445d40
//
// 00445d40  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00445d43  8b01                 mov eax, dword ptr [ecx]
// 00445d45  8b542404             mov edx, dword ptr [esp + 4]
// 00445d49  8b4008               mov eax, dword ptr [eax + 8]
// 00445d4c  56                   push esi
// 00445d4d  52                   push edx
// 00445d4e  ffd0                 call eax
// 00445d50  d95c2408             fstp dword ptr [esp + 8]
// 00445d54  e8476f1200           call 0x56cca0
// 00445d59  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00445d5d  6a08                 push 8
// 00445d5f  8901                 mov dword ptr [ecx], eax
// 00445d61  8d7104               lea esi, [ecx + 4]
// 00445d64  e8b7ab2500           call 0x6a0920
// 00445d69  83c404               add esp, 4
// 00445d6c  85c0                 test eax, eax
// 00445d6e  740f                 je 0x445d7f
// 00445d70  d9442408             fld dword ptr [esp + 8]
// 00445d74  c700bc068100         mov dword ptr [eax], 0x8106bc
// 00445d7a  d95804               fstp dword ptr [eax + 4]
// 00445d7d  eb02                 jmp 0x445d81
// 00445d7f  33c0                 xor eax, eax
// 00445d81  8d542408             lea edx, [esp + 8]
// 00445d85  8bc8                 mov ecx, eax
// 00445d87  3bd6                 cmp edx, esi
// 00445d89  7404                 je 0x445d8f
// 00445d8b  8b0e                 mov ecx, dword ptr [esi]
// 00445d8d  8906                 mov dword ptr [esi], eax
// 00445d8f  5e                   pop esi
// 00445d90  85c9                 test ecx, ecx
// 00445d92  7408                 je 0x445d9c
// 00445d94  8b01                 mov eax, dword ptr [ecx]
// 00445d96  8b10                 mov edx, dword ptr [eax]
// 00445d98  6a01                 push 1
// 00445d9a  ffd2                 call edx
// 00445d9c  c20800               ret 8

struct Reader {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual float get(void* object) = 0;
};

struct Deletable {
    virtual void destroy(unsigned int flags) = 0;
};

struct Holder {
    void** table;
    float value;
};

struct Value {
    void* type;
    Holder* holder;
};

extern void* holderTable[];
extern void* __cdecl getType();
void* __cdecl operator new(unsigned int size);

struct S {
    unsigned char padding[24];
    Reader* reader;
    void get(void* object, Value* result);
};

void S::get(void* object, Value* result)
{
    float value = reader->get(object);
    result->type = getType();

    Holder** destination = &result->holder;
    Holder* temporary = static_cast<Holder*>(operator new(8));
    if (temporary) {
        temporary->table = holderTable;
        temporary->value = value;
    } else {
        temporary = 0;
    }

    Deletable* previous = reinterpret_cast<Deletable*>(temporary);
    if (&temporary != destination) {
        previous = reinterpret_cast<Deletable*>(*destination);
        *destination = temporary;
    }

    if (previous)
        previous->destroy(1);
}
