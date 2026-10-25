// from server: 100% by colin
// roc 2008-06 006294a0  unit: RBX::VClickDetector::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006294a0
//
// 006294a0  51                   push ecx
// 006294a1  53                   push ebx
// 006294a2  55                   push ebp
// 006294a3  56                   push esi
// 006294a4  57                   push edi
// 006294a5  8bf9                 mov edi, ecx
// 006294a7  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 006294ad  85f6                 test esi, esi
// 006294af  0f8483000000         je 0x629538
// 006294b5  8b4610               mov eax, dword ptr [esi + 0x10]
// 006294b8  8b1d90288000         mov ebx, dword ptr [0x802890]
// 006294be  89442410             mov dword ptr [esp + 0x10], eax
// 006294c2  39460c               cmp dword ptr [esi + 0xc], eax
// 006294c5  7602                 jbe 0x6294c9
// 006294c7  ffd3                 call ebx
// 006294c9  8b2e                 mov ebp, dword ptr [esi]
// 006294cb  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 006294d1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 006294d4  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 006294d7  7602                 jbe 0x6294db
// 006294d9  ffd3                 call ebx
// 006294db  8b36                 mov esi, dword ptr [esi]
// 006294dd  8d4900               lea ecx, [ecx]
// 006294e0  85f6                 test esi, esi
// 006294e2  7404                 je 0x6294e8
// 006294e4  3bf5                 cmp esi, ebp
// 006294e6  7402                 je 0x6294ea
// 006294e8  ffd3                 call ebx
// 006294ea  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 006294ee  7448                 je 0x629538
// 006294f0  85f6                 test esi, esi
// 006294f2  753c                 jne 0x629530
// 006294f4  ffd3                 call ebx
// 006294f6  33c0                 xor eax, eax
// 006294f8  3b7810               cmp edi, dword ptr [eax + 0x10]
// 006294fb  7202                 jb 0x6294ff
// 006294fd  ffd3                 call ebx
// 006294ff  8b07                 mov eax, dword ptr [edi]
// 00629501  6a00                 push 0
// 00629503  680cb59500           push 0x95b50c
// 00629508  687c909200           push 0x92907c
// 0062950d  6a00                 push 0
// 0062950f  50                   push eax
// 00629510  e8b1820700           call 0x6a17c6
// 00629515  83c414               add esp, 0x14
// 00629518  85c0                 test eax, eax
// 0062951a  751e                 jne 0x62953a
// 0062951c  85f6                 test esi, esi
// 0062951e  7514                 jne 0x629534
// 00629520  ffd3                 call ebx
// 00629522  33c0                 xor eax, eax
// 00629524  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00629527  7202                 jb 0x62952b
// 00629529  ffd3                 call ebx
// 0062952b  83c708               add edi, 8
// 0062952e  ebb0                 jmp 0x6294e0
// 00629530  8b06                 mov eax, dword ptr [esi]
// 00629532  ebc4                 jmp 0x6294f8
// 00629534  8b06                 mov eax, dword ptr [esi]
// 00629536  ebec                 jmp 0x629524
// 00629538  33c0                 xor eax, eax
// 0062953a  5f                   pop edi
// 0062953b  5e                   pop esi
// 0062953c  5d                   pop ebp
// 0062953d  5b                   pop ebx
// 0062953e  59                   pop ecx
// 0062953f  c3                   ret 


extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instance_type;
extern char properties_type;

struct Entry {
    void* object;
    void* other;
};

struct Storage;

struct Owner {
    Storage* storage;
};

struct Storage {
    Owner* owner;
    unsigned char padding[8];
    Entry* begin;
    Entry* end;
};

struct S {
    unsigned char padding[0x108];
    Storage* storage;
    void* f();
};

void* S::f()
{
    Storage* s = storage;
    if (s) {
        Entry* last = s->end;
        void (__cdecl *invalid)() = invalid_parameter_noinfo;
        if (s->begin > last)
            invalid();

        Owner* lastOwner = s->owner;
        s = storage;
        Entry* current = s->begin;
        if (current > s->end)
            invalid();

        Owner* owner = s->owner;
        for (;;) {
            if (!owner || owner != lastOwner)
                invalid();

            if (current == last)
                break;

            if (!owner)
                invalid();
            Storage* container = owner ? owner->storage : 0;

            if (current >= container->end)
                invalid();

            void* result = __RTDynamicCast(
                current->object, 0, &instance_type, &properties_type, 0);
            if (result)
                return result;

            if (!owner)
                invalid();
            container = owner ? owner->storage : 0;

            if (current >= container->end)
                invalid();

            ++current;
        }
    }
    return 0;
}
