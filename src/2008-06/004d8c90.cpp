// from server: 100% by tester
// roc 2008-06 004d8c90  unit: RBX::ViewBase  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8c90
//
// 004d8c90  6aff                 push -1
// 004d8c92  683b467d00           push 0x7d463b
// 004d8c97  64a100000000         mov eax, dword ptr fs:[0]
// 004d8c9d  50                   push eax
// 004d8c9e  64892500000000       mov dword ptr fs:[0], esp
// 004d8ca5  83ec08               sub esp, 8
// 004d8ca8  c7042400000000       mov dword ptr [esp], 0
// 004d8caf  68f8010000           push 0x1f8
// 004d8cb4  c644240400           mov byte ptr [esp + 4], 0
// 004d8cb9  ff15b0288000         call dword ptr [0x8028b0]
// 004d8cbf  83c404               add esp, 4
// 004d8cc2  89442404             mov dword ptr [esp + 4], eax
// 004d8cc6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004d8cce  85c0                 test eax, eax
// 004d8cd0  7409                 je 0x4d8cdb
// 004d8cd2  8bc8                 mov ecx, eax
// 004d8cd4  e867291100           call 0x5eb640
// 004d8cd9  eb02                 jmp 0x4d8cdd
// 004d8cdb  33c0                 xor eax, eax
// 004d8cdd  8b0c24               mov ecx, dword ptr [esp]
// 004d8ce0  56                   push esi
// 004d8ce1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004d8ce5  51                   push ecx
// 004d8ce6  50                   push eax
// 004d8ce7  8bce                 mov ecx, esi
// 004d8ce9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004d8cf1  e8eafeffff           call 0x4d8be0
// 004d8cf6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d8cfa  8bc6                 mov eax, esi
// 004d8cfc  5e                   pop esi
// 004d8cfd  64890d00000000       mov dword ptr fs:[0], ecx
// 004d8d04  83c414               add esp, 0x14
// 004d8d07  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x1f8];
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
