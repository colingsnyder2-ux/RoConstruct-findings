// from server: 100% by colin
// roc 2008-06 005d5f40  unit: RBX::Teams  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5f40
//
// 005d5f40  51                   push ecx
// 005d5f41  53                   push ebx
// 005d5f42  55                   push ebp
// 005d5f43  56                   push esi
// 005d5f44  57                   push edi
// 005d5f45  8bf9                 mov edi, ecx
// 005d5f47  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005d5f4d  85f6                 test esi, esi
// 005d5f4f  0f8483000000         je 0x5d5fd8
// 005d5f55  8b4610               mov eax, dword ptr [esi + 0x10]
// 005d5f58  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005d5f5e  89442410             mov dword ptr [esp + 0x10], eax
// 005d5f62  39460c               cmp dword ptr [esi + 0xc], eax
// 005d5f65  7602                 jbe 0x5d5f69
// 005d5f67  ffd3                 call ebx
// 005d5f69  8b2e                 mov ebp, dword ptr [esi]
// 005d5f6b  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005d5f71  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005d5f74  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005d5f77  7602                 jbe 0x5d5f7b
// 005d5f79  ffd3                 call ebx
// 005d5f7b  8b36                 mov esi, dword ptr [esi]
// 005d5f7d  8d4900               lea ecx, [ecx]
// 005d5f80  85f6                 test esi, esi
// 005d5f82  7404                 je 0x5d5f88
// 005d5f84  3bf5                 cmp esi, ebp
// 005d5f86  7402                 je 0x5d5f8a
// 005d5f88  ffd3                 call ebx
// 005d5f8a  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005d5f8e  7448                 je 0x5d5fd8
// 005d5f90  85f6                 test esi, esi
// 005d5f92  753c                 jne 0x5d5fd0
// 005d5f94  ffd3                 call ebx
// 005d5f96  33c0                 xor eax, eax
// 005d5f98  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005d5f9b  7202                 jb 0x5d5f9f
// 005d5f9d  ffd3                 call ebx
// 005d5f9f  8b07                 mov eax, dword ptr [edi]
// 005d5fa1  6a00                 push 0
// 005d5fa3  68e0349500           push 0x9534e0
// 005d5fa8  687c909200           push 0x92907c
// 005d5fad  6a00                 push 0
// 005d5faf  50                   push eax
// 005d5fb0  e811b80c00           call 0x6a17c6
// 005d5fb5  83c414               add esp, 0x14
// 005d5fb8  85c0                 test eax, eax
// 005d5fba  751e                 jne 0x5d5fda
// 005d5fbc  85f6                 test esi, esi
// 005d5fbe  7514                 jne 0x5d5fd4
// 005d5fc0  ffd3                 call ebx
// 005d5fc2  33c0                 xor eax, eax
// 005d5fc4  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005d5fc7  7202                 jb 0x5d5fcb
// 005d5fc9  ffd3                 call ebx
// 005d5fcb  83c708               add edi, 8
// 005d5fce  ebb0                 jmp 0x5d5f80
// 005d5fd0  8b06                 mov eax, dword ptr [esi]
// 005d5fd2  ebc4                 jmp 0x5d5f98
// 005d5fd4  8b06                 mov eax, dword ptr [esi]
// 005d5fd6  ebec                 jmp 0x5d5fc4
// 005d5fd8  33c0                 xor eax, eax
// 005d5fda  5f                   pop edi
// 005d5fdb  5e                   pop esi
// 005d5fdc  5d                   pop ebp
// 005d5fdd  5b                   pop ebx
// 005d5fde  59                   pop ecx
// 005d5fdf  c3                   ret 


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
