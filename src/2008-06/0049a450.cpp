// from server: 100% by tester
// roc 2008-06 0049a450  unit: RBX::Network::VClient::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a450
//
// 0049a450  6aff                 push -1
// 0049a452  683b467d00           push 0x7d463b
// 0049a457  64a100000000         mov eax, dword ptr fs:[0]
// 0049a45d  50                   push eax
// 0049a45e  64892500000000       mov dword ptr fs:[0], esp
// 0049a465  83ec08               sub esp, 8
// 0049a468  c7042400000000       mov dword ptr [esp], 0
// 0049a46f  6884010000           push 0x184
// 0049a474  c644240400           mov byte ptr [esp + 4], 0
// 0049a479  ff15b0288000         call dword ptr [0x8028b0]
// 0049a47f  83c404               add esp, 4
// 0049a482  89442404             mov dword ptr [esp + 4], eax
// 0049a486  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049a48e  85c0                 test eax, eax
// 0049a490  7409                 je 0x49a49b
// 0049a492  8bc8                 mov ecx, eax
// 0049a494  e897a60000           call 0x4a4b30
// 0049a499  eb02                 jmp 0x49a49d
// 0049a49b  33c0                 xor eax, eax
// 0049a49d  8b0c24               mov ecx, dword ptr [esp]
// 0049a4a0  56                   push esi
// 0049a4a1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0049a4a5  51                   push ecx
// 0049a4a6  50                   push eax
// 0049a4a7  8bce                 mov ecx, esi
// 0049a4a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0049a4b1  e8eafeffff           call 0x49a3a0
// 0049a4b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049a4ba  8bc6                 mov eax, esi
// 0049a4bc  5e                   pop esi
// 0049a4bd  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a4c4  83c414               add esp, 0x14
// 0049a4c7  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x184];
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
