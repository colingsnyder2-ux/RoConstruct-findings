// from server: 100% by king_originala
// roc 2008-06 005cfc30  unit: RBX::LegacyHopperService  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cfc30
//
// 005cfc30  51                   push ecx
// 005cfc31  53                   push ebx
// 005cfc32  55                   push ebp
// 005cfc33  56                   push esi
// 005cfc34  57                   push edi
// 005cfc35  8bf9                 mov edi, ecx
// 005cfc37  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005cfc3d  85f6                 test esi, esi
// 005cfc3f  0f8483000000         je 0x5cfcc8
// 005cfc45  8b4610               mov eax, dword ptr [esi + 0x10]
// 005cfc48  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005cfc4e  89442410             mov dword ptr [esp + 0x10], eax
// 005cfc52  39460c               cmp dword ptr [esi + 0xc], eax
// 005cfc55  7602                 jbe 0x5cfc59
// 005cfc57  ffd3                 call ebx
// 005cfc59  8b2e                 mov ebp, dword ptr [esi]
// 005cfc5b  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005cfc61  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005cfc64  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005cfc67  7602                 jbe 0x5cfc6b
// 005cfc69  ffd3                 call ebx
// 005cfc6b  8b36                 mov esi, dword ptr [esi]
// 005cfc6d  8d4900               lea ecx, [ecx]
// 005cfc70  85f6                 test esi, esi
// 005cfc72  7404                 je 0x5cfc78
// 005cfc74  3bf5                 cmp esi, ebp
// 005cfc76  7402                 je 0x5cfc7a
// 005cfc78  ffd3                 call ebx
// 005cfc7a  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005cfc7e  7448                 je 0x5cfcc8
// 005cfc80  85f6                 test esi, esi
// 005cfc82  753c                 jne 0x5cfcc0
// 005cfc84  ffd3                 call ebx
// 005cfc86  33c0                 xor eax, eax
// 005cfc88  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005cfc8b  7202                 jb 0x5cfc8f
// 005cfc8d  ffd3                 call ebx
// 005cfc8f  8b07                 mov eax, dword ptr [edi]
// 005cfc91  6a00                 push 0
// 005cfc93  6850199500           push 0x951950
// 005cfc98  687c909200           push 0x92907c
// 005cfc9d  6a00                 push 0
// 005cfc9f  50                   push eax
// 005cfca0  e8211b0d00           call 0x6a17c6
// 005cfca5  83c414               add esp, 0x14
// 005cfca8  85c0                 test eax, eax
// 005cfcaa  751e                 jne 0x5cfcca
// 005cfcac  85f6                 test esi, esi
// 005cfcae  7514                 jne 0x5cfcc4
// 005cfcb0  ffd3                 call ebx
// 005cfcb2  33c0                 xor eax, eax
// 005cfcb4  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005cfcb7  7202                 jb 0x5cfcbb
// 005cfcb9  ffd3                 call ebx
// 005cfcbb  83c708               add edi, 8
// 005cfcbe  ebb0                 jmp 0x5cfc70
// 005cfcc0  8b06                 mov eax, dword ptr [esi]
// 005cfcc2  ebc4                 jmp 0x5cfc88
// 005cfcc4  8b06                 mov eax, dword ptr [esi]
// 005cfcc6  ebec                 jmp 0x5cfcb4
// 005cfcc8  33c0                 xor eax, eax
// 005cfcca  5f                   pop edi
// 005cfccb  5e                   pop esi
// 005cfccc  5d                   pop ebp
// 005cfccd  5b                   pop ebx
// 005cfcce  59                   pop ecx
// 005cfccf  c3                   ret 

extern "C" void (__cdecl *invalid_parameter)();
extern "C" void* __cdecl runtime_cast(void*, long, const void*, const void*, int);

struct Container;

struct Proxy {
    Container* container;
};

struct Container {
    Proxy* proxy;
    unsigned char padding[8];
    unsigned char* first;
    unsigned char* last;
};

struct Service {
    unsigned char padding[0x108];
    Container* items;

    void* find();
};

void* Service::find()
{
    Container* c = items;
    if (c) {
        unsigned char* finish = c->last;
        void (__cdecl *report)() = invalid_parameter;

        if (c->first > finish)
            report();
        Proxy* finishOwner = c->proxy;

        c = items;
        unsigned char* current = c->first;
        if (current > c->last)
            report();
        Proxy* owner = c->proxy;

        for (;;) {
            if (!owner || owner != finishOwner)
                report();

            if (current == finish)
                break;

            if (!owner)
                report();
            Container* range = owner ? owner->container : 0;
            if (current >= range->last)
                report();

            void* result = runtime_cast(
                *reinterpret_cast<void**>(current), 0,
                reinterpret_cast<const void*>(0x92907c),
                reinterpret_cast<const void*>(0x951950), 0);
            if (result)
                return result;

            if (!owner)
                report();
            range = owner ? owner->container : 0;
            if (current >= range->last)
                report();

            current += 8;
        }
    }
    return 0;
}
