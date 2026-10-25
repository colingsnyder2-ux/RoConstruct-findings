// from server: 100% by tester
// roc 2008-06 005ab3b0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab3b0
//
// 005ab3b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ab3b4  83f803               cmp eax, 3
// 005ab3b7  7441                 je 0x5ab3fa
// 005ab3b9  85c0                 test eax, eax
// 005ab3bb  7517                 jne 0x5ab3d4
// 005ab3bd  8b442408             mov eax, dword ptr [esp + 8]
// 005ab3c1  85c0                 test eax, eax
// 005ab3c3  743f                 je 0x5ab404
// 005ab3c5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ab3c9  8b11                 mov edx, dword ptr [ecx]
// 005ab3cb  8910                 mov dword ptr [eax], edx
// 005ab3cd  8b4904               mov ecx, dword ptr [ecx + 4]
// 005ab3d0  894804               mov dword ptr [eax + 4], ecx
// 005ab3d3  c3                   ret 
// 005ab3d4  83f801               cmp eax, 1
// 005ab3d7  742b                 je 0x5ab404
// 005ab3d9  56                   push esi
// 005ab3da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ab3de  8b0e                 mov ecx, dword ptr [esi]
// 005ab3e0  6880c59400           push 0x94c580
// 005ab3e5  ff1578288000         call dword ptr [0x802878]
// 005ab3eb  0fb6d0               movzx edx, al
// 005ab3ee  f7da                 neg edx
// 005ab3f0  1bd2                 sbb edx, edx
// 005ab3f2  23542408             and edx, dword ptr [esp + 8]
// 005ab3f6  8916                 mov dword ptr [esi], edx
// 005ab3f8  5e                   pop esi
// 005ab3f9  c3                   ret 
// 005ab3fa  8b442408             mov eax, dword ptr [esp + 8]
// 005ab3fe  c70080c59400         mov dword ptr [eax], 0x94c580
// 005ab404  c3                   ret 

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
