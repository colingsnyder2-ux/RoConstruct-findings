// from server: 100% by tester
// roc 2008-06 004e7160  unit: RBX::RenderBase::VAggregateChunk::?$WeakReferenceCountedPointer  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7160
//
// 004e7160  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e7164  83f803               cmp eax, 3
// 004e7167  7441                 je 0x4e71aa
// 004e7169  85c0                 test eax, eax
// 004e716b  7517                 jne 0x4e7184
// 004e716d  8b442408             mov eax, dword ptr [esp + 8]
// 004e7171  85c0                 test eax, eax
// 004e7173  743f                 je 0x4e71b4
// 004e7175  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e7179  8b11                 mov edx, dword ptr [ecx]
// 004e717b  8910                 mov dword ptr [eax], edx
// 004e717d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e7180  894804               mov dword ptr [eax + 4], ecx
// 004e7183  c3                   ret 
// 004e7184  83f801               cmp eax, 1
// 004e7187  742b                 je 0x4e71b4
// 004e7189  56                   push esi
// 004e718a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e718e  8b0e                 mov ecx, dword ptr [esi]
// 004e7190  68c8179400           push 0x9417c8
// 004e7195  ff1578288000         call dword ptr [0x802878]
// 004e719b  0fb6d0               movzx edx, al
// 004e719e  f7da                 neg edx
// 004e71a0  1bd2                 sbb edx, edx
// 004e71a2  23542408             and edx, dword ptr [esp + 8]
// 004e71a6  8916                 mov dword ptr [esi], edx
// 004e71a8  5e                   pop esi
// 004e71a9  c3                   ret 
// 004e71aa  8b442408             mov eax, dword ptr [esp + 8]
// 004e71ae  c700c8179400         mov dword ptr [eax], 0x9417c8
// 004e71b4  c3                   ret 

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
