// from server: 100% by tester
// roc 2008-06 0048bcf0  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048bcf0
//
// 0048bcf0  6aff                 push -1
// 0048bcf2  683b467d00           push 0x7d463b
// 0048bcf7  64a100000000         mov eax, dword ptr fs:[0]
// 0048bcfd  50                   push eax
// 0048bcfe  64892500000000       mov dword ptr fs:[0], esp
// 0048bd05  83ec08               sub esp, 8
// 0048bd08  c7042400000000       mov dword ptr [esp], 0
// 0048bd0f  6858010000           push 0x158
// 0048bd14  c644240400           mov byte ptr [esp + 4], 0
// 0048bd19  ff15b0288000         call dword ptr [0x8028b0]
// 0048bd1f  83c404               add esp, 4
// 0048bd22  89442404             mov dword ptr [esp + 4], eax
// 0048bd26  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048bd2e  85c0                 test eax, eax
// 0048bd30  7409                 je 0x48bd3b
// 0048bd32  8bc8                 mov ecx, eax
// 0048bd34  e877b41400           call 0x5d71b0
// 0048bd39  eb02                 jmp 0x48bd3d
// 0048bd3b  33c0                 xor eax, eax
// 0048bd3d  8b0c24               mov ecx, dword ptr [esp]
// 0048bd40  56                   push esi
// 0048bd41  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048bd45  51                   push ecx
// 0048bd46  50                   push eax
// 0048bd47  8bce                 mov ecx, esi
// 0048bd49  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0048bd51  e88af8ffff           call 0x48b5e0
// 0048bd56  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048bd5a  8bc6                 mov eax, esi
// 0048bd5c  5e                   pop esi
// 0048bd5d  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bd64  83c414               add esp, 0x14
// 0048bd67  c3                   ret 

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
