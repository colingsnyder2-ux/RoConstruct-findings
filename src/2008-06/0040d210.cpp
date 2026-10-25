// from server: 100% by tester
// roc 2008-06 0040d210  unit: RBX::Reflection::Metadata::Item  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d210
//
// 0040d210  6aff                 push -1
// 0040d212  683b467d00           push 0x7d463b
// 0040d217  64a100000000         mov eax, dword ptr fs:[0]
// 0040d21d  50                   push eax
// 0040d21e  64892500000000       mov dword ptr fs:[0], esp
// 0040d225  83ec08               sub esp, 8
// 0040d228  c7042400000000       mov dword ptr [esp], 0
// 0040d22f  6830010000           push 0x130
// 0040d234  c644240400           mov byte ptr [esp + 4], 0
// 0040d239  ff15b0288000         call dword ptr [0x8028b0]
// 0040d23f  83c404               add esp, 4
// 0040d242  89442404             mov dword ptr [esp + 4], eax
// 0040d246  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040d24e  85c0                 test eax, eax
// 0040d250  7409                 je 0x40d25b
// 0040d252  8bc8                 mov ecx, eax
// 0040d254  e867fbffff           call 0x40cdc0
// 0040d259  eb02                 jmp 0x40d25d
// 0040d25b  33c0                 xor eax, eax
// 0040d25d  8b0c24               mov ecx, dword ptr [esp]
// 0040d260  56                   push esi
// 0040d261  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0040d265  51                   push ecx
// 0040d266  50                   push eax
// 0040d267  8bce                 mov ecx, esi
// 0040d269  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0040d271  e87ae3ffff           call 0x40b5f0
// 0040d276  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040d27a  8bc6                 mov eax, esi
// 0040d27c  5e                   pop esi
// 0040d27d  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d284  83c414               add esp, 0x14
// 0040d287  c3                   ret 

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
