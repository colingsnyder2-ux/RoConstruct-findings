// from server: 100% by king_originala
// roc 2008-06 004485b0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004485b0
//
// 004485b0  8b01                 mov eax, dword ptr [ecx]
// 004485b2  8b542404             mov edx, dword ptr [esp + 4]
// 004485b6  8b4038               mov eax, dword ptr [eax + 0x38]
// 004485b9  56                   push esi
// 004485ba  57                   push edi
// 004485bb  52                   push edx
// 004485bc  ffd0                 call eax
// 004485be  8bf8                 mov edi, eax
// 004485c0  e8fb451200           call 0x56cbc0
// 004485c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004485c9  6a08                 push 8
// 004485cb  8901                 mov dword ptr [ecx], eax
// 004485cd  8d7104               lea esi, [ecx + 4]
// 004485d0  e84b832500           call 0x6a0920
// 004485d5  83c404               add esp, 4
// 004485d8  85c0                 test eax, eax
// 004485da  740b                 je 0x4485e7
// 004485dc  c700cc068100         mov dword ptr [eax], 0x8106cc
// 004485e2  897804               mov dword ptr [eax + 4], edi
// 004485e5  eb02                 jmp 0x4485e9
// 004485e7  33c0                 xor eax, eax
// 004485e9  8d54240c             lea edx, [esp + 0xc]
// 004485ed  8bc8                 mov ecx, eax
// 004485ef  3bd6                 cmp edx, esi
// 004485f1  7404                 je 0x4485f7
// 004485f3  8b0e                 mov ecx, dword ptr [esi]
// 004485f5  8906                 mov dword ptr [esi], eax
// 004485f7  5f                   pop edi
// 004485f8  5e                   pop esi
// 004485f9  85c9                 test ecx, ecx
// 004485fb  7408                 je 0x448605
// 004485fd  8b01                 mov eax, dword ptr [ecx]
// 004485ff  8b10                 mov edx, dword ptr [eax]
// 00448601  6a01                 push 1
// 00448603  ffd2                 call edx
// 00448605  c20800               ret 8

struct Holder {
    void** vtable;
    int value;
};

struct Result {
    void* descriptor;
    Holder* object;
};

extern void* __cdecl getDescriptor();
extern void* __cdecl allocate(unsigned int);
extern void* holderVtable[];

struct EnumPropDescriptor {
    void** vtable;
    void convert(Holder* argument, Result* result);
};

void EnumPropDescriptor::convert(Holder* argument, Result* result)
{
    int value = reinterpret_cast<int (__thiscall*)(EnumPropDescriptor*, Holder*)>(
        vtable[14])(this, argument);

    result->descriptor = getDescriptor();

    Holder** destination = &result->object;
    Holder* object = static_cast<Holder*>(allocate(8));
    if (object) {
        object->vtable = holderVtable;
        object->value = value;
    } else {
        object = 0;
    }

    argument = object;
    if (&argument != destination) {
        Holder* previous = *destination;
        *destination = argument;
        argument = previous;
    }

    if (argument) {
        reinterpret_cast<void (__thiscall*)(Holder*, unsigned int)>(
            argument->vtable[0])(argument, 1);
    }
}
