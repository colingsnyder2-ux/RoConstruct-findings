// from server: 100% by king_originala
// roc 2008-06 005874d0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005874d0
//
// 005874d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005874d4  85c0                 test eax, eax
// 005874d6  7523                 jne 0x5874fb
// 005874d8  8b442408             mov eax, dword ptr [esp + 8]
// 005874dc  85c0                 test eax, eax
// 005874de  7440                 je 0x587520
// 005874e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005874e4  8b11                 mov edx, dword ptr [ecx]
// 005874e6  8910                 mov dword ptr [eax], edx
// 005874e8  8b5104               mov edx, dword ptr [ecx + 4]
// 005874eb  895004               mov dword ptr [eax + 4], edx
// 005874ee  8b5108               mov edx, dword ptr [ecx + 8]
// 005874f1  895008               mov dword ptr [eax + 8], edx
// 005874f4  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005874f7  89480c               mov dword ptr [eax + 0xc], ecx
// 005874fa  c3                   ret 
// 005874fb  83f801               cmp eax, 1
// 005874fe  7420                 je 0x587520
// 00587500  56                   push esi
// 00587501  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00587505  8b0e                 mov ecx, dword ptr [esi]
// 00587507  68808e9400           push 0x948e80
// 0058750c  ff1578288000         call dword ptr [0x802878]
// 00587512  0fb6d0               movzx edx, al
// 00587515  f7da                 neg edx
// 00587517  1bd2                 sbb edx, edx
// 00587519  23542408             and edx, dword ptr [esp + 8]
// 0058751d  8916                 mov dword ptr [esi], edx
// 0058751f  5e                   pop esi
// 00587520  c3                   ret 

struct Value {
    unsigned int words[4];
};

struct TypeInfo;
extern TypeInfo targetType;
extern bool (__thiscall *typeInfoEqual)(const TypeInfo *, const TypeInfo *);

void __cdecl manage(const Value *source, Value *destination, int operation)
{
    if (operation == 0) {
        if (destination)
            *destination = *source;
    } else if (operation != 1) {
        destination->words[0] =
            typeInfoEqual(
                reinterpret_cast<const TypeInfo *>(destination->words[0]),
                &targetType)
            ? reinterpret_cast<unsigned int>(source)
            : 0;
    }
}
