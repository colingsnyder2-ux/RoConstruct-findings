// from server: 100% by king_originala
// roc 2008-06 004ca360  unit: RBX::Network::RoundRobinPhysicsSender  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ca360
//
// 004ca360  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ca364  85c0                 test eax, eax
// 004ca366  7523                 jne 0x4ca38b
// 004ca368  8b442408             mov eax, dword ptr [esp + 8]
// 004ca36c  85c0                 test eax, eax
// 004ca36e  7440                 je 0x4ca3b0
// 004ca370  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ca374  8b11                 mov edx, dword ptr [ecx]
// 004ca376  8910                 mov dword ptr [eax], edx
// 004ca378  8b5104               mov edx, dword ptr [ecx + 4]
// 004ca37b  895004               mov dword ptr [eax + 4], edx
// 004ca37e  8b5108               mov edx, dword ptr [ecx + 8]
// 004ca381  895008               mov dword ptr [eax + 8], edx
// 004ca384  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004ca387  89480c               mov dword ptr [eax + 0xc], ecx
// 004ca38a  c3                   ret 
// 004ca38b  83f801               cmp eax, 1
// 004ca38e  7420                 je 0x4ca3b0
// 004ca390  56                   push esi
// 004ca391  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ca395  8b0e                 mov ecx, dword ptr [esi]
// 004ca397  6810cd9300           push 0x93cd10
// 004ca39c  ff1578288000         call dword ptr [0x802878]
// 004ca3a2  0fb6d0               movzx edx, al
// 004ca3a5  f7da                 neg edx
// 004ca3a7  1bd2                 sbb edx, edx
// 004ca3a9  23542408             and edx, dword ptr [esp + 8]
// 004ca3ad  8916                 mov dword ptr [esi], edx
// 004ca3af  5e                   pop esi
// 004ca3b0  c3                   ret 

struct TypeInfo;
extern const TypeInfo targetType;
extern bool (__thiscall *equalType)(const TypeInfo*, const TypeInfo&);

struct Data {
    void* first;
    unsigned int second;
    unsigned int third;
    unsigned int fourth;
};

void __cdecl manage(Data* source, Data* destination, int operation)
{
    if (operation == 0) {
        if (destination)
            *destination = *source;
    } else if (operation != 1) {
        destination->first =
            equalType(static_cast<const TypeInfo*>(destination->first), targetType)
            ? source : 0;
    }
}
