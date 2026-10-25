// from server: 100% by king_originala
// roc 2008-06 005a09d0  unit: RBX::RootInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a09d0
//
// 005a09d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a09d4  85c0                 test eax, eax
// 005a09d6  7523                 jne 0x5a09fb
// 005a09d8  8b442408             mov eax, dword ptr [esp + 8]
// 005a09dc  85c0                 test eax, eax
// 005a09de  7440                 je 0x5a0a20
// 005a09e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a09e4  8b11                 mov edx, dword ptr [ecx]
// 005a09e6  8910                 mov dword ptr [eax], edx
// 005a09e8  8b5104               mov edx, dword ptr [ecx + 4]
// 005a09eb  895004               mov dword ptr [eax + 4], edx
// 005a09ee  8b5108               mov edx, dword ptr [ecx + 8]
// 005a09f1  895008               mov dword ptr [eax + 8], edx
// 005a09f4  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005a09f7  89480c               mov dword ptr [eax + 0xc], ecx
// 005a09fa  c3                   ret 
// 005a09fb  83f801               cmp eax, 1
// 005a09fe  7420                 je 0x5a0a20
// 005a0a00  56                   push esi
// 005a0a01  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a0a05  8b0e                 mov ecx, dword ptr [esi]
// 005a0a07  68c8b79400           push 0x94b7c8
// 005a0a0c  ff1578288000         call dword ptr [0x802878]
// 005a0a12  0fb6d0               movzx edx, al
// 005a0a15  f7da                 neg edx
// 005a0a17  1bd2                 sbb edx, edx
// 005a0a19  23542408             and edx, dword ptr [esp + 8]
// 005a0a1d  8916                 mov dword ptr [esi], edx
// 005a0a1f  5e                   pop esi
// 005a0a20  c3                   ret 

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
