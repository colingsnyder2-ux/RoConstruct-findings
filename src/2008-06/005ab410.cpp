// from server: 100% by king_originala
// roc 2008-06 005ab410  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab410
//
// 005ab410  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ab414  83f803               cmp eax, 3
// 005ab417  7441                 je 0x5ab45a
// 005ab419  85c0                 test eax, eax
// 005ab41b  7517                 jne 0x5ab434
// 005ab41d  8b442408             mov eax, dword ptr [esp + 8]
// 005ab421  85c0                 test eax, eax
// 005ab423  743f                 je 0x5ab464
// 005ab425  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ab429  8b11                 mov edx, dword ptr [ecx]
// 005ab42b  8910                 mov dword ptr [eax], edx
// 005ab42d  8b4904               mov ecx, dword ptr [ecx + 4]
// 005ab430  894804               mov dword ptr [eax + 4], ecx
// 005ab433  c3                   ret 
// 005ab434  83f801               cmp eax, 1
// 005ab437  742b                 je 0x5ab464
// 005ab439  56                   push esi
// 005ab43a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ab43e  8b0e                 mov ecx, dword ptr [esi]
// 005ab440  68a0c69400           push 0x94c6a0
// 005ab445  ff1578288000         call dword ptr [0x802878]
// 005ab44b  0fb6d0               movzx edx, al
// 005ab44e  f7da                 neg edx
// 005ab450  1bd2                 sbb edx, edx
// 005ab452  23542408             and edx, dword ptr [esp + 8]
// 005ab456  8916                 mov dword ptr [esi], edx
// 005ab458  5e                   pop esi
// 005ab459  c3                   ret 
// 005ab45a  8b442408             mov eax, dword ptr [esp + 8]
// 005ab45e  c700a0c69400         mov dword ptr [eax], 0x94c6a0
// 005ab464  c3                   ret 

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
