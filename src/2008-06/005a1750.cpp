// from server: 100% by king_originala
// roc 2008-06 005a1750  unit: RBX::PartTool  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1750
//
// 005a1750  51                   push ecx
// 005a1751  53                   push ebx
// 005a1752  55                   push ebp
// 005a1753  56                   push esi
// 005a1754  57                   push edi
// 005a1755  8bf9                 mov edi, ecx
// 005a1757  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005a175d  85f6                 test esi, esi
// 005a175f  0f8483000000         je 0x5a17e8
// 005a1765  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a1768  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005a176e  89442410             mov dword ptr [esp + 0x10], eax
// 005a1772  39460c               cmp dword ptr [esi + 0xc], eax
// 005a1775  7602                 jbe 0x5a1779
// 005a1777  ffd3                 call ebx
// 005a1779  8b2e                 mov ebp, dword ptr [esi]
// 005a177b  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005a1781  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005a1784  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005a1787  7602                 jbe 0x5a178b
// 005a1789  ffd3                 call ebx
// 005a178b  8b36                 mov esi, dword ptr [esi]
// 005a178d  8d4900               lea ecx, [ecx]
// 005a1790  85f6                 test esi, esi
// 005a1792  7404                 je 0x5a1798
// 005a1794  3bf5                 cmp esi, ebp
// 005a1796  7402                 je 0x5a179a
// 005a1798  ffd3                 call ebx
// 005a179a  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005a179e  7448                 je 0x5a17e8
// 005a17a0  85f6                 test esi, esi
// 005a17a2  753c                 jne 0x5a17e0
// 005a17a4  ffd3                 call ebx
// 005a17a6  33c0                 xor eax, eax
// 005a17a8  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005a17ab  7202                 jb 0x5a17af
// 005a17ad  ffd3                 call ebx
// 005a17af  8b07                 mov eax, dword ptr [edi]
// 005a17b1  6a00                 push 0
// 005a17b3  68402a9300           push 0x932a40
// 005a17b8  687c909200           push 0x92907c
// 005a17bd  6a00                 push 0
// 005a17bf  50                   push eax
// 005a17c0  e801001000           call 0x6a17c6
// 005a17c5  83c414               add esp, 0x14
// 005a17c8  85c0                 test eax, eax
// 005a17ca  751e                 jne 0x5a17ea
// 005a17cc  85f6                 test esi, esi
// 005a17ce  7514                 jne 0x5a17e4
// 005a17d0  ffd3                 call ebx
// 005a17d2  33c0                 xor eax, eax
// 005a17d4  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005a17d7  7202                 jb 0x5a17db
// 005a17d9  ffd3                 call ebx
// 005a17db  83c708               add edi, 8
// 005a17de  ebb0                 jmp 0x5a1790
// 005a17e0  8b06                 mov eax, dword ptr [esi]
// 005a17e2  ebc4                 jmp 0x5a17a8
// 005a17e4  8b06                 mov eax, dword ptr [esi]
// 005a17e6  ebec                 jmp 0x5a17d4
// 005a17e8  33c0                 xor eax, eax
// 005a17ea  5f                   pop edi
// 005a17eb  5e                   pop esi
// 005a17ec  5d                   pop ebp
// 005a17ed  5b                   pop ebx
// 005a17ee  59                   pop ecx
// 005a17ef  c3                   ret 

extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl runtime_cast(void*, long, const void*, const void*, int);

struct Container;

struct Proxy {
    Container* owner;
};

struct Entry {
    void* object;
    void* control;
};

struct Container {
    Proxy* proxy;
    unsigned int reserved[2];
    Entry* begin;
    Entry* end;
};

struct PartTool {
    unsigned char reserved[0x108];
    Container* entries;
    void* findModel();
};

void* PartTool::findModel()
{
    if (entries) {
        Container* container = entries;
        Entry* last = container->end;
        void (__cdecl *invalid)() = invalid_parameter_noinfo;

        if (container->begin > last)
            invalid();

        Proxy* lastProxy = container->proxy;
        container = entries;
        Entry* current = container->begin;

        if (current > container->end)
            invalid();

        Proxy* proxy = container->proxy;

        for (;;) {
            if (!proxy || proxy != lastProxy)
                invalid();

            if (current == last)
                break;

            if (!proxy)
                invalid();

            Container* owner = proxy ? proxy->owner : 0;
            if (current >= owner->end)
                invalid();

            void* result = runtime_cast(
                current->object, 0,
                (const void*)0x92907c,
                (const void*)0x932a40, 0);

            if (result)
                return result;

            if (!proxy)
                invalid();

            owner = proxy ? proxy->owner : 0;
            if (current >= owner->end)
                invalid();

            ++current;
        }
    }

    return 0;
}
