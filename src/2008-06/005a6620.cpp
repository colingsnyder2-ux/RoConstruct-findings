// from server: 100% by colin
// roc 2008-06 005a6620  unit: RBX::Stats::Item  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6620
//
// 005a6620  6aff                 push -1
// 005a6622  683b467d00           push 0x7d463b
// 005a6627  64a100000000         mov eax, dword ptr fs:[0]
// 005a662d  50                   push eax
// 005a662e  64892500000000       mov dword ptr fs:[0], esp
// 005a6635  83ec08               sub esp, 8
// 005a6638  c7042400000000       mov dword ptr [esp], 0
// 005a663f  6858010000           push 0x158
// 005a6644  c644240400           mov byte ptr [esp + 4], 0
// 005a6649  ff15b0288000         call dword ptr [0x8028b0]
// 005a664f  83c404               add esp, 4
// 005a6652  89442404             mov dword ptr [esp + 4], eax
// 005a6656  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a665e  85c0                 test eax, eax
// 005a6660  7418                 je 0x5a667a
// 005a6662  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a6666  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a666a  51                   push ecx
// 005a666b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a666f  52                   push edx
// 005a6670  51                   push ecx
// 005a6671  8bc8                 mov ecx, eax
// 005a6673  e818f6ffff           call 0x5a5c90
// 005a6678  eb02                 jmp 0x5a667c
// 005a667a  33c0                 xor eax, eax
// 005a667c  8b1424               mov edx, dword ptr [esp]
// 005a667f  56                   push esi
// 005a6680  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005a6684  52                   push edx
// 005a6685  50                   push eax
// 005a6686  8bce                 mov ecx, esi
// 005a6688  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005a6690  e8fba9ffff           call 0x5a1090
// 005a6695  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a6699  8bc6                 mov eax, esi
// 005a669b  5e                   pop esi
// 005a669c  64890d00000000       mov dword ptr fs:[0], ecx
// 005a66a3  83c414               add esp, 0x14
// 005a66a6  c3                   ret 

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
    Product(void*, void*, void*);
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

Result __cdecl create(void* first, void* second, void* third)
{
    Deleter deleter = { 0 };
    *(volatile unsigned char*)&deleter.unused = 0;
    return Result(new Product(first, second, third), deleter);
}
