// from server: 100% by tester
// roc 2008-06 004e71c0  unit: RBX::RenderBase::VAggregateChunk::?$WeakReferenceCountedPointer  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e71c0
//
// 004e71c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e71c4  83f803               cmp eax, 3
// 004e71c7  7441                 je 0x4e720a
// 004e71c9  85c0                 test eax, eax
// 004e71cb  7517                 jne 0x4e71e4
// 004e71cd  8b442408             mov eax, dword ptr [esp + 8]
// 004e71d1  85c0                 test eax, eax
// 004e71d3  743f                 je 0x4e7214
// 004e71d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e71d9  8b11                 mov edx, dword ptr [ecx]
// 004e71db  8910                 mov dword ptr [eax], edx
// 004e71dd  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e71e0  894804               mov dword ptr [eax + 4], ecx
// 004e71e3  c3                   ret 
// 004e71e4  83f801               cmp eax, 1
// 004e71e7  742b                 je 0x4e7214
// 004e71e9  56                   push esi
// 004e71ea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e71ee  8b0e                 mov ecx, dword ptr [esi]
// 004e71f0  6888189400           push 0x941888
// 004e71f5  ff1578288000         call dword ptr [0x802878]
// 004e71fb  0fb6d0               movzx edx, al
// 004e71fe  f7da                 neg edx
// 004e7200  1bd2                 sbb edx, edx
// 004e7202  23542408             and edx, dword ptr [esp + 8]
// 004e7206  8916                 mov dword ptr [esi], edx
// 004e7208  5e                   pop esi
// 004e7209  c3                   ret 
// 004e720a  8b442408             mov eax, dword ptr [esp + 8]
// 004e720e  c70088189400         mov dword ptr [eax], 0x941888
// 004e7214  c3                   ret 

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
