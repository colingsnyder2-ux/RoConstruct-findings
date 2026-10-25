// from server: 100% by tester
// roc 2008-06 005c2e10  unit: RBX::VObjectValue::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2e10
//
// 005c2e10  6aff                 push -1
// 005c2e12  683b467d00           push 0x7d463b
// 005c2e17  64a100000000         mov eax, dword ptr fs:[0]
// 005c2e1d  50                   push eax
// 005c2e1e  64892500000000       mov dword ptr fs:[0], esp
// 005c2e25  83ec08               sub esp, 8
// 005c2e28  c7042400000000       mov dword ptr [esp], 0
// 005c2e2f  6858010000           push 0x158
// 005c2e34  c644240400           mov byte ptr [esp + 4], 0
// 005c2e39  ff15b0288000         call dword ptr [0x8028b0]
// 005c2e3f  83c404               add esp, 4
// 005c2e42  89442404             mov dword ptr [esp + 4], eax
// 005c2e46  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c2e4e  85c0                 test eax, eax
// 005c2e50  7409                 je 0x5c2e5b
// 005c2e52  8bc8                 mov ecx, eax
// 005c2e54  e837900700           call 0x63be90
// 005c2e59  eb02                 jmp 0x5c2e5d
// 005c2e5b  33c0                 xor eax, eax
// 005c2e5d  8b0c24               mov ecx, dword ptr [esp]
// 005c2e60  56                   push esi
// 005c2e61  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c2e65  51                   push ecx
// 005c2e66  50                   push eax
// 005c2e67  8bce                 mov ecx, esi
// 005c2e69  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c2e71  e8eafeffff           call 0x5c2d60
// 005c2e76  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c2e7a  8bc6                 mov eax, esi
// 005c2e7c  5e                   pop esi
// 005c2e7d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2e84  83c414               add esp, 0x14
// 005c2e87  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x158];
    Product();
};

struct Deleter {
    union {
        unsigned int value;
        unsigned char unused;
    };
};

struct Result {
    Result(Product*, Deleter);
};

Result __cdecl create()
{
    Deleter deleter = { 0 };
    *(volatile unsigned char*)&deleter.unused = 0;
    return Result(new Product, deleter);
}
