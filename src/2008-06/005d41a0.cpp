// from server: 100% by king_originala
// roc 2008-06 005d41a0  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d41a0
//
// 005d41a0  51                   push ecx
// 005d41a1  53                   push ebx
// 005d41a2  55                   push ebp
// 005d41a3  56                   push esi
// 005d41a4  57                   push edi
// 005d41a5  8bf9                 mov edi, ecx
// 005d41a7  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005d41ad  85f6                 test esi, esi
// 005d41af  0f8483000000         je 0x5d4238
// 005d41b5  8b4610               mov eax, dword ptr [esi + 0x10]
// 005d41b8  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005d41be  89442410             mov dword ptr [esp + 0x10], eax
// 005d41c2  39460c               cmp dword ptr [esi + 0xc], eax
// 005d41c5  7602                 jbe 0x5d41c9
// 005d41c7  ffd3                 call ebx
// 005d41c9  8b2e                 mov ebp, dword ptr [esi]
// 005d41cb  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005d41d1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005d41d4  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005d41d7  7602                 jbe 0x5d41db
// 005d41d9  ffd3                 call ebx
// 005d41db  8b36                 mov esi, dword ptr [esi]
// 005d41dd  8d4900               lea ecx, [ecx]
// 005d41e0  85f6                 test esi, esi
// 005d41e2  7404                 je 0x5d41e8
// 005d41e4  3bf5                 cmp esi, ebp
// 005d41e6  7402                 je 0x5d41ea
// 005d41e8  ffd3                 call ebx
// 005d41ea  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005d41ee  7448                 je 0x5d4238
// 005d41f0  85f6                 test esi, esi
// 005d41f2  753c                 jne 0x5d4230
// 005d41f4  ffd3                 call ebx
// 005d41f6  33c0                 xor eax, eax
// 005d41f8  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005d41fb  7202                 jb 0x5d41ff
// 005d41fd  ffd3                 call ebx
// 005d41ff  8b07                 mov eax, dword ptr [edi]
// 005d4201  6a00                 push 0
// 005d4203  68bc0d9400           push 0x940dbc
// 005d4208  687c909200           push 0x92907c
// 005d420d  6a00                 push 0
// 005d420f  50                   push eax
// 005d4210  e8b1d50c00           call 0x6a17c6
// 005d4215  83c414               add esp, 0x14
// 005d4218  85c0                 test eax, eax
// 005d421a  751e                 jne 0x5d423a
// 005d421c  85f6                 test esi, esi
// 005d421e  7514                 jne 0x5d4234
// 005d4220  ffd3                 call ebx
// 005d4222  33c0                 xor eax, eax
// 005d4224  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005d4227  7202                 jb 0x5d422b
// 005d4229  ffd3                 call ebx
// 005d422b  83c708               add edi, 8
// 005d422e  ebb0                 jmp 0x5d41e0
// 005d4230  8b06                 mov eax, dword ptr [esi]
// 005d4232  ebc4                 jmp 0x5d41f8
// 005d4234  8b06                 mov eax, dword ptr [esi]
// 005d4236  ebec                 jmp 0x5d4224
// 005d4238  33c0                 xor eax, eax
// 005d423a  5f                   pop edi
// 005d423b  5e                   pop esi
// 005d423c  5d                   pop ebp
// 005d423d  5b                   pop ebx
// 005d423e  59                   pop ecx
// 005d423f  c3                   ret 

extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instance_type_descriptor;
extern char decal_type_descriptor;

struct Entry {
    void* object;
    void* reference;
};

struct Container;

struct Proxy {
    Container* owner;
};

struct Container {
    Proxy* proxy;
    unsigned long reserved[2];
    Entry* first;
    Entry* last;
};

struct S {
    char reserved[0x108];
    Container* children;

    void* findDecal();
};

void* S::findDecal() {
    Container* container = children;
    if (container) {
        Entry* finish = container->last;
        void (__cdecl *error)() = invalid_parameter_noinfo;
        if (container->first > finish)
            error();
        Proxy* finishProxy = container->proxy;

        container = children;
        Entry* current = container->first;
        if (current > container->last)
            error();
        Proxy* currentProxy = container->proxy;

        for (;;) {
            if (!currentProxy || currentProxy != finishProxy)
                error();
            if (current == finish)
                break;

            if (!currentProxy)
                error();
            Container* owner = currentProxy ? currentProxy->owner : 0;
            if (current >= owner->last)
                error();

            void* result = __RTDynamicCast(
                current->object, 0, &instance_type_descriptor,
                &decal_type_descriptor, 0);
            if (result)
                return result;

            if (!currentProxy)
                error();
            owner = currentProxy ? currentProxy->owner : 0;
            if (current >= owner->last)
                error();
            ++current;
        }
    }
    return 0;
}
