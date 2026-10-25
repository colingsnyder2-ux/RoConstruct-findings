// from server: 100% by king_originala
// roc 2008-06 0042a8a0  unit: boost::detail::H::?$sp_counted_impl_p  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a8a0
//
// 0042a8a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a8a4  85c0                 test eax, eax
// 0042a8a6  751d                 jne 0x42a8c5
// 0042a8a8  8b442408             mov eax, dword ptr [esp + 8]
// 0042a8ac  85c0                 test eax, eax
// 0042a8ae  743a                 je 0x42a8ea
// 0042a8b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042a8b4  8b11                 mov edx, dword ptr [ecx]
// 0042a8b6  8910                 mov dword ptr [eax], edx
// 0042a8b8  8b5104               mov edx, dword ptr [ecx + 4]
// 0042a8bb  895004               mov dword ptr [eax + 4], edx
// 0042a8be  8b4908               mov ecx, dword ptr [ecx + 8]
// 0042a8c1  894808               mov dword ptr [eax + 8], ecx
// 0042a8c4  c3                   ret 
// 0042a8c5  83f801               cmp eax, 1
// 0042a8c8  7420                 je 0x42a8ea
// 0042a8ca  56                   push esi
// 0042a8cb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042a8cf  8b0e                 mov ecx, dword ptr [esi]
// 0042a8d1  68a0e79200           push 0x92e7a0
// 0042a8d6  ff1578288000         call dword ptr [0x802878]
// 0042a8dc  0fb6d0               movzx edx, al
// 0042a8df  f7da                 neg edx
// 0042a8e1  1bd2                 sbb edx, edx
// 0042a8e3  23542408             and edx, dword ptr [esp + 8]
// 0042a8e7  8916                 mov dword ptr [esi], edx
// 0042a8e9  5e                   pop esi
// 0042a8ea  c3                   ret 

struct TypeInfo;

typedef bool (__thiscall *TypeCompare)(const TypeInfo*, const TypeInfo*);
extern TypeCompare compare_type;
extern const TypeInfo target_type;

union Buffer {
    const TypeInfo* type;
    const void* object;
    unsigned int words[3];
};

void __cdecl manage(const Buffer* source, Buffer* destination, int operation)
{
    if (operation == 0) {
        if (destination)
            *destination = *source;
    } else if (operation != 1) {
        destination->object =
            compare_type(destination->type, &target_type) ? source : 0;
    }
}
