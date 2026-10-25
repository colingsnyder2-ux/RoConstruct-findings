// from server: 100% by tester
// roc 2008-06 005c28a0  unit: RBX::VBodyAngularVelocity::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c28a0
//
// 005c28a0  6aff                 push -1
// 005c28a2  683b467d00           push 0x7d463b
// 005c28a7  64a100000000         mov eax, dword ptr fs:[0]
// 005c28ad  50                   push eax
// 005c28ae  64892500000000       mov dword ptr fs:[0], esp
// 005c28b5  83ec08               sub esp, 8
// 005c28b8  c7042400000000       mov dword ptr [esp], 0
// 005c28bf  6890010000           push 0x190
// 005c28c4  c644240400           mov byte ptr [esp + 4], 0
// 005c28c9  ff15b0288000         call dword ptr [0x8028b0]
// 005c28cf  83c404               add esp, 4
// 005c28d2  89442404             mov dword ptr [esp + 4], eax
// 005c28d6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c28de  85c0                 test eax, eax
// 005c28e0  7409                 je 0x5c28eb
// 005c28e2  8bc8                 mov ecx, eax
// 005c28e4  e867020700           call 0x632b50
// 005c28e9  eb02                 jmp 0x5c28ed
// 005c28eb  33c0                 xor eax, eax
// 005c28ed  8b0c24               mov ecx, dword ptr [esp]
// 005c28f0  56                   push esi
// 005c28f1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c28f5  51                   push ecx
// 005c28f6  50                   push eax
// 005c28f7  8bce                 mov ecx, esi
// 005c28f9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c2901  e8eafeffff           call 0x5c27f0
// 005c2906  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c290a  8bc6                 mov eax, esi
// 005c290c  5e                   pop esi
// 005c290d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2914  83c414               add esp, 0x14
// 005c2917  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x190];
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
