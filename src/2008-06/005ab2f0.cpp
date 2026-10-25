// from server: 100% by tester
// roc 2008-06 005ab2f0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab2f0
//
// 005ab2f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ab2f4  83f803               cmp eax, 3
// 005ab2f7  7441                 je 0x5ab33a
// 005ab2f9  85c0                 test eax, eax
// 005ab2fb  7517                 jne 0x5ab314
// 005ab2fd  8b442408             mov eax, dword ptr [esp + 8]
// 005ab301  85c0                 test eax, eax
// 005ab303  743f                 je 0x5ab344
// 005ab305  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ab309  8b11                 mov edx, dword ptr [ecx]
// 005ab30b  8910                 mov dword ptr [eax], edx
// 005ab30d  8b4904               mov ecx, dword ptr [ecx + 4]
// 005ab310  894804               mov dword ptr [eax + 4], ecx
// 005ab313  c3                   ret 
// 005ab314  83f801               cmp eax, 1
// 005ab317  742b                 je 0x5ab344
// 005ab319  56                   push esi
// 005ab31a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ab31e  8b0e                 mov ecx, dword ptr [esi]
// 005ab320  68b0c49400           push 0x94c4b0
// 005ab325  ff1578288000         call dword ptr [0x802878]
// 005ab32b  0fb6d0               movzx edx, al
// 005ab32e  f7da                 neg edx
// 005ab330  1bd2                 sbb edx, edx
// 005ab332  23542408             and edx, dword ptr [esp + 8]
// 005ab336  8916                 mov dword ptr [esi], edx
// 005ab338  5e                   pop esi
// 005ab339  c3                   ret 
// 005ab33a  8b442408             mov eax, dword ptr [esp + 8]
// 005ab33e  c700b0c49400         mov dword ptr [eax], 0x94c4b0
// 005ab344  c3                   ret 

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
