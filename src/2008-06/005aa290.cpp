// from server: 100% by king_originala
// roc 2008-06 005aa290  unit: RBX::VScriptContext::?$FactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aa290
//
// 005aa290  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005aa294  85c0                 test eax, eax
// 005aa296  7523                 jne 0x5aa2bb
// 005aa298  8b442408             mov eax, dword ptr [esp + 8]
// 005aa29c  85c0                 test eax, eax
// 005aa29e  7440                 je 0x5aa2e0
// 005aa2a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005aa2a4  8b11                 mov edx, dword ptr [ecx]
// 005aa2a6  8910                 mov dword ptr [eax], edx
// 005aa2a8  8b5104               mov edx, dword ptr [ecx + 4]
// 005aa2ab  895004               mov dword ptr [eax + 4], edx
// 005aa2ae  8b5108               mov edx, dword ptr [ecx + 8]
// 005aa2b1  895008               mov dword ptr [eax + 8], edx
// 005aa2b4  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005aa2b7  89480c               mov dword ptr [eax + 0xc], ecx
// 005aa2ba  c3                   ret 
// 005aa2bb  83f801               cmp eax, 1
// 005aa2be  7420                 je 0x5aa2e0
// 005aa2c0  56                   push esi
// 005aa2c1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005aa2c5  8b0e                 mov ecx, dword ptr [esi]
// 005aa2c7  68f0c79400           push 0x94c7f0
// 005aa2cc  ff1578288000         call dword ptr [0x802878]
// 005aa2d2  0fb6d0               movzx edx, al
// 005aa2d5  f7da                 neg edx
// 005aa2d7  1bd2                 sbb edx, edx
// 005aa2d9  23542408             and edx, dword ptr [esp + 8]
// 005aa2dd  8916                 mov dword ptr [esi], edx
// 005aa2df  5e                   pop esi
// 005aa2e0  c3                   ret 

struct Buffer {
    void* data[4];
};

struct TypeInfo;
extern TypeInfo targetType;
extern bool (__thiscall *typeEqual)(const void*, const TypeInfo*);

void manage(const Buffer* source, Buffer* destination, int operation)
{
    if (operation == 0) {
        if (destination)
            *destination = *source;
    } else if (operation != 1) {
        destination->data[0] =
            typeEqual(destination->data[0], &targetType)
                ? const_cast<Buffer*>(source)
                : 0;
    }
}
