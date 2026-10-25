// from server: 100% by king_originala
// roc 2008-06 005a16b0  unit: RBX::PartTool  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a16b0
//
// 005a16b0  51                   push ecx
// 005a16b1  53                   push ebx
// 005a16b2  55                   push ebp
// 005a16b3  56                   push esi
// 005a16b4  57                   push edi
// 005a16b5  8bf9                 mov edi, ecx
// 005a16b7  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005a16bd  85f6                 test esi, esi
// 005a16bf  0f8483000000         je 0x5a1748
// 005a16c5  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a16c8  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005a16ce  89442410             mov dword ptr [esp + 0x10], eax
// 005a16d2  39460c               cmp dword ptr [esi + 0xc], eax
// 005a16d5  7602                 jbe 0x5a16d9
// 005a16d7  ffd3                 call ebx
// 005a16d9  8b2e                 mov ebp, dword ptr [esi]
// 005a16db  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005a16e1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005a16e4  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005a16e7  7602                 jbe 0x5a16eb
// 005a16e9  ffd3                 call ebx
// 005a16eb  8b36                 mov esi, dword ptr [esi]
// 005a16ed  8d4900               lea ecx, [ecx]
// 005a16f0  85f6                 test esi, esi
// 005a16f2  7404                 je 0x5a16f8
// 005a16f4  3bf5                 cmp esi, ebp
// 005a16f6  7402                 je 0x5a16fa
// 005a16f8  ffd3                 call ebx
// 005a16fa  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005a16fe  7448                 je 0x5a1748
// 005a1700  85f6                 test esi, esi
// 005a1702  753c                 jne 0x5a1740
// 005a1704  ffd3                 call ebx
// 005a1706  33c0                 xor eax, eax
// 005a1708  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005a170b  7202                 jb 0x5a170f
// 005a170d  ffd3                 call ebx
// 005a170f  8b07                 mov eax, dword ptr [edi]
// 005a1711  6a00                 push 0
// 005a1713  6850dd9200           push 0x92dd50
// 005a1718  687c909200           push 0x92907c
// 005a171d  6a00                 push 0
// 005a171f  50                   push eax
// 005a1720  e8a1001000           call 0x6a17c6
// 005a1725  83c414               add esp, 0x14
// 005a1728  85c0                 test eax, eax
// 005a172a  751e                 jne 0x5a174a
// 005a172c  85f6                 test esi, esi
// 005a172e  7514                 jne 0x5a1744
// 005a1730  ffd3                 call ebx
// 005a1732  33c0                 xor eax, eax
// 005a1734  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005a1737  7202                 jb 0x5a173b
// 005a1739  ffd3                 call ebx
// 005a173b  83c708               add edi, 8
// 005a173e  ebb0                 jmp 0x5a16f0
// 005a1740  8b06                 mov eax, dword ptr [esi]
// 005a1742  ebc4                 jmp 0x5a1708
// 005a1744  8b06                 mov eax, dword ptr [esi]
// 005a1746  ebec                 jmp 0x5a1734
// 005a1748  33c0                 xor eax, eax
// 005a174a  5f                   pop edi
// 005a174b  5e                   pop esi
// 005a174c  5d                   pop ebp
// 005a174d  5b                   pop ebx
// 005a174e  59                   pop ecx
// 005a174f  c3                   ret 

extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instance_type;
extern char part_instance_type;

struct Container;

struct Proxy {
    Container* container;
};

struct Entry {
    void* object;
    void* control;
};

struct Container {
    Proxy* proxy;
    unsigned reserved[2];
    Entry* begin;
    Entry* end;
};

struct PartTool {
    char reserved[0x108];
    Container* entries;
    void* findPart();
};

void* PartTool::findPart()
{
    Container* list = entries;
    if (list) {
        Entry* last = list->end;
        void (__cdecl *invalid)() = invalid_parameter_noinfo;

        if (list->begin > last)
            invalid();

        Proxy* lastOwner = list->proxy;
        list = entries;
        Entry* current = list->begin;

        if (current > list->end)
            invalid();

        Proxy* owner = list->proxy;

        for (;;) {
            if (!owner || owner != lastOwner)
                invalid();

            if (current == last)
                break;

            if (!owner)
                invalid();

            Container* container = owner ? owner->container : 0;
            if (current >= container->end)
                invalid();

            void* result = __RTDynamicCast(current->object, 0,
                                          &instance_type, &part_instance_type, 0);
            if (result)
                return result;

            if (!owner)
                invalid();

            container = owner ? owner->container : 0;
            if (current >= container->end)
                invalid();

            ++current;
        }
    }
    return 0;
}
