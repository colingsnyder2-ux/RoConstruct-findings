// from server: 100% by tester
// roc 2008-06 005ab350  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab350
//
// 005ab350  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ab354  83f803               cmp eax, 3
// 005ab357  7441                 je 0x5ab39a
// 005ab359  85c0                 test eax, eax
// 005ab35b  7517                 jne 0x5ab374
// 005ab35d  8b442408             mov eax, dword ptr [esp + 8]
// 005ab361  85c0                 test eax, eax
// 005ab363  743f                 je 0x5ab3a4
// 005ab365  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ab369  8b11                 mov edx, dword ptr [ecx]
// 005ab36b  8910                 mov dword ptr [eax], edx
// 005ab36d  8b4904               mov ecx, dword ptr [ecx + 4]
// 005ab370  894804               mov dword ptr [eax + 4], ecx
// 005ab373  c3                   ret 
// 005ab374  83f801               cmp eax, 1
// 005ab377  742b                 je 0x5ab3a4
// 005ab379  56                   push esi
// 005ab37a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ab37e  8b0e                 mov ecx, dword ptr [esi]
// 005ab380  6810c59400           push 0x94c510
// 005ab385  ff1578288000         call dword ptr [0x802878]
// 005ab38b  0fb6d0               movzx edx, al
// 005ab38e  f7da                 neg edx
// 005ab390  1bd2                 sbb edx, edx
// 005ab392  23542408             and edx, dword ptr [esp + 8]
// 005ab396  8916                 mov dword ptr [esi], edx
// 005ab398  5e                   pop esi
// 005ab399  c3                   ret 
// 005ab39a  8b442408             mov eax, dword ptr [esp + 8]
// 005ab39e  c70010c59400         mov dword ptr [eax], 0x94c510
// 005ab3a4  c3                   ret 

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
