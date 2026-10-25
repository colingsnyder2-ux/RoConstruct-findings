// from server: 100% by king_originala
// roc 2008-06 005e56e0  unit: RBX::JointsService  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e56e0
//
// 005e56e0  6aff                 push -1
// 005e56e2  683b467d00           push 0x7d463b
// 005e56e7  64a100000000         mov eax, dword ptr fs:[0]
// 005e56ed  50                   push eax
// 005e56ee  64892500000000       mov dword ptr fs:[0], esp
// 005e56f5  83ec08               sub esp, 8
// 005e56f8  c7042400000000       mov dword ptr [esp], 0
// 005e56ff  6854010000           push 0x154
// 005e5704  c644240400           mov byte ptr [esp + 4], 0
// 005e5709  ff15b0288000         call dword ptr [0x8028b0]
// 005e570f  83c404               add esp, 4
// 005e5712  89442404             mov dword ptr [esp + 4], eax
// 005e5716  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e571e  85c0                 test eax, eax
// 005e5720  740e                 je 0x5e5730
// 005e5722  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e5726  51                   push ecx
// 005e5727  8bc8                 mov ecx, eax
// 005e5729  e832f3ffff           call 0x5e4a60
// 005e572e  eb02                 jmp 0x5e5732
// 005e5730  33c0                 xor eax, eax
// 005e5732  8b1424               mov edx, dword ptr [esp]
// 005e5735  56                   push esi
// 005e5736  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e573a  52                   push edx
// 005e573b  50                   push eax
// 005e573c  8bce                 mov ecx, esi
// 005e573e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e5746  e805d3ecff           call 0x4b2a50
// 005e574b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e574f  8bc6                 mov eax, esi
// 005e5751  5e                   pop esi
// 005e5752  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5759  83c414               add esp, 0x14
// 005e575c  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);

struct Product {
    unsigned char storage[0x154];

    Product(void* argument);

    static void* operator new(unsigned int size) {
        return malloc(size);
    }

    static void operator delete(void* memory);
};

struct Result {
    Result(Product* product, unsigned int tag);
};

Result __cdecl create(void* argument)
{
    volatile unsigned int tag = 0;
    *reinterpret_cast<volatile unsigned char*>(&tag) = 0;
    Product* product = new Product(argument);
    return Result(product, tag);
}
