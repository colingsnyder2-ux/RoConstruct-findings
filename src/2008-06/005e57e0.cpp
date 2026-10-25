// from server: 100% by king_originala
// roc 2008-06 005e57e0  unit: RBX::JointsService  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e57e0
//
// 005e57e0  6aff                 push -1
// 005e57e2  683b467d00           push 0x7d463b
// 005e57e7  64a100000000         mov eax, dword ptr fs:[0]
// 005e57ed  50                   push eax
// 005e57ee  64892500000000       mov dword ptr fs:[0], esp
// 005e57f5  83ec08               sub esp, 8
// 005e57f8  c7042400000000       mov dword ptr [esp], 0
// 005e57ff  6854010000           push 0x154
// 005e5804  c644240400           mov byte ptr [esp + 4], 0
// 005e5809  ff15b0288000         call dword ptr [0x8028b0]
// 005e580f  83c404               add esp, 4
// 005e5812  89442404             mov dword ptr [esp + 4], eax
// 005e5816  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e581e  85c0                 test eax, eax
// 005e5820  740e                 je 0x5e5830
// 005e5822  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e5826  51                   push ecx
// 005e5827  8bc8                 mov ecx, eax
// 005e5829  e802f5ffff           call 0x5e4d30
// 005e582e  eb02                 jmp 0x5e5832
// 005e5830  33c0                 xor eax, eax
// 005e5832  8b1424               mov edx, dword ptr [esp]
// 005e5835  56                   push esi
// 005e5836  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e583a  52                   push edx
// 005e583b  50                   push eax
// 005e583c  8bce                 mov ecx, esi
// 005e583e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e5846  e8e5d6ecff           call 0x4b2f30
// 005e584b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e584f  8bc6                 mov eax, esi
// 005e5851  5e                   pop esi
// 005e5852  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5859  83c414               add esp, 0x14
// 005e585c  c3                   ret 

extern "C" void *(__cdecl *malloc)(unsigned int);

struct Product
{
    unsigned char storage[0x154];

    Product(int);
    static void *__cdecl operator new(unsigned int size) throw();
    static void __cdecl operator delete(void *);
};

__forceinline void *__cdecl Product::operator new(unsigned int size) throw()
{
    return malloc(size);
}

struct Tag
{
};

struct Result
{
    void *object;
    void *control;

    Result(Product *, Tag);
    ~Result();
};

Result __cdecl createProduct(int argument)
{
    return Result(new Product(argument), Tag());
}
