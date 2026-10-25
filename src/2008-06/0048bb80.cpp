// from server: 100% by king_originala
// roc 2008-06 0048bb80  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048bb80
//
// 0048bb80  51                   push ecx
// 0048bb81  53                   push ebx
// 0048bb82  55                   push ebp
// 0048bb83  56                   push esi
// 0048bb84  57                   push edi
// 0048bb85  8bf9                 mov edi, ecx
// 0048bb87  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 0048bb8d  85f6                 test esi, esi
// 0048bb8f  0f8483000000         je 0x48bc18
// 0048bb95  8b4610               mov eax, dword ptr [esi + 0x10]
// 0048bb98  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0048bb9e  89442410             mov dword ptr [esp + 0x10], eax
// 0048bba2  39460c               cmp dword ptr [esi + 0xc], eax
// 0048bba5  7602                 jbe 0x48bba9
// 0048bba7  ffd3                 call ebx
// 0048bba9  8b2e                 mov ebp, dword ptr [esi]
// 0048bbab  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 0048bbb1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0048bbb4  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0048bbb7  7602                 jbe 0x48bbbb
// 0048bbb9  ffd3                 call ebx
// 0048bbbb  8b36                 mov esi, dword ptr [esi]
// 0048bbbd  8d4900               lea ecx, [ecx]
// 0048bbc0  85f6                 test esi, esi
// 0048bbc2  7404                 je 0x48bbc8
// 0048bbc4  3bf5                 cmp esi, ebp
// 0048bbc6  7402                 je 0x48bbca
// 0048bbc8  ffd3                 call ebx
// 0048bbca  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0048bbce  7448                 je 0x48bc18
// 0048bbd0  85f6                 test esi, esi
// 0048bbd2  753c                 jne 0x48bc10
// 0048bbd4  ffd3                 call ebx
// 0048bbd6  33c0                 xor eax, eax
// 0048bbd8  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0048bbdb  7202                 jb 0x48bbdf
// 0048bbdd  ffd3                 call ebx
// 0048bbdf  8b07                 mov eax, dword ptr [edi]
// 0048bbe1  6a00                 push 0
// 0048bbe3  68ec539300           push 0x9353ec
// 0048bbe8  687c909200           push 0x92907c
// 0048bbed  6a00                 push 0
// 0048bbef  50                   push eax
// 0048bbf0  e8d15b2100           call 0x6a17c6
// 0048bbf5  83c414               add esp, 0x14
// 0048bbf8  85c0                 test eax, eax
// 0048bbfa  751e                 jne 0x48bc1a
// 0048bbfc  85f6                 test esi, esi
// 0048bbfe  7514                 jne 0x48bc14
// 0048bc00  ffd3                 call ebx
// 0048bc02  33c0                 xor eax, eax
// 0048bc04  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0048bc07  7202                 jb 0x48bc0b
// 0048bc09  ffd3                 call ebx
// 0048bc0b  83c708               add edi, 8
// 0048bc0e  ebb0                 jmp 0x48bbc0
// 0048bc10  8b06                 mov eax, dword ptr [esi]
// 0048bc12  ebc4                 jmp 0x48bbd8
// 0048bc14  8b06                 mov eax, dword ptr [esi]
// 0048bc16  ebec                 jmp 0x48bc04
// 0048bc18  33c0                 xor eax, eax
// 0048bc1a  5f                   pop edi
// 0048bc1b  5e                   pop esi
// 0048bc1c  5d                   pop ebp
// 0048bc1d  5b                   pop ebx
// 0048bc1e  59                   pop ecx
// 0048bc1f  c3                   ret 

extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl runtime_cast(void*, int, const void*, const void*, int);
extern char instance_type;
extern char backpack_type;

struct Container;

struct Proxy {
    Container* owner;
};

struct Entry {
    void* object;
    void* reference;
};

struct Container {
    Proxy* proxy;
    unsigned char padding[8];
    Entry* first;
    Entry* last;
};

struct S {
    unsigned char padding[0x108];
    Container* container;
    void* findBackpack();
};

void* S::findBackpack()
{
    Container* c = container;
    if (c) {
        Entry* end = c->last;
        void (__cdecl *invalid)() = invalid_parameter_noinfo;
        if (c->first > end)
            invalid();

        Proxy* endProxy = c->proxy;
        c = container;
        Entry* current = c->first;
        if (current > c->last)
            invalid();

        Proxy* proxy = c->proxy;
        for (;;) {
            if (!proxy || proxy != endProxy)
                invalid();

            if (current == end)
                break;

            if (!proxy)
                invalid();
            Container* owner = proxy ? proxy->owner : 0;
            if (current >= owner->last)
                invalid();

            void* result = runtime_cast(current->object, 0,
                                        &instance_type, &backpack_type, 0);
            if (result)
                return result;

            if (!proxy)
                invalid();
            owner = proxy ? proxy->owner : 0;
            if (current >= owner->last)
                invalid();
            ++current;
        }
    }
    return 0;
}
