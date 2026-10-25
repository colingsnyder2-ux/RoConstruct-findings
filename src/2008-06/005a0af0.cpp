// from server: 100% by king_originala
// roc 2008-06 005a0af0  unit: RBX::RootInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0af0
//
// 005a0af0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a0af4  85c0                 test eax, eax
// 005a0af6  7523                 jne 0x5a0b1b
// 005a0af8  8b442408             mov eax, dword ptr [esp + 8]
// 005a0afc  85c0                 test eax, eax
// 005a0afe  7440                 je 0x5a0b40
// 005a0b00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a0b04  8b11                 mov edx, dword ptr [ecx]
// 005a0b06  8910                 mov dword ptr [eax], edx
// 005a0b08  8b5104               mov edx, dword ptr [ecx + 4]
// 005a0b0b  895004               mov dword ptr [eax + 4], edx
// 005a0b0e  8b5108               mov edx, dword ptr [ecx + 8]
// 005a0b11  895008               mov dword ptr [eax + 8], edx
// 005a0b14  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005a0b17  89480c               mov dword ptr [eax + 0xc], ecx
// 005a0b1a  c3                   ret 
// 005a0b1b  83f801               cmp eax, 1
// 005a0b1e  7420                 je 0x5a0b40
// 005a0b20  56                   push esi
// 005a0b21  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a0b25  8b0e                 mov ecx, dword ptr [esi]
// 005a0b27  6840b99400           push 0x94b940
// 005a0b2c  ff1578288000         call dword ptr [0x802878]
// 005a0b32  0fb6d0               movzx edx, al
// 005a0b35  f7da                 neg edx
// 005a0b37  1bd2                 sbb edx, edx
// 005a0b39  23542408             and edx, dword ptr [esp + 8]
// 005a0b3d  8916                 mov dword ptr [esi], edx
// 005a0b3f  5e                   pop esi
// 005a0b40  c3                   ret 

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
