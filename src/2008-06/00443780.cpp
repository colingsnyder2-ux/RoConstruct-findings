// from server: 100% by king_originala
// roc 2008-06 00443780  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443780
//
// 00443780  51                   push ecx
// 00443781  53                   push ebx
// 00443782  55                   push ebp
// 00443783  56                   push esi
// 00443784  57                   push edi
// 00443785  8bf9                 mov edi, ecx
// 00443787  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 0044378d  85f6                 test esi, esi
// 0044378f  0f8483000000         je 0x443818
// 00443795  8b4610               mov eax, dword ptr [esi + 0x10]
// 00443798  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0044379e  89442410             mov dword ptr [esp + 0x10], eax
// 004437a2  39460c               cmp dword ptr [esi + 0xc], eax
// 004437a5  7602                 jbe 0x4437a9
// 004437a7  ffd3                 call ebx
// 004437a9  8b2e                 mov ebp, dword ptr [esi]
// 004437ab  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 004437b1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004437b4  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 004437b7  7602                 jbe 0x4437bb
// 004437b9  ffd3                 call ebx
// 004437bb  8b36                 mov esi, dword ptr [esi]
// 004437bd  8d4900               lea ecx, [ecx]
// 004437c0  85f6                 test esi, esi
// 004437c2  7404                 je 0x4437c8
// 004437c4  3bf5                 cmp esi, ebp
// 004437c6  7402                 je 0x4437ca
// 004437c8  ffd3                 call ebx
// 004437ca  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 004437ce  7448                 je 0x443818
// 004437d0  85f6                 test esi, esi
// 004437d2  753c                 jne 0x443810
// 004437d4  ffd3                 call ebx
// 004437d6  33c0                 xor eax, eax
// 004437d8  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004437db  7202                 jb 0x4437df
// 004437dd  ffd3                 call ebx
// 004437df  8b07                 mov eax, dword ptr [edi]
// 004437e1  6a00                 push 0
// 004437e3  6880a99200           push 0x92a980
// 004437e8  687c909200           push 0x92907c
// 004437ed  6a00                 push 0
// 004437ef  50                   push eax
// 004437f0  e8d1df2500           call 0x6a17c6
// 004437f5  83c414               add esp, 0x14
// 004437f8  85c0                 test eax, eax
// 004437fa  751e                 jne 0x44381a
// 004437fc  85f6                 test esi, esi
// 004437fe  7514                 jne 0x443814
// 00443800  ffd3                 call ebx
// 00443802  33c0                 xor eax, eax
// 00443804  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00443807  7202                 jb 0x44380b
// 00443809  ffd3                 call ebx
// 0044380b  83c708               add edi, 8
// 0044380e  ebb0                 jmp 0x4437c0
// 00443810  8b06                 mov eax, dword ptr [esi]
// 00443812  ebc4                 jmp 0x4437d8
// 00443814  8b06                 mov eax, dword ptr [esi]
// 00443816  ebec                 jmp 0x443804
// 00443818  33c0                 xor eax, eax
// 0044381a  5f                   pop edi
// 0044381b  5e                   pop esi
// 0044381c  5d                   pop ebp
// 0044381d  5b                   pop ebx
// 0044381e  59                   pop ecx
// 0044381f  c3                   ret 

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
