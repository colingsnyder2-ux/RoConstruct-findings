// from server: 100% by king_originala
// roc 2008-06 0048e470  unit: RBX::Network::VPlayer::?$SignalDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e470
//
// 0048e470  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048e474  85c0                 test eax, eax
// 0048e476  7513                 jne 0x48e48b
// 0048e478  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e47c  85c9                 test ecx, ecx
// 0048e47e  743c                 je 0x48e4bc
// 0048e480  8b442404             mov eax, dword ptr [esp + 4]
// 0048e484  50                   push eax
// 0048e485  e886e8ffff           call 0x48cd10
// 0048e48a  c3                   ret 
// 0048e48b  83f801               cmp eax, 1
// 0048e48e  750c                 jne 0x48e49c
// 0048e490  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e494  83c104               add ecx, 4
// 0048e497  e9c447f9ff           jmp 0x422c60
// 0048e49c  56                   push esi
// 0048e49d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048e4a1  8b0e                 mov ecx, dword ptr [esi]
// 0048e4a3  6850569300           push 0x935650
// 0048e4a8  ff1578288000         call dword ptr [0x802878]
// 0048e4ae  0fb6c8               movzx ecx, al
// 0048e4b1  f7d9                 neg ecx
// 0048e4b3  1bc9                 sbb ecx, ecx
// 0048e4b5  234c2408             and ecx, dword ptr [esp + 8]
// 0048e4b9  890e                 mov dword ptr [esi], ecx
// 0048e4bb  5e                   pop esi
// 0048e4bc  c3                   ret 

struct TypeInfo;
typedef bool (__thiscall *TypeCompare)(const TypeInfo*, const TypeInfo&);

extern TypeCompare compareTypes;
extern const TypeInfo targetType;

struct Payload {
    void destroy();
};

struct Buffer {
    void* value;
    Payload payload;
    void clone(const void* source);
};

void __cdecl manage(const void* source, Buffer* destination, int operation)
{
    if (operation == 0) {
        if (destination)
            destination->clone(source);
    } else if (operation == 1) {
        destination->payload.destroy();
    } else {
        destination->value =
            compareTypes(static_cast<const TypeInfo*>(destination->value),
                         targetType)
            ? const_cast<void*>(source) : 0;
    }
}
