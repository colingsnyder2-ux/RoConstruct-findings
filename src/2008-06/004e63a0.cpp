// from server: 100% by king_originala
// roc 2008-06 004e63a0  unit: RBX::ViewNew::PartChunk  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e63a0
//
// 004e63a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e63a4  85c0                 test eax, eax
// 004e63a6  7523                 jne 0x4e63cb
// 004e63a8  8b442408             mov eax, dword ptr [esp + 8]
// 004e63ac  85c0                 test eax, eax
// 004e63ae  7440                 je 0x4e63f0
// 004e63b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e63b4  8b11                 mov edx, dword ptr [ecx]
// 004e63b6  8910                 mov dword ptr [eax], edx
// 004e63b8  8b5104               mov edx, dword ptr [ecx + 4]
// 004e63bb  895004               mov dword ptr [eax + 4], edx
// 004e63be  8b5108               mov edx, dword ptr [ecx + 8]
// 004e63c1  895008               mov dword ptr [eax + 8], edx
// 004e63c4  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004e63c7  89480c               mov dword ptr [eax + 0xc], ecx
// 004e63ca  c3                   ret 
// 004e63cb  83f801               cmp eax, 1
// 004e63ce  7420                 je 0x4e63f0
// 004e63d0  56                   push esi
// 004e63d1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e63d5  8b0e                 mov ecx, dword ptr [esi]
// 004e63d7  6878169400           push 0x941678
// 004e63dc  ff1578288000         call dword ptr [0x802878]
// 004e63e2  0fb6d0               movzx edx, al
// 004e63e5  f7da                 neg edx
// 004e63e7  1bd2                 sbb edx, edx
// 004e63e9  23542408             and edx, dword ptr [esp + 8]
// 004e63ed  8916                 mov dword ptr [esi], edx
// 004e63ef  5e                   pop esi
// 004e63f0  c3                   ret 

struct TypeInfo {};

extern TypeInfo targetType;
extern bool (__thiscall *typeEquals)(const TypeInfo*, const TypeInfo&);

struct Block {
    unsigned long a, b, c, d;
};

void __cdecl manage(const Block* source, void* destination, int operation)
{
    if (operation == 0) {
        if (destination)
            *static_cast<Block*>(destination) = *source;
    } else if (operation != 1) {
        const TypeInfo* type = *static_cast<const TypeInfo**>(destination);
        *static_cast<const Block**>(destination) =
            typeEquals(type, targetType) ? source : 0;
    }
}
