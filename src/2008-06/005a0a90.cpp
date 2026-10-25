// from server: 100% by king_originala
// roc 2008-06 005a0a90  unit: RBX::RootInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0a90
//
// 005a0a90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a0a94  85c0                 test eax, eax
// 005a0a96  7523                 jne 0x5a0abb
// 005a0a98  8b442408             mov eax, dword ptr [esp + 8]
// 005a0a9c  85c0                 test eax, eax
// 005a0a9e  7440                 je 0x5a0ae0
// 005a0aa0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a0aa4  8b11                 mov edx, dword ptr [ecx]
// 005a0aa6  8910                 mov dword ptr [eax], edx
// 005a0aa8  8b5104               mov edx, dword ptr [ecx + 4]
// 005a0aab  895004               mov dword ptr [eax + 4], edx
// 005a0aae  8b5108               mov edx, dword ptr [ecx + 8]
// 005a0ab1  895008               mov dword ptr [eax + 8], edx
// 005a0ab4  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005a0ab7  89480c               mov dword ptr [eax + 0xc], ecx
// 005a0aba  c3                   ret 
// 005a0abb  83f801               cmp eax, 1
// 005a0abe  7420                 je 0x5a0ae0
// 005a0ac0  56                   push esi
// 005a0ac1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a0ac5  8b0e                 mov ecx, dword ptr [esi]
// 005a0ac7  68c8b89400           push 0x94b8c8
// 005a0acc  ff1578288000         call dword ptr [0x802878]
// 005a0ad2  0fb6d0               movzx edx, al
// 005a0ad5  f7da                 neg edx
// 005a0ad7  1bd2                 sbb edx, edx
// 005a0ad9  23542408             and edx, dword ptr [esp + 8]
// 005a0add  8916                 mov dword ptr [esi], edx
// 005a0adf  5e                   pop esi
// 005a0ae0  c3                   ret 

struct TypeInfo;

extern TypeInfo expectedType;
extern bool (__thiscall *typeEqual)(const TypeInfo *, const TypeInfo &);

union Buffer {
    unsigned int words[4];
    const TypeInfo *type;
    const Buffer *object;
};

void __cdecl manage(const Buffer *source, Buffer *destination, int operation)
{
    if (operation == 0) {
        if (destination)
            *destination = *source;
    } else if (operation != 1) {
        destination->object =
            typeEqual(destination->type, expectedType) ? source : 0;
    }
}
