// from server: 100% by king_originala
// roc 2008-06 005a0a30  unit: RBX::RootInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0a30
//
// 005a0a30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a0a34  85c0                 test eax, eax
// 005a0a36  7523                 jne 0x5a0a5b
// 005a0a38  8b442408             mov eax, dword ptr [esp + 8]
// 005a0a3c  85c0                 test eax, eax
// 005a0a3e  7440                 je 0x5a0a80
// 005a0a40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a0a44  8b11                 mov edx, dword ptr [ecx]
// 005a0a46  8910                 mov dword ptr [eax], edx
// 005a0a48  8b5104               mov edx, dword ptr [ecx + 4]
// 005a0a4b  895004               mov dword ptr [eax + 4], edx
// 005a0a4e  8b5108               mov edx, dword ptr [ecx + 8]
// 005a0a51  895008               mov dword ptr [eax + 8], edx
// 005a0a54  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005a0a57  89480c               mov dword ptr [eax + 0xc], ecx
// 005a0a5a  c3                   ret 
// 005a0a5b  83f801               cmp eax, 1
// 005a0a5e  7420                 je 0x5a0a80
// 005a0a60  56                   push esi
// 005a0a61  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a0a65  8b0e                 mov ecx, dword ptr [esi]
// 005a0a67  6840b89400           push 0x94b840
// 005a0a6c  ff1578288000         call dword ptr [0x802878]
// 005a0a72  0fb6d0               movzx edx, al
// 005a0a75  f7da                 neg edx
// 005a0a77  1bd2                 sbb edx, edx
// 005a0a79  23542408             and edx, dword ptr [esp + 8]
// 005a0a7d  8916                 mov dword ptr [esi], edx
// 005a0a7f  5e                   pop esi
// 005a0a80  c3                   ret 

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
