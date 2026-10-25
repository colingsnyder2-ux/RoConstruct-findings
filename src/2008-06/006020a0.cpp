// from server: 100% by tester
// roc 2008-06 006020a0  unit: RBX::UnifiedImageWidget  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006020a0
//
// 006020a0  6aff                 push -1
// 006020a2  683b467d00           push 0x7d463b
// 006020a7  64a100000000         mov eax, dword ptr fs:[0]
// 006020ad  50                   push eax
// 006020ae  64892500000000       mov dword ptr fs:[0], esp
// 006020b5  83ec08               sub esp, 8
// 006020b8  c7042400000000       mov dword ptr [esp], 0
// 006020bf  6898010000           push 0x198
// 006020c4  c644240400           mov byte ptr [esp + 4], 0
// 006020c9  ff15b0288000         call dword ptr [0x8028b0]
// 006020cf  83c404               add esp, 4
// 006020d2  89442404             mov dword ptr [esp + 4], eax
// 006020d6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006020de  85c0                 test eax, eax
// 006020e0  7409                 je 0x6020eb
// 006020e2  8bc8                 mov ecx, eax
// 006020e4  e877da0400           call 0x64fb60
// 006020e9  eb02                 jmp 0x6020ed
// 006020eb  33c0                 xor eax, eax
// 006020ed  8b0c24               mov ecx, dword ptr [esp]
// 006020f0  56                   push esi
// 006020f1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006020f5  51                   push ecx
// 006020f6  50                   push eax
// 006020f7  8bce                 mov ecx, esi
// 006020f9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00602101  e83af4ffff           call 0x601540
// 00602106  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060210a  8bc6                 mov eax, esi
// 0060210c  5e                   pop esi
// 0060210d  64890d00000000       mov dword ptr fs:[0], ecx
// 00602114  83c414               add esp, 0x14
// 00602117  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x198];
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
