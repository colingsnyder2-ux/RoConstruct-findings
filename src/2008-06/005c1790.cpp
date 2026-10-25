// from server: 100% by tester
// roc 2008-06 005c1790  unit: RBX::VForceField::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1790
//
// 005c1790  6aff                 push -1
// 005c1792  683b467d00           push 0x7d463b
// 005c1797  64a100000000         mov eax, dword ptr fs:[0]
// 005c179d  50                   push eax
// 005c179e  64892500000000       mov dword ptr fs:[0], esp
// 005c17a5  83ec08               sub esp, 8
// 005c17a8  c7042400000000       mov dword ptr [esp], 0
// 005c17af  6840010000           push 0x140
// 005c17b4  c644240400           mov byte ptr [esp + 4], 0
// 005c17b9  ff15b0288000         call dword ptr [0x8028b0]
// 005c17bf  83c404               add esp, 4
// 005c17c2  89442404             mov dword ptr [esp + 4], eax
// 005c17c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c17ce  85c0                 test eax, eax
// 005c17d0  7409                 je 0x5c17db
// 005c17d2  8bc8                 mov ecx, eax
// 005c17d4  e807c70600           call 0x62dee0
// 005c17d9  eb02                 jmp 0x5c17dd
// 005c17db  33c0                 xor eax, eax
// 005c17dd  8b0c24               mov ecx, dword ptr [esp]
// 005c17e0  56                   push esi
// 005c17e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c17e5  51                   push ecx
// 005c17e6  50                   push eax
// 005c17e7  8bce                 mov ecx, esi
// 005c17e9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c17f1  e8eafeffff           call 0x5c16e0
// 005c17f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c17fa  8bc6                 mov eax, esi
// 005c17fc  5e                   pop esi
// 005c17fd  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1804  83c414               add esp, 0x14
// 005c1807  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x140];
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
