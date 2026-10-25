// from server: 100% by tester
// roc 2008-06 004cd760  unit: RBX::PhysicsService  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cd760
//
// 004cd760  6aff                 push -1
// 004cd762  683b467d00           push 0x7d463b
// 004cd767  64a100000000         mov eax, dword ptr fs:[0]
// 004cd76d  50                   push eax
// 004cd76e  64892500000000       mov dword ptr fs:[0], esp
// 004cd775  83ec08               sub esp, 8
// 004cd778  c7042400000000       mov dword ptr [esp], 0
// 004cd77f  6858010000           push 0x158
// 004cd784  c644240400           mov byte ptr [esp + 4], 0
// 004cd789  ff15b0288000         call dword ptr [0x8028b0]
// 004cd78f  83c404               add esp, 4
// 004cd792  89442404             mov dword ptr [esp + 4], eax
// 004cd796  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cd79e  85c0                 test eax, eax
// 004cd7a0  7409                 je 0x4cd7ab
// 004cd7a2  8bc8                 mov ecx, eax
// 004cd7a4  e807feffff           call 0x4cd5b0
// 004cd7a9  eb02                 jmp 0x4cd7ad
// 004cd7ab  33c0                 xor eax, eax
// 004cd7ad  8b0c24               mov ecx, dword ptr [esp]
// 004cd7b0  56                   push esi
// 004cd7b1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004cd7b5  51                   push ecx
// 004cd7b6  50                   push eax
// 004cd7b7  8bce                 mov ecx, esi
// 004cd7b9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004cd7c1  e8fad8ffff           call 0x4cb0c0
// 004cd7c6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cd7ca  8bc6                 mov eax, esi
// 004cd7cc  5e                   pop esi
// 004cd7cd  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd7d4  83c414               add esp, 0x14
// 004cd7d7  c3                   ret 

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
