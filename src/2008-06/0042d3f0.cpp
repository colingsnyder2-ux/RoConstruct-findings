// from server: 100% by tester
// roc 2008-06 0042d3f0  unit: boost::any::H::?$holder  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d3f0
//
// 0042d3f0  6aff                 push -1
// 0042d3f2  683b467d00           push 0x7d463b
// 0042d3f7  64a100000000         mov eax, dword ptr fs:[0]
// 0042d3fd  50                   push eax
// 0042d3fe  64892500000000       mov dword ptr fs:[0], esp
// 0042d405  83ec08               sub esp, 8
// 0042d408  c7042400000000       mov dword ptr [esp], 0
// 0042d40f  68f8010000           push 0x1f8
// 0042d414  c644240400           mov byte ptr [esp + 4], 0
// 0042d419  ff15b0288000         call dword ptr [0x8028b0]
// 0042d41f  83c404               add esp, 4
// 0042d422  89442404             mov dword ptr [esp + 4], eax
// 0042d426  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042d42e  85c0                 test eax, eax
// 0042d430  7409                 je 0x42d43b
// 0042d432  8bc8                 mov ecx, eax
// 0042d434  e857101800           call 0x5ae490
// 0042d439  eb02                 jmp 0x42d43d
// 0042d43b  33c0                 xor eax, eax
// 0042d43d  8b0c24               mov ecx, dword ptr [esp]
// 0042d440  56                   push esi
// 0042d441  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0042d445  51                   push ecx
// 0042d446  50                   push eax
// 0042d447  8bce                 mov ecx, esi
// 0042d449  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0042d451  e86afeffff           call 0x42d2c0
// 0042d456  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042d45a  8bc6                 mov eax, esi
// 0042d45c  5e                   pop esi
// 0042d45d  64890d00000000       mov dword ptr fs:[0], ecx
// 0042d464  83c414               add esp, 0x14
// 0042d467  c3                   ret 

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
