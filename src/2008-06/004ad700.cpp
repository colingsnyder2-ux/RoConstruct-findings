// from server: 100% by tester
// roc 2008-06 004ad700  unit: RBX::Network::Replicator::ChangePropertyItem  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad700
//
// 004ad700  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ad704  83f803               cmp eax, 3
// 004ad707  7441                 je 0x4ad74a
// 004ad709  85c0                 test eax, eax
// 004ad70b  7517                 jne 0x4ad724
// 004ad70d  8b442408             mov eax, dword ptr [esp + 8]
// 004ad711  85c0                 test eax, eax
// 004ad713  743f                 je 0x4ad754
// 004ad715  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad719  8b11                 mov edx, dword ptr [ecx]
// 004ad71b  8910                 mov dword ptr [eax], edx
// 004ad71d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ad720  894804               mov dword ptr [eax + 4], ecx
// 004ad723  c3                   ret 
// 004ad724  83f801               cmp eax, 1
// 004ad727  742b                 je 0x4ad754
// 004ad729  56                   push esi
// 004ad72a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ad72e  8b0e                 mov ecx, dword ptr [esi]
// 004ad730  68c0b09300           push 0x93b0c0
// 004ad735  ff1578288000         call dword ptr [0x802878]
// 004ad73b  0fb6d0               movzx edx, al
// 004ad73e  f7da                 neg edx
// 004ad740  1bd2                 sbb edx, edx
// 004ad742  23542408             and edx, dword ptr [esp + 8]
// 004ad746  8916                 mov dword ptr [esi], edx
// 004ad748  5e                   pop esi
// 004ad749  c3                   ret 
// 004ad74a  8b442408             mov eax, dword ptr [esp + 8]
// 004ad74e  c700c0b09300         mov dword ptr [eax], 0x93b0c0
// 004ad754  c3                   ret 

struct TypeInfo {};

typedef bool (__thiscall *TypeEqual)(const TypeInfo*, const TypeInfo&);
extern TypeEqual typeEqual;
extern const TypeInfo typeTag;

struct Storage {
    const TypeInfo* first;
    void* second;
};

void manage(Storage* source, Storage* destination, int operation)
{
    if (operation != 3) {
        if (operation == 0) {
            if (destination)
                *destination = *source;
        } else if (operation != 1) {
            destination->first = typeEqual(destination->first, typeTag)
                ? reinterpret_cast<const TypeInfo*>(source) : 0;
        }
    } else {
        destination->first = &typeTag;
    }
}
