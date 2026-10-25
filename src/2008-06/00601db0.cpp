// from server: 100% by king_originala
// roc 2008-06 00601db0  unit: RBX::UnifiedImageWidget  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601db0
//
// 00601db0  6aff                 push -1
// 00601db2  683b467d00           push 0x7d463b
// 00601db7  64a100000000         mov eax, dword ptr fs:[0]
// 00601dbd  50                   push eax
// 00601dbe  64892500000000       mov dword ptr fs:[0], esp
// 00601dc5  83ec08               sub esp, 8
// 00601dc8  c7042400000000       mov dword ptr [esp], 0
// 00601dcf  6868010000           push 0x168
// 00601dd4  c644240400           mov byte ptr [esp + 4], 0
// 00601dd9  ff15b0288000         call dword ptr [0x8028b0]
// 00601ddf  83c404               add esp, 4
// 00601de2  89442404             mov dword ptr [esp + 4], eax
// 00601de6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00601dee  85c0                 test eax, eax
// 00601df0  740e                 je 0x601e00
// 00601df2  8d4c241c             lea ecx, [esp + 0x1c]
// 00601df6  51                   push ecx
// 00601df7  8bc8                 mov ecx, eax
// 00601df9  e892f1ffff           call 0x600f90
// 00601dfe  eb02                 jmp 0x601e02
// 00601e00  33c0                 xor eax, eax
// 00601e02  8b1424               mov edx, dword ptr [esp]
// 00601e05  56                   push esi
// 00601e06  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00601e0a  52                   push edx
// 00601e0b  50                   push eax
// 00601e0c  8bce                 mov ecx, esi
// 00601e0e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00601e16  e865f4ffff           call 0x601280
// 00601e1b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00601e1f  8bc6                 mov eax, esi
// 00601e21  5e                   pop esi
// 00601e22  64890d00000000       mov dword ptr fs:[0], ecx
// 00601e29  83c414               add esp, 0x14
// 00601e2c  c3                   ret 

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
    Product(void**);
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

Result __cdecl create(void* argument)
{
    Deleter deleter = { 0 };
    *(volatile unsigned char*)&deleter.unused = 0;
    return Result(new Product(&argument), deleter);
}
