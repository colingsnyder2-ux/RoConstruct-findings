// from server: 100% by colin
// roc 2008-06 005b1520  unit: RBX::Accoutrement  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1520
//
// 005b1520  51                   push ecx
// 005b1521  53                   push ebx
// 005b1522  55                   push ebp
// 005b1523  56                   push esi
// 005b1524  57                   push edi
// 005b1525  8bf9                 mov edi, ecx
// 005b1527  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005b152d  85f6                 test esi, esi
// 005b152f  0f8483000000         je 0x5b15b8
// 005b1535  8b4610               mov eax, dword ptr [esi + 0x10]
// 005b1538  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005b153e  89442410             mov dword ptr [esp + 0x10], eax
// 005b1542  39460c               cmp dword ptr [esi + 0xc], eax
// 005b1545  7602                 jbe 0x5b1549
// 005b1547  ffd3                 call ebx
// 005b1549  8b2e                 mov ebp, dword ptr [esi]
// 005b154b  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 005b1551  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005b1554  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005b1557  7602                 jbe 0x5b155b
// 005b1559  ffd3                 call ebx
// 005b155b  8b36                 mov esi, dword ptr [esi]
// 005b155d  8d4900               lea ecx, [ecx]
// 005b1560  85f6                 test esi, esi
// 005b1562  7404                 je 0x5b1568
// 005b1564  3bf5                 cmp esi, ebp
// 005b1566  7402                 je 0x5b156a
// 005b1568  ffd3                 call ebx
// 005b156a  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005b156e  7448                 je 0x5b15b8
// 005b1570  85f6                 test esi, esi
// 005b1572  753c                 jne 0x5b15b0
// 005b1574  ffd3                 call ebx
// 005b1576  33c0                 xor eax, eax
// 005b1578  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005b157b  7202                 jb 0x5b157f
// 005b157d  ffd3                 call ebx
// 005b157f  8b07                 mov eax, dword ptr [edi]
// 005b1581  6a00                 push 0
// 005b1583  68484f9300           push 0x934f48
// 005b1588  687c909200           push 0x92907c
// 005b158d  6a00                 push 0
// 005b158f  50                   push eax
// 005b1590  e831020f00           call 0x6a17c6
// 005b1595  83c414               add esp, 0x14
// 005b1598  85c0                 test eax, eax
// 005b159a  751e                 jne 0x5b15ba
// 005b159c  85f6                 test esi, esi
// 005b159e  7514                 jne 0x5b15b4
// 005b15a0  ffd3                 call ebx
// 005b15a2  33c0                 xor eax, eax
// 005b15a4  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005b15a7  7202                 jb 0x5b15ab
// 005b15a9  ffd3                 call ebx
// 005b15ab  83c708               add edi, 8
// 005b15ae  ebb0                 jmp 0x5b1560
// 005b15b0  8b06                 mov eax, dword ptr [esi]
// 005b15b2  ebc4                 jmp 0x5b1578
// 005b15b4  8b06                 mov eax, dword ptr [esi]
// 005b15b6  ebec                 jmp 0x5b15a4
// 005b15b8  33c0                 xor eax, eax
// 005b15ba  5f                   pop edi
// 005b15bb  5e                   pop esi
// 005b15bc  5d                   pop ebp
// 005b15bd  5b                   pop ebx
// 005b15be  59                   pop ecx
// 005b15bf  c3                   ret 


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
