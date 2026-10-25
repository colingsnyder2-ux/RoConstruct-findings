// from server: 100% by tester
// roc 2008-06 0048ec70  unit: RBX::VStarterPackService::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ec70
//
// 0048ec70  6aff                 push -1
// 0048ec72  683b467d00           push 0x7d463b
// 0048ec77  64a100000000         mov eax, dword ptr fs:[0]
// 0048ec7d  50                   push eax
// 0048ec7e  64892500000000       mov dword ptr fs:[0], esp
// 0048ec85  83ec08               sub esp, 8
// 0048ec88  c7042400000000       mov dword ptr [esp], 0
// 0048ec8f  6868010000           push 0x168
// 0048ec94  c644240400           mov byte ptr [esp + 4], 0
// 0048ec99  ff15b0288000         call dword ptr [0x8028b0]
// 0048ec9f  83c404               add esp, 4
// 0048eca2  89442404             mov dword ptr [esp + 4], eax
// 0048eca6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048ecae  85c0                 test eax, eax
// 0048ecb0  7409                 je 0x48ecbb
// 0048ecb2  8bc8                 mov ecx, eax
// 0048ecb4  e8e7231400           call 0x5d10a0
// 0048ecb9  eb02                 jmp 0x48ecbd
// 0048ecbb  33c0                 xor eax, eax
// 0048ecbd  8b0c24               mov ecx, dword ptr [esp]
// 0048ecc0  56                   push esi
// 0048ecc1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048ecc5  51                   push ecx
// 0048ecc6  50                   push eax
// 0048ecc7  8bce                 mov ecx, esi
// 0048ecc9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0048ecd1  e8eafeffff           call 0x48ebc0
// 0048ecd6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048ecda  8bc6                 mov eax, esi
// 0048ecdc  5e                   pop esi
// 0048ecdd  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ece4  83c414               add esp, 0x14
// 0048ece7  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x168];
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
