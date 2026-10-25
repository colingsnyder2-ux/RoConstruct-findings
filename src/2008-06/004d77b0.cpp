// from server: 100% by tester
// roc 2008-06 004d77b0  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d77b0
//
// 004d77b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d77b4  83f803               cmp eax, 3
// 004d77b7  7441                 je 0x4d77fa
// 004d77b9  85c0                 test eax, eax
// 004d77bb  7517                 jne 0x4d77d4
// 004d77bd  8b442408             mov eax, dword ptr [esp + 8]
// 004d77c1  85c0                 test eax, eax
// 004d77c3  743f                 je 0x4d7804
// 004d77c5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d77c9  8b11                 mov edx, dword ptr [ecx]
// 004d77cb  8910                 mov dword ptr [eax], edx
// 004d77cd  8b4904               mov ecx, dword ptr [ecx + 4]
// 004d77d0  894804               mov dword ptr [eax + 4], ecx
// 004d77d3  c3                   ret 
// 004d77d4  83f801               cmp eax, 1
// 004d77d7  742b                 je 0x4d7804
// 004d77d9  56                   push esi
// 004d77da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d77de  8b0e                 mov ecx, dword ptr [esi]
// 004d77e0  68900b9400           push 0x940b90
// 004d77e5  ff1578288000         call dword ptr [0x802878]
// 004d77eb  0fb6d0               movzx edx, al
// 004d77ee  f7da                 neg edx
// 004d77f0  1bd2                 sbb edx, edx
// 004d77f2  23542408             and edx, dword ptr [esp + 8]
// 004d77f6  8916                 mov dword ptr [esi], edx
// 004d77f8  5e                   pop esi
// 004d77f9  c3                   ret 
// 004d77fa  8b442408             mov eax, dword ptr [esp + 8]
// 004d77fe  c700900b9400         mov dword ptr [eax], 0x940b90
// 004d7804  c3                   ret 

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
