// from server: 100% by king_originala
// roc 2008-06 0040d290  unit: RBX::Reflection::Metadata::Item  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d290
//
// 0040d290  6aff                 push -1
// 0040d292  683b467d00           push 0x7d463b
// 0040d297  64a100000000         mov eax, dword ptr fs:[0]
// 0040d29d  50                   push eax
// 0040d29e  64892500000000       mov dword ptr fs:[0], esp
// 0040d2a5  83ec08               sub esp, 8
// 0040d2a8  c7042400000000       mov dword ptr [esp], 0
// 0040d2af  6830010000           push 0x130
// 0040d2b4  c644240400           mov byte ptr [esp + 4], 0
// 0040d2b9  ff15b0288000         call dword ptr [0x8028b0]
// 0040d2bf  83c404               add esp, 4
// 0040d2c2  89442404             mov dword ptr [esp + 4], eax
// 0040d2c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040d2ce  85c0                 test eax, eax
// 0040d2d0  7409                 je 0x40d2db
// 0040d2d2  8bc8                 mov ecx, eax
// 0040d2d4  e897fbffff           call 0x40ce70
// 0040d2d9  eb02                 jmp 0x40d2dd
// 0040d2db  33c0                 xor eax, eax
// 0040d2dd  8b0c24               mov ecx, dword ptr [esp]
// 0040d2e0  56                   push esi
// 0040d2e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0040d2e5  51                   push ecx
// 0040d2e6  50                   push eax
// 0040d2e7  8bce                 mov ecx, esi
// 0040d2e9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0040d2f1  e84aeaffff           call 0x40bd40
// 0040d2f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040d2fa  8bc6                 mov eax, esi
// 0040d2fc  5e                   pop esi
// 0040d2fd  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d304  83c414               add esp, 0x14
// 0040d307  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x130];
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
