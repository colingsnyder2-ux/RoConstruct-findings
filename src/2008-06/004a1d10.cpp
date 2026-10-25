// from server: 100% by king_originala
// roc 2008-06 004a1d10  unit: RBX::Network::P8Players::?$GetImpl  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1d10
//
// 004a1d10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a1d14  85c0                 test eax, eax
// 004a1d16  7523                 jne 0x4a1d3b
// 004a1d18  8b442408             mov eax, dword ptr [esp + 8]
// 004a1d1c  85c0                 test eax, eax
// 004a1d1e  7440                 je 0x4a1d60
// 004a1d20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a1d24  8b11                 mov edx, dword ptr [ecx]
// 004a1d26  8910                 mov dword ptr [eax], edx
// 004a1d28  8b5104               mov edx, dword ptr [ecx + 4]
// 004a1d2b  895004               mov dword ptr [eax + 4], edx
// 004a1d2e  8b5108               mov edx, dword ptr [ecx + 8]
// 004a1d31  895008               mov dword ptr [eax + 8], edx
// 004a1d34  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004a1d37  89480c               mov dword ptr [eax + 0xc], ecx
// 004a1d3a  c3                   ret 
// 004a1d3b  83f801               cmp eax, 1
// 004a1d3e  7420                 je 0x4a1d60
// 004a1d40  56                   push esi
// 004a1d41  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a1d45  8b0e                 mov ecx, dword ptr [esi]
// 004a1d47  6820989300           push 0x939820
// 004a1d4c  ff1578288000         call dword ptr [0x802878]
// 004a1d52  0fb6d0               movzx edx, al
// 004a1d55  f7da                 neg edx
// 004a1d57  1bd2                 sbb edx, edx
// 004a1d59  23542408             and edx, dword ptr [esp + 8]
// 004a1d5d  8916                 mov dword ptr [esi], edx
// 004a1d5f  5e                   pop esi
// 004a1d60  c3                   ret 

struct TypeInfo {};

extern TypeInfo target_type;
extern "C" bool (__thiscall *type_equal)(
    const TypeInfo *, const TypeInfo *);

union Buffer {
    unsigned int words[4];
    const TypeInfo *type;
    const Buffer *object;
};

void __cdecl f(const Buffer *source, Buffer *destination, int operation)
{
    if (operation == 0) {
        if (destination)
            *destination = *source;
    } else if (operation != 1) {
        destination->object =
            type_equal(destination->type, &target_type) ? source : 0;
    }
}
