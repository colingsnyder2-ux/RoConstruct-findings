// from server: 100% by colin
// roc 2008-06 005e04c0  unit: RBX::P8Lighting::?$GetSetImpl  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e04c0
//
// 005e04c0  51                   push ecx
// 005e04c1  53                   push ebx
// 005e04c2  55                   push ebp
// 005e04c3  56                   push esi
// 005e04c4  57                   push edi
// 005e04c5  8bf9                 mov edi, ecx
// 005e04c7  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005e04cd  85f6                 test esi, esi
// 005e04cf  0f8483000000         je 0x5e0558
// 005e04d5  8b4610               mov eax, dword ptr [esi + 0x10]
// 005e04d8  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005e04de  89442410             mov dword ptr [esp + 0x10], eax
// 005e04e2  39460c               cmp dword ptr [esi + 0xc], eax
// 005e04e5  7602                 jbe 0x5e04e9
// 005e04e7  ffd3                 call ebx
// 005e04e9  8b2e                 mov ebp, dword ptr [esi]
// 005e04eb  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005e04f1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005e04f4  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005e04f7  7602                 jbe 0x5e04fb
// 005e04f9  ffd3                 call ebx
// 005e04fb  8b36                 mov esi, dword ptr [esi]
// 005e04fd  8d4900               lea ecx, [ecx]
// 005e0500  85f6                 test esi, esi
// 005e0502  7404                 je 0x5e0508
// 005e0504  3bf5                 cmp esi, ebp
// 005e0506  7402                 je 0x5e050a
// 005e0508  ffd3                 call ebx
// 005e050a  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005e050e  7448                 je 0x5e0558
// 005e0510  85f6                 test esi, esi
// 005e0512  753c                 jne 0x5e0550
// 005e0514  ffd3                 call ebx
// 005e0516  33c0                 xor eax, eax
// 005e0518  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005e051b  7202                 jb 0x5e051f
// 005e051d  ffd3                 call ebx
// 005e051f  8b07                 mov eax, dword ptr [edi]
// 005e0521  6a00                 push 0
// 005e0523  68f4969400           push 0x9496f4
// 005e0528  687c909200           push 0x92907c
// 005e052d  6a00                 push 0
// 005e052f  50                   push eax
// 005e0530  e891120c00           call 0x6a17c6
// 005e0535  83c414               add esp, 0x14
// 005e0538  85c0                 test eax, eax
// 005e053a  751e                 jne 0x5e055a
// 005e053c  85f6                 test esi, esi
// 005e053e  7514                 jne 0x5e0554
// 005e0540  ffd3                 call ebx
// 005e0542  33c0                 xor eax, eax
// 005e0544  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005e0547  7202                 jb 0x5e054b
// 005e0549  ffd3                 call ebx
// 005e054b  83c708               add edi, 8
// 005e054e  ebb0                 jmp 0x5e0500
// 005e0550  8b06                 mov eax, dword ptr [esi]
// 005e0552  ebc4                 jmp 0x5e0518
// 005e0554  8b06                 mov eax, dword ptr [esi]
// 005e0556  ebec                 jmp 0x5e0544
// 005e0558  33c0                 xor eax, eax
// 005e055a  5f                   pop edi
// 005e055b  5e                   pop esi
// 005e055c  5d                   pop ebp
// 005e055d  5b                   pop ebx
// 005e055e  59                   pop ecx
// 005e055f  c3                   ret 

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
