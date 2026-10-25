// from server: 100% by king_originala
// roc 2008-06 00602350  unit: RBX::UnifiedImageWidget  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00602350
//
// 00602350  6aff                 push -1
// 00602352  683b467d00           push 0x7d463b
// 00602357  64a100000000         mov eax, dword ptr fs:[0]
// 0060235d  50                   push eax
// 0060235e  64892500000000       mov dword ptr fs:[0], esp
// 00602365  83ec08               sub esp, 8
// 00602368  c7042400000000       mov dword ptr [esp], 0
// 0060236f  6854010000           push 0x154
// 00602374  c644240400           mov byte ptr [esp + 4], 0
// 00602379  ff15b0288000         call dword ptr [0x8028b0]
// 0060237f  83c404               add esp, 4
// 00602382  89442404             mov dword ptr [esp + 4], eax
// 00602386  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060238e  85c0                 test eax, eax
// 00602390  740e                 je 0x6023a0
// 00602392  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00602396  51                   push ecx
// 00602397  8bc8                 mov ecx, eax
// 00602399  e872010500           call 0x652510
// 0060239e  eb02                 jmp 0x6023a2
// 006023a0  33c0                 xor eax, eax
// 006023a2  8b1424               mov edx, dword ptr [esp]
// 006023a5  56                   push esi
// 006023a6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006023aa  52                   push edx
// 006023ab  50                   push eax
// 006023ac  8bce                 mov ecx, esi
// 006023ae  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 006023b6  e845f4ffff           call 0x601800
// 006023bb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006023bf  8bc6                 mov eax, esi
// 006023c1  5e                   pop esi
// 006023c2  64890d00000000       mov dword ptr fs:[0], ecx
// 006023c9  83c414               add esp, 0x14
// 006023cc  c3                   ret 

extern "C" {
    extern void* (__cdecl *allocate)(unsigned int);
}

inline void* __cdecl operator new(unsigned int size)
{
    return allocate(size);
}

void __cdecl operator delete(void*);

struct Product {
    unsigned char storage[0x154];
    Product(void*);
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
    return Result(new Product(argument), deleter);
}
