// from server: 100% by king_originala
// roc 2008-06 005a0400  unit: RBX::Workspace  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0400
//
// 005a0400  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a0404  85c0                 test eax, eax
// 005a0406  752f                 jne 0x5a0437
// 005a0408  8b442408             mov eax, dword ptr [esp + 8]
// 005a040c  85c0                 test eax, eax
// 005a040e  744c                 je 0x5a045c
// 005a0410  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a0414  8b11                 mov edx, dword ptr [ecx]
// 005a0416  8910                 mov dword ptr [eax], edx
// 005a0418  8b5104               mov edx, dword ptr [ecx + 4]
// 005a041b  895004               mov dword ptr [eax + 4], edx
// 005a041e  8b5108               mov edx, dword ptr [ecx + 8]
// 005a0421  895008               mov dword ptr [eax + 8], edx
// 005a0424  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005a0427  89500c               mov dword ptr [eax + 0xc], edx
// 005a042a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005a042d  895010               mov dword ptr [eax + 0x10], edx
// 005a0430  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005a0433  894814               mov dword ptr [eax + 0x14], ecx
// 005a0436  c3                   ret 
// 005a0437  83f801               cmp eax, 1
// 005a043a  7420                 je 0x5a045c
// 005a043c  56                   push esi
// 005a043d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a0441  8b0e                 mov ecx, dword ptr [esi]
// 005a0443  6880ba9400           push 0x94ba80
// 005a0448  ff1578288000         call dword ptr [0x802878]
// 005a044e  0fb6d0               movzx edx, al
// 005a0451  f7da                 neg edx
// 005a0453  1bd2                 sbb edx, edx
// 005a0455  23542408             and edx, dword ptr [esp + 8]
// 005a0459  8916                 mov dword ptr [esi], edx
// 005a045b  5e                   pop esi
// 005a045c  c3                   ret 

struct Buffer {
    unsigned int words[6];
};

struct TypeInfo;
extern const TypeInfo target_type;
extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo *);

void __cdecl manage(const Buffer *source, Buffer *destination, int operation)
{
    if (operation == 0) {
        if (destination)
            *destination = *source;
    } else if (operation != 1) {
        const TypeInfo *requested =
            reinterpret_cast<const TypeInfo *>(destination->words[0]);
        destination->words[0] = type_equal(requested, &target_type)
            ? reinterpret_cast<unsigned int>(source) : 0;
    }
}
