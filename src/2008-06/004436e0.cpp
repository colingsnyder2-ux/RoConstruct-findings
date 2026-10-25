// from server: 100% by king_originala
// roc 2008-06 004436e0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004436e0
//
// 004436e0  51                   push ecx
// 004436e1  53                   push ebx
// 004436e2  55                   push ebp
// 004436e3  56                   push esi
// 004436e4  57                   push edi
// 004436e5  8bf9                 mov edi, ecx
// 004436e7  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 004436ed  85f6                 test esi, esi
// 004436ef  0f8483000000         je 0x443778
// 004436f5  8b4610               mov eax, dword ptr [esi + 0x10]
// 004436f8  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004436fe  89442410             mov dword ptr [esp + 0x10], eax
// 00443702  39460c               cmp dword ptr [esi + 0xc], eax
// 00443705  7602                 jbe 0x443709
// 00443707  ffd3                 call ebx
// 00443709  8b2e                 mov ebp, dword ptr [esi]
// 0044370b  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 00443711  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00443714  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00443717  7602                 jbe 0x44371b
// 00443719  ffd3                 call ebx
// 0044371b  8b36                 mov esi, dword ptr [esi]
// 0044371d  8d4900               lea ecx, [ecx]
// 00443720  85f6                 test esi, esi
// 00443722  7404                 je 0x443728
// 00443724  3bf5                 cmp esi, ebp
// 00443726  7402                 je 0x44372a
// 00443728  ffd3                 call ebx
// 0044372a  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0044372e  7448                 je 0x443778
// 00443730  85f6                 test esi, esi
// 00443732  753c                 jne 0x443770
// 00443734  ffd3                 call ebx
// 00443736  33c0                 xor eax, eax
// 00443738  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0044373b  7202                 jb 0x44373f
// 0044373d  ffd3                 call ebx
// 0044373f  8b07                 mov eax, dword ptr [edi]
// 00443741  6a00                 push 0
// 00443743  6850a99200           push 0x92a950
// 00443748  687c909200           push 0x92907c
// 0044374d  6a00                 push 0
// 0044374f  50                   push eax
// 00443750  e871e02500           call 0x6a17c6
// 00443755  83c414               add esp, 0x14
// 00443758  85c0                 test eax, eax
// 0044375a  751e                 jne 0x44377a
// 0044375c  85f6                 test esi, esi
// 0044375e  7514                 jne 0x443774
// 00443760  ffd3                 call ebx
// 00443762  33c0                 xor eax, eax
// 00443764  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00443767  7202                 jb 0x44376b
// 00443769  ffd3                 call ebx
// 0044376b  83c708               add edi, 8
// 0044376e  ebb0                 jmp 0x443720
// 00443770  8b06                 mov eax, dword ptr [esi]
// 00443772  ebc4                 jmp 0x443738
// 00443774  8b06                 mov eax, dword ptr [esi]
// 00443776  ebec                 jmp 0x443764
// 00443778  33c0                 xor eax, eax
// 0044377a  5f                   pop edi
// 0044377b  5e                   pop esi
// 0044377c  5d                   pop ebp
// 0044377d  5b                   pop ebx
// 0044377e  59                   pop ecx
// 0044377f  c3                   ret 

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
