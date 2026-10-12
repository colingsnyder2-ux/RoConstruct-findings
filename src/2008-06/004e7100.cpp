// from server: 100% by king_originala
// roc 2008-06 004e7100  unit: RBX::RenderBase::VAggregateChunk::?$WeakReferenceCountedPointer  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7100
//
// 004e7100  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e7104  83f803               cmp eax, 3
// 004e7107  7441                 je 0x4e714a
// 004e7109  85c0                 test eax, eax
// 004e710b  7517                 jne 0x4e7124
// 004e710d  8b442408             mov eax, dword ptr [esp + 8]
// 004e7111  85c0                 test eax, eax
// 004e7113  743f                 je 0x4e7154
// 004e7115  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e7119  8b11                 mov edx, dword ptr [ecx]
// 004e711b  8910                 mov dword ptr [eax], edx
// 004e711d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e7120  894804               mov dword ptr [eax + 4], ecx
// 004e7123  c3                   ret 
// 004e7124  83f801               cmp eax, 1
// 004e7127  742b                 je 0x4e7154
// 004e7129  56                   push esi
// 004e712a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e712e  8b0e                 mov ecx, dword ptr [esi]
// 004e7130  6800179400           push 0x941700
// 004e7135  ff1578288000         call dword ptr [0x802878]
// 004e713b  0fb6d0               movzx edx, al
// 004e713e  f7da                 neg edx
// 004e7140  1bd2                 sbb edx, edx
// 004e7142  23542408             and edx, dword ptr [esp + 8]
// 004e7146  8916                 mov dword ptr [esi], edx
// 004e7148  5e                   pop esi
// 004e7149  c3                   ret 
// 004e714a  8b442408             mov eax, dword ptr [esp + 8]
// 004e714e  c70000179400         mov dword ptr [eax], 0x941700
// 004e7154  c3                   ret 

struct TypeInfo {
    void *vtable;
};

extern const TypeInfo target_type;
extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo *);

struct Buffer {
    const void *first;
    const void *second;
};

void __cdecl manage(const Buffer &source, Buffer &destination, int operation)
{
    if (operation != 3) {
        if (operation == 0) {
            if (&destination)
                destination = source;
        } else if (operation != 1) {
            destination.first =
                type_equal(static_cast<const TypeInfo *>(destination.first),
                           &target_type)
                ? &source : 0;
        }
    } else {
        destination.first = &target_type;
    }
}
