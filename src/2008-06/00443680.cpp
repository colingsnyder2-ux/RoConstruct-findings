// from server: 100% by king_originala
// roc 2008-06 00443680  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443680
//
// 00443680  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00443683  8b01                 mov eax, dword ptr [ecx]
// 00443685  8b542404             mov edx, dword ptr [esp + 4]
// 00443689  8b4008               mov eax, dword ptr [eax + 8]
// 0044368c  56                   push esi
// 0044368d  57                   push edi
// 0044368e  52                   push edx
// 0044368f  ffd0                 call eax
// 00443691  8bf8                 mov edi, eax
// 00443693  e828951200           call 0x56cbc0
// 00443698  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044369c  6a08                 push 8
// 0044369e  8901                 mov dword ptr [ecx], eax
// 004436a0  8d7104               lea esi, [ecx + 4]
// 004436a3  e878d22500           call 0x6a0920
// 004436a8  83c404               add esp, 4
// 004436ab  85c0                 test eax, eax
// 004436ad  740b                 je 0x4436ba
// 004436af  c700cc068100         mov dword ptr [eax], 0x8106cc
// 004436b5  897804               mov dword ptr [eax + 4], edi
// 004436b8  eb02                 jmp 0x4436bc
// 004436ba  33c0                 xor eax, eax
// 004436bc  8d54240c             lea edx, [esp + 0xc]
// 004436c0  8bc8                 mov ecx, eax
// 004436c2  3bd6                 cmp edx, esi
// 004436c4  7404                 je 0x4436ca
// 004436c6  8b0e                 mov ecx, dword ptr [esi]
// 004436c8  8906                 mov dword ptr [esi], eax
// 004436ca  5f                   pop edi
// 004436cb  5e                   pop esi
// 004436cc  85c9                 test ecx, ecx
// 004436ce  7408                 je 0x4436d8
// 004436d0  8b01                 mov eax, dword ptr [ecx]
// 004436d2  8b10                 mov edx, dword ptr [eax]
// 004436d4  6a01                 push 1
// 004436d6  ffd2                 call edx
// 004436d8  c20800               ret 8

struct Holder;
typedef void (__thiscall *DestroyHolder)(Holder *, unsigned int);

struct Holder {
    DestroyHolder *vtable;
    int value;
};

extern DestroyHolder holder_vtable[];
extern void * __cdecl get_type();
extern void * __cdecl allocate(unsigned int);

struct Accessor {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual int get(Holder *) = 0;
};

struct Result {
    void *type;
    Holder *holder;
};

struct Descriptor {
    unsigned char padding[24];
    Accessor *accessor;
    void get(Holder *argument, Result *result);
};

void Descriptor::get(Holder *argument, Result *result)
{
    int value = accessor->get(argument);
    result->type = get_type();
    Holder **destination = &result->holder;

    argument = (Holder *)allocate(8);
    if (argument) {
        argument->vtable = holder_vtable;
        argument->value = value;
    } else {
        argument = 0;
    }

    Holder *previous = argument;
    if (&argument != destination) {
        previous = *destination;
        *destination = argument;
    }

    if (previous)
        previous->vtable[0](previous, 1);
}
